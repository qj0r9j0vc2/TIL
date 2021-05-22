# [리눅스 기초] chmod

 chmod란?

리눅스 파일에서 파일이나 디렉토리의 권한을 변경하는 명령어이다.



보통 우리가 ls -l을 통해 파일 목록과 권한을 확인할 수 있는데 예를 들면 ( 참고로 ▀▀▀▀ 는 제 이름이라서 가린겁니다:)

▀▀▀▀@▀▀▀▀ ~ % ls -l

total 0

drwxr-xr-x  4 ▀▀▀▀ staff  128 4 30 08:40 PycharmProjects

drwxr-xr-x  3 ▀▀▀▀ staff  96 5 21 15:39 VirtualBox VMs

drwxr-xr-x  2 ▀▀▀▀ staff  64 5 22 19:29 hello_linux

-rw-r--r--  1 ▀▀▀▀ staff   0 5 22 22:01 text.txt

drwxr-xr-x  3 ▀▀▀▀ staff  96 5 13 18:53 ?Library



이렇게 맨 앞에 파일인지 디렉토리인지, 그리고 권한에 대한 내용을 담는 코드가 적혀있고, 나머지는 뭐  파일, 디렉토리의 크기, 소유자가 누구인지, 마지막 변경 시간 등이 적혀져있네요!



그런데 다들 영어로 적혀있는데 무슨 암호같은게 보이죠? 

## -rw-r--r--

## drwxr-xr-x

사실 별거 없습니다.



## drwxr-xr-x

여기서 'd'는 앞에서 말했었고, 뒤에 rwx같은 경우는 

r = reading

w = writing

x = execute 

를 뜻합니다. 만약 적혀져 있다면 각 권한을 가지고 있다는 것이죠. 그리고 이걸 3개 단위로 끊으면 딱 맞아 떨어집니다.

## rwx/r-x/r-x

여기서 맨 앞에 rwx는 소유자의 권한이고, 두번째는 그룹의 권한, 마지막은 나머지(others)에 대한 권한이 됩니다.

그렇다면 위에서 의미하는 것은? 소유자는 모든 권한을 가지고 그룹과 나머지들은 쓰진 못하고 나머지를 모두 할 수 있는 것이죠. 



그리고 우린 앞전에 말했던 chmod란 명령어를 통해 이 권한을 바꿀 수 있는데 chmod 명령어의 사용법을 살펴보면......



Usage: chmod [OPTION]... MODE[,MODE]... FILE...  

 or: chmod [OPTION]... OCTAL-MODE FILE...  

 or: chmod [OPTION]... --reference=RFILE FILE... 

Change the mode of each FILE to MODE. 

With --reference, change the mode of each FILE to that of RFILE. 

 -c, --changes     like verbose but report only when a change is made
 -f, --silent, --quiet suppress most error messages
 -v, --verbose     output a diagnostic for every file processed
   --no-preserve-root do not treat '/' specially (the default)
   --preserve-root  fail to operate recursively on '/'
   --reference=RFILE use RFILE's mode instead of MODE values
 -R, --recursive    change files and directories recursively
   --help   display this help and exit
   --version output version information and exit





인데 기본 사용법은 

chmod 755 text.txt

입니다. 

여기서 755는 8진수로 썼을 때 

111/101/101인데 어디서 많이 보시지 않았나요? 바로  **rwx/r-x/r-x** 를 on-off로 표현한것입니다.



즉. text.txt 파일의 권한을 또다시 w-r--r--로 바꾸고 싶다면? chmod 544 text.txt 인거죠.