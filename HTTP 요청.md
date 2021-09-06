# HTTP STATUS CODE


![image](https://user-images.githubusercontent.com/59428479/127666153-67cfebee-abc5-4c50-88be-5f4aeb8ad622.png)



## 100 Continue

진행중임을 나타낸다. 현재까지의 요청 처리에 아무 문제가 없으며 무시해도 된다는 의미의 헤더.

## 102 Processtiong

서버가 요청을 수신하고 처리하였으나 아직 응답을 전달할 수 없을 때를 의미.



## 200 Ok

요청이 성공적으로 처리되었음을 알림.

## 201 Created 

요청이 성공적으로 처리되어 새로운 리소스를 생성했다는 의미. post나 put 메소드에 대한 답.

## 204 No Content

요청을 수신했으나 헤더만 응답함.

## 205 Recet Content

이 요청을 보낸 뷰를 리셋.

## 300 Multi Choice

요청에 대해 하나 이상의 응답이 가능하지만 사용자가 정의하여야함.

## 301 Moved Permanently

요청한 리소스의 url이 변경됨을 알림.

## 302 Temporarily Moved

요청한 리소스의 url이 일시적으로 변경됨을 알림. 언젠가 무조건 이 url을 다시 사용.

## 304 Not modified

if modified since, if none match 헤더와 관련. 요청한 리소스를 재전송 할 필요 없음.





