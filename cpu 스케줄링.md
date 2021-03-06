# CPU 스케줄링

 CPU 스케줄링이란 메모리에 있는 준비 상태의 프로세스 중 하나를 선택 해 CPU 자원을 할당하는 것을 말한다.



- 비선점(Non preemptive) : 실행 상태에서 대기상태로 전환될 때 (예, 입출력 요청) 

- 선점(preemptive) : 실행 상태에서 준비상태로 전환될 때 (예, 인터럽트 발생)

- 대기 상태에서 준비상태로 전환될 때 (예, 입출력이 종료될 때)

- 종료될 때



### 비선점 스케쥴링

프로세스가 CPU를 할당받으면 해당 프로세스가 완료될 때까지 CPU를 사용.

모든 프로세스에 대한 요구를 공정하게 처리 가능

응답시간 예측에 유리하다.

종류 : FCFS(FIFO), SJF, 우선순위, HRN, 기한부





### 선점 스케줄링

하나의 프로세스가 CPU를 할당받아 실행하고 있을 때 우선순위가 높은 다른 프로세스가 CPU를 강제로 빼앗아 사용할 수 있다.

주로 빠른 응답시간을 요구하는 대화식 시분할 시스템에 사용한다.

선점으로 인한 많은 오버헤드를 초래한다.

종류 : SRT, 선점 우선순위, RR, 다단계 큐, 다단계 피드백 큐





## 선점 스케줄링 방식

#### FCFS 

FirstCome FirstService의 약자로, FIFO(First In First Out)과 같다. (=선입선출)

준비상태 큐에 도착한 순서에 따라 차례로 CPU를 할당

먼저 도착한 것이 먼저 처리되어 공평성 유지, 짧은 작업이 긴 작업을 기다리는 경우가 발생할 수 있다.



#### SJF

Shortest Job First의 약자. 실행시간이 가장 짧은 프로세스에 먼저 CPU를 할당한다.

가장 적은 평균 대기시간을 제공한다.



#### HRN

Hightest Responseration Next의 약자. 실행시간이 길 경우 SJF에서 불리한 것을 보완하기 위한 것으로, SJF기법에서 대기시간을 우선순위 선정에 영향을 주게된다.



#### 기한부(Deadline)

프로세스에게 일정한 시간을 주어 그 시간 안에 프로세스를 완료하도록한다.

시스템은 프로세스에게 할당할 정확한 시간을 추정해야한다.



#### 우선순위(Priority)

준비상태 큐에서 기다리는 각 프로세스마다 우선순위를 부여하여 그 중 가장 높은 프로세스에게 먼저 CPU를 할당하는 기법





### 에이징(Aging)

시스템에서 특정 프로세스의 우선순위가 낮아 무한정 기다리게 되는 경우, 기다린 시간에 비례하여 일정 시간이 지나면 우선순위를 한 단계 씩 높여 가까운 시간 안에 자원을 할당받도록 하는 기법.

SJF나 우선순위 기법에서 발생할 수 있는 무한 연기 상태를 예방할 수 있다.







## 선점 스케줄링 방식

#### SRT

Shortest Remaining Time의 약자. 비선점 기법인 SJF방식을 선점 형태로 변경한 형태.

현재 실행중인 프로세스의 남은 시간과 준비상태 큐에 새로 추가된 프로세스의 실행시간을 비교해 가장 짧은 실행시간을 요규하는 프로세스에게 CPU를 할당하는 기법.



#### RR

RoundRobin의 약자. 시분할 시스템을 위해 고안됨. FCFS알고리즘을 선점 형태로 변형한 기법.

FIFO기법과 같이 준비상태 큐에 먼저 들어온 프로세스가 먼저 CPU를 할당받지만 각 프로세스는 할당된 시간 만큼만 실행하고 만약 실행이 완료되지 않을 시 다음 프로세스에게 CPU를 할당하고 기존 실행 프로세스는 가장 뒤로 배치한다. 

 할당되는 시간이 클 경우 FCFS와 같아지고, 할당시간이 작아질 경우 문맥 교환 및 오버헤드가 자주 발생하게된다.



#### 다단계 큐(Multi Level Queue)

프로세스를 특정 그룹으로 분류할 수 있을 때 그룹에 따라 각기 다른 준비상태 큐를 사용하는 기법.



#### 다단계 피드백 큐(Multi Level Feedback Queue)

특정 그룹의 준비상태 큐에 들어간 프로세스가 다른 준비상태로 이동할 수 없는 다단계 큐기법을 준비 상태 큐 사이를 이동할 수 있도록 개선한 기법

