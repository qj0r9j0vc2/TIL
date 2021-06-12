# SQL view란?

 view란 가상의 테이블을 의미하며 테이블은 실제로 데이터를 가지고 있지만 view는 그렇지 않고, 단지 뷰 정의(View Definition)만을 가지괴 있다. 쿼리에서 뷰가 사용되면 뷰 정의를 참조해서 DBMS가 자동적으로 쿼리를 재작성하여 사용할 수 있게한다. 

뷰 생성은 CREATE VIEW 문으로 할 수 있으며, 그 예는 다음과 같다.



> CREATE VIEW V_PLAYER_TEAM AS
>
> SELECT A. PLAYER_NAME, A.POSITION, A.BACK_NO
>
> ​			, B.TEAM_ID, B.TEAM_NAME
>
> ​	FROM PALYER A, TEAM B
>
> ​	WHERE B.TEAM_ID = A.TEAM_ID;



위 뷰는 플레이어 팀 뷰를 생성하는 쿼리이며, 플레이어 이름, 포지션, 등번호, 팀 아이디, 팀 이름 등만을 추출하였다.