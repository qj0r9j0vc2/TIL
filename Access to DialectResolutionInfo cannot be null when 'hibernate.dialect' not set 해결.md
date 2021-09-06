jpa를 써보려 했는데...







![img](https://blog.kakaocdn.net/dn/RtYGl/btrcVkmenxz/mUSK41yIe22j0d73CCOLEk/img.png)기쁜 맘으로 실행중





![img](https://blog.kakaocdn.net/dn/mRFP2/btrc3qL2o1i/XGyjY0CaUmUvSyTb0rRhw1/img.png)아











.

.

.

.

.

아.

아

아아아



아



저런 오류 하나 뜨면 몇 시간은 금방이라서 더 싫다. 물론 그 덕분에 jpa에 대한 틀이 잡히긴 했는데.... ㅠ







해결 방법은 간단했다.

Access to DialectResolutionInfo cannot be null when 'hibernate.dialect' not set



위의 오류 문구 그대로

하이버네이트 다이얼렉트 설정을 안해놔서 생긴 일이었다. (..........)





쨋든 그 때문에 yml로 쓰던 것도 properties로 바꾸고 추가해서 썼다.





![img](https://blog.kakaocdn.net/dn/bmHWbC/btrcXlkWoNW/5IkE1V8QZ191iW43vQSauk/img.png)

![img](https://blog.kakaocdn.net/dn/bloyHr/btrc2o1ZWLL/TdDshj3avKyVFUhC83lSK1/img.png)바꾼 모습이다.

하.....





이거 때문에 3시간 내내 뭐한건지 모르겠다. 나한테만 이러니 왜.....









이상 여태까지 4개월 이내로 각종 세팅으로 날린 시간 모두 더하면 최소 일주일 정도는 되는 필자의 이야기였습니다....











아 그리고

[https://team00csduck.tistory.com/entry/You-have-an-error-in-your-SQL-syntax-check-the-manual-that-corresponds-to-your-MySQL-server-version-for-the-right-syntax-to-use-near-typeMyISAM-%EC%98%A4%EB%A5%98-%EB%8C%80%EC%9D%91?category=827807](https://team00csduck.tistory.com/entry/You-have-an-error-in-your-SQL-syntax-check-the-manual-that-corresponds-to-your-MySQL-server-version-for-the-right-syntax-to-use-near-typeMyISAM-오류-대응?category=827807) 

[
You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to useSpring 기반 애플리케이션 가동 시에 mysql 4.x 버전이나 mariaDB의 낮은 버전과 최신 버전 사이의 문법 차이로 생기는 오류이다. 차이는 전자의 경우 type = MyISAM을 사용하지만, 후자(최신버전)의 경우 eteam00csduck.tistory.com](https://team00csduck.tistory.com/entry/You-have-an-error-in-your-SQL-syntax-check-the-manual-that-corresponds-to-your-MySQL-server-version-for-the-right-syntax-to-use-near-typeMyISAM-오류-대응?category=827807)



이분 해결했네요. 한글 사이트가 이 분 밖에 없고 영어 사이트도 그닥인듯 

최고!!









진짜 지겹다 오류....