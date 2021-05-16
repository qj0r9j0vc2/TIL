![img](https://blog.kakaocdn.net/dn/Y36KN/btq415WXkUt/cIenr1XipiToMxBBN8Oub0/img.jpg)



osi 7계층이란?

네트워크 기초 중의 기초. 오늘은 어딜가든 네트워크와 관련되있다면 tcp/ip와 함께 항상 나오는 osi 7계층에 대해 알아볼 것이다.

























![img](https://blog.kakaocdn.net/dn/cA1s6E/btq4XXzx05b/CwbbkXSdlD9pIjeh3Lnrsk/img.jpg)







### 1. 물리 계층

\- 물리계층이란? 대충 하드웨어라고 생각하면 편하다.

물리계층은 전기 신호를 주고받는 곳으로써, 01011110001 같은 이진수들을 주고받으며, 이 계층에서 데이터의 단위는 "비트"라고 한다. 이에 속하는 대표적인 장치들은 랜카드, 리피터, 허브, 통신 케이블 등 하드웨어적인 느낌이 드는 것들이라면 대부분 이 쪽이다.

\- 물리계층에선 그저 전달만 할 뿐. 내용에 대해선 아무런 관여를 하지 않는다. 오류 제어나, 어떻게 전달해야 더 효율적인지 등은 다른 계층에서 한다.

















![img](https://blog.kakaocdn.net/dn/JbONI/btq4X6itOBk/AYtGXEUzdXVenJMqK2BDN1/img.jpg)

### 2. 데이터 링크 계층

\- 데이터 링크 계층은 링크의 설정과 유지 및 종료를 담당하며, 직접적으로 연결된 사이에서의 신뢰성있는 정보전송을 담당한다.

mac주소와 제어정보 등을 전송한다.

\- 물리적인 주소인 MAC주소가 여기에 해당되며, 전송 단위는 frame이다. 장비에는 브릿지, 스위치, 프로토콜에는 HDLC, MAC, LLC, PPP 등이 포함되어있다.























![img](https://blog.kakaocdn.net/dn/1BmTj/btq4Xf72KxH/RHY6S2UK5Z4dTcoCmSdU00/img.jpg)



### 3. 네트워크 계층

\- 우리가 많이 들어봤던 IP주소를 제공하는 계층으로써 데이터 단위는 패킷(packet)이다.

패킷을 목적지까지 최적의 경로로 전달하기 위한 기능(라우팅)을 하며, 이런 역할을 하는 것을 라우팅 프로토콜(RIP, IGRP, EIGRP, OSPF 등)이라고 한다.

\- 네트워크 계층에는 IP, ARP, ICMP, IGMP, 라우팅 프로토콜 등이 있으며, 장비에는 라우터와 L3 스위치가 있다.

















![img](https://blog.kakaocdn.net/dn/MD2QW/btq4Ys6FkPc/lLov2ZzCKV1DhPzrsSkizK/img.jpg)

### 4. 전송 계층

\- 오류 제어, 흐름제어, 혼잡 제어 등을 담당하면서, 두 시스템 간에 신뢰성 있는 데이터를 전송한다. 데이터 전송 단위는 세그먼트이다.

\- 이 계층에 포함되는 프로토콜에는 TCP, UDP 등이 있으며, (TCP, UDP에 대해선 전 글에서 말했으니 자세한 설명은 하지 않겠다.) 장비에는 L4 스위치가 있다.













### 5. 세션 계층

\- TCP/IP 세션 연결(포트 연결) 구성과, 해제 등이 있으며, 4계층과의 경계가 모호하다.

\- 프로토콜에는 RPC, NetBIOS 등이 있다.























![img](https://blog.kakaocdn.net/dn/pey9y/btq4ZSjIwEg/8iQVohGApsymTOJIUQwRfK/img.jpg)



### 6. 표현 계층

\- 압축과 암호화, 포맷 변화 등을 수행하여 두 장치가 전송 데이터를 이해할 수 있도록 한다.

\- 프로토콜에는 MIME,SSL,TLS 등이 있다.



























![img](https://blog.kakaocdn.net/dn/7XFwK/btq4YrzVVGV/RelOfXfzoeeaPIN1hK3De0/img.jpg)



### 7. 응용 계층

\- 일반적인 사용자의 인터페이스(전자메일, 인터넷 서비스, 동영상 플레이어 등) 을 다양한 프로토콜을 통해 제공한다.

\- 프로토콜에는 HTTP, SMPT, POP3, FTP, SSH 등이 있다.