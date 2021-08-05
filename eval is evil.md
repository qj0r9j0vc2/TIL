# eval() 함수

![post-thumbnail](https://media.vlpt.us/images/modolee/post/cd898553-dd1e-46c4-9b3e-c09b894ac166/slide-43-1024.jpg)



Eval()

eval 함수란 난독화된 js코드를 실행시키거 할 때에 사용하는 함수로써, 예를 들면



var a = 1, b = 2;

Console.log(eval("a+b"));

위의 코드를 실행시 3를 출력한다.



하지만 위의 짤에서도 알 수 있듯이 eval 함수는 사용하지 않기를 권고하고 있는데 그 이유는 인자로 받은 코드를 웹 어플리케이션의 권한으로 실행하게 되어 위험하거나 악의적인 영향을 받았을 수 있는 코드 또한 eval 함수로 실행시킬 수 있기 때문이다. 

그리고 애초에 eval 함수 또한 그렇게 필요성을 느끼지 못하는 함수이기에 되도록이면 자제하자는 것이 주류이다.


![image](https://user-images.githubusercontent.com/59428479/128338590-03184685-9fc8-4b39-8519-c3f8ee6575fe.png)
