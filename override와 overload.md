# OVERRIDING과 OVERLOAD의 차이

## OVERLOAD란

기존에 있던 메서드에 기능을 추가한다고 생각하면 된다. 

예를 들자면

public void print(){

​		System.out.println("Hello!");

}

String print(Integer a){

​		System.out.println("It's Overloading!!");

​		return a.toString();

}

void print(String a){

​		System.out.println("It's Overloading, too.");

​		System.out.println(a);

}

위와 같다고 생각하면 된다. 

print라는 메서드를 여러 개 선언함으로써 생각했던 타입형이 아닌 변수의 경우에도 판단할 수 있게 하고 있다. 

이렇게 할 시 장점은 메서드의 이름을 절약할 수 있다는 것이다.

만약 오버로딩이 없다면 printlnInt도 생겨야할 것이고, printlnDouble, printlnBoolean 등과 같이 수많은 타입의 메서드들이 따로 생겨야할 것이고, 이렇게된다면 당연히 비효율적일 수 밖에 없다.





## Overriding이란

부모 클래스로부터 받은 메서드를 자식 클래스에서 재선언 하는 것을 의미한다. 예를 들어 person이라는 클래스에 walk 라는 메서드가 있고, 터벅터벅이라고 출력하게된다. 만약 이를 오버라이딩 한다면 

Class kid extends person{

​		@Override

​		public void walk() {

​				System.out.println("타다닥");

​		}

}

위와 같이 재선언할 수 있다.

