# spring security 재시작시 permitAll()했음에도 에러가 뜬 이유!

![스크린샷 2021-09-12 오후 8.16.28](/Users/anjin-u/Desktop/스크린샷 2021-09-12 오후 8.16.28.png)



애초에 securityConfig에서 permitAll도 아닌 어나니머스로 해주었음에도 401이 뜨는 에러가 발생했었다.



아무리 찾아도 무슨 이유 때문인지 몰라서 몇 시간을 헤맸다.









일단 나의 케이스에서는 jpa ddl auto를 create로 설정해주었다. 그러한 이유로 데이터 베이스가 재시작 시 마다 초기화 되었고, auth/signup에서 회원가입한 멤버들도 초기화 되었으나 authTokenCookie는 삭제되지 않았다. 







그런데 여기서 의도치 않은 오류가 발생하게 되었는데 애초에 parse 방식이 같았기에 jwtFilter에서 Db에 존재하지 않는 사용자의 토큰을 파싱하였으며, 유효성 검사 또한 Experation을 토대로 한 것이었기에 유효성 검사마저 통과한 것이다. 그렇게 모든 검증과정을 통과한 토큰은 userDetailsSerivce에서 userPk를 찾는 과정 중 Db에 존재하지 않아 에러가 떴던 것이다. 















인터넷에는 이런 사례가 안보였기에, 이렇게 적어본다.









(사실 이렇게 멍청한 사람이 또 있을까 싶다.)