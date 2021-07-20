# nohup

aws에서 api를 배포할 때 접속 시에만 api가 작동하면 안되므로 위 명령어를 쓴다. 

사용 법은 

$ nohup java -jar spring-boot-mysql-0.0.1-SNAPSHOT.jar &

이다. 별 다를건 없고, nohup 뒤에 원래 쓰던 빌드 명령어, 그리고 마지막에 &를 넣으면 된다.

