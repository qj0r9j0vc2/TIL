# (C)_tmain, wmain

main이란 모든 함수의 시작 부분을 이야기 합니다. 

그리고 wmain은 유니코드로 정의되었을 시 사용가능하며, _tamin은 유니코드로 정의되어있지 않을시 사용하지만 만약 _tmain을 사용하였으나 유니코드로 정의되었을 경우 wmain으로 컴파일되고, 유니코드로 사용되지 않았다면 main으로 컴파일 된다.

그리고 만약 main을 void형으로 선언할 경우 종료 코드를 exit()함수로 정의해야한다.

![image](https://user-images.githubusercontent.com/59428479/127849228-4d7bbf0e-54f2-412d-b181-a411982d2f0d.png)
