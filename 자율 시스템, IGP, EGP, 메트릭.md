# IGP와 EGP

##  



##  

##  

## ASBR(Autonomous System Boundary Router)

우선 본격적으로 알아보기 전, ASBR에 대해 잠깐 짚고 넘어가자면, ASBR은 AS(Autonomous System) = 자율 시스템 내외에서 통신을 위해 사용하는 라우터이며, AS란 동일한 프로토콜로 관리자에 의해 관리되는 네트워크를 말하고, ASBR은 IGP와 EGP로 나뉜다. 여기서 이 AS를 식별하기 위한 번호를 AS번호라고 부르게된다.

###  

###  

![img](https://blog.kakaocdn.net/dn/mx6hm/btq5g6n4qcP/zrezfFEAJcexdE9FOouYd0/img.png)

###  

### IGP(Interior Gateway Protocol)

IGP는 AS의 내부에서 라우팅 정보를 교환하기 위해 내부 경로 설정을 하는 프로토콜로써, 이에는 RIP, IGRP, EIGRP, OSPF 등이 있다.







RIP의 메트릭값은 Hop Count

OSPF의 메트릭값은 Link Cost

IGRP, EIGRP 메트릭값은 "Bandwidth, Delay, Load, Reliability, MTU 등 여러가지를 조 합하여 계산한 Cost가 가장 낮은 경로"

###  

###  

###  



### EGP(Exterior Gateway Protocol)

IGP와 반대되는 프로토콜. EGP는 한 AS가 다른 AS그룹과 연결할 때 외부 경로 설정을 하기 위한 프로토콜로 사용하게되며, 이에는 BGP가 있다.





BGP의 메트릭값은 Attribute라고 하는 네트워크 도달성 정보이다.
