# if none match와 if modified since



if none match와 if modified since는 http 헤더 중 하나이며, 하는 역할을 간단히 말하자면 클라이언트가 가진 파일과 서버 측 파일에 대한 정보를 비교해서 바뀌었을 경우 갱신을, 그대로일 경우 클라이언트측에 있는 파일을 그대로 쓰게 된다.



## if none match 

 이 헤더는 서버에서 리스폰스로 html 파일을 넘길 때 헤더를 통해 엔터티 태그(Etag)를 같이 넘기게 되는데 그 때 넘긴 etag를 클라이언트가 기억하고 있다가 expires 헤더(만료 기간)이 지나서 오래된 파일이 되었다고 판단되었을 때 서버로 if none match 헤더에 가장 최근에 받아왔던 html 파일의 etag를 요청 헤더에 넣어 전송한다. 



그렇게 html 파일이 변경되었다면 etag는 조금이라도 바뀔 시 같이 변경되기에 재전송을 응답할 수 있다.



if modified since와 다르게 etag를 통해 판단하기 때문에 몇 초의 오차 조차도 중요한 웹 어플리케이션일 경우 두 헤더 동시에 존재시 if modified since 헤더를 무시하게된다.





## if modified since

 위 헤더는 html 파일이 만들어진 시각을 저장하게 되며, 위에서 언급한 바와 같이 무시될 수도 있으며, 정말 혹시 모르지만 너무 빨라서 정말 눈깜작할 새에 변경시 html 파일 변경 내용이 적용되지 않을 수도 있다.







