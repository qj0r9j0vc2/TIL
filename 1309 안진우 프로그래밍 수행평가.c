#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

//1309 안진우 프로그래밍 수행평가 <<도서 관리 프로그램>>>

typedef struct booklist
{
	int value, i;// i는 존재하는지에 대한 여부, 만약 arr[1].i == 1이면 arr[1]은 존재하는 책
	char name[30], stat[30];
}LIST;



LIST arr[1000] = { 0, };
LIST* ptr = arr;


void save();
int borrow();
int srch();



int main() {
	int c;
	while (1) {
		printf("======== <<< 도서 관리 프로그램 >>> ========\n\n무슨 작업을 원하시나요?\n(다음 중 원하는 작업의 번호를 입력하세요.)\n1: 검색\n2. 책 등록 및 수정\n3. 대출\n다른 숫자: 종료\n");
		scanf("%d", &c);

		if (c == 1) {
			srch();
		}
		else if (c == 2) {
			save();
		}
		else if (c == 3) {
			borrow();
		}
		else {
			printf("종료합니다. ");
			return 0;
		}
		printf("\n=================================\n");
	}
}




void save() {
	int i, n, j, m;
	printf("책 목록을 작성해주세요.\n");
	printf("몇 개의 책을 입력하시겠습니까?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("책 번호를 입력하세요.( 0~999번 까지)\n");
		scanf("%d", &m);
		if (arr[m].i) {
			printf("같은 번호의 다른 책이 존재합니다. 변경하시겠습니까?\n(원하신다면 1, 그렇지 않다면 아무 숫자나 입력)\n");
			scanf("%d", &j);
			if (j != 1) {
				printf("프로그램이 종료되었습니다.");
				break;
			}
			

		}
		printf("책 이름을 입력하세요.(30자 이내)\n");
		scanf("%s", &arr[m].name);
		printf("책의 가격을 입력하세요.(단위는 입력하지 않습니다.)\n");
		scanf("%d", &arr[m].value);
		arr[m].i = 1;
		strcpy(arr[m].stat, "대출가능");
		
	}

}

int srch() {

	int type;
	printf("무엇을 통해 찾으시겠습니까?(보기의 숫자로 입력해주세요.)\n");
	printf("1. 번호\n2. 이름\n3. 가격\n");

	scanf("%d", &type);


	int n, i = 1, j = 0, value = 0;
	char nm[30] = "\0";
	if (type == 1) {

		printf("번호를 입력하세요\n");
		scanf("%d", &n);
		printf("책 번호 : %d\n책 이름 : %s\n책 가격:%d\n책 상태:%s",
			n, ptr[n].name, ptr[n].value, ptr[n].stat);
	}
	else if (type == 2) {
		n = 0;
		printf("이름을 입력하세요\n");
		scanf("%s", nm);
		while (1) {
			if (!(strcmp(nm, &ptr[n].name))) {
				printf("책 번호 : %d\n책 이름 : %s\n책 가격:%d\n책 상태:%s",
					n, ptr[n].name, ptr[n].value, ptr[n].stat); 
				break; 
			}
			else {
				n++;
				if (n == 1000) {
					printf("그런 책이 없습니다!!");
					break;
				}
				continue;
			}
		}


	}
	else {
		n = 0;
		printf("가격을 입력하세요\n");
		scanf("%d", &value);
		while (1) {
			if (value == ptr[n].value) {
				printf("책 번호 : %d\n책 이름 : %s\n책 가격:%d\n책 상태:%s\n\n",
					n, ptr[n].name, ptr[n].value, ptr[n].stat);
				n++;
			}
			else {
				n++;
				if (n == 1000) {
					printf("입력한 가격의 책들을 모두 출력했습니다!\n\n\n");
					break;
				}
				continue;
			}
		}

	}
	return 0;
}

int borrow() {
	int num, j;
	printf("\n무슨 작업을 하시겠습니까?\n(대출을 하시려면 1을, 반납은 다른 숫자를 입력해주세요!)\n");
	scanf("%d", &j);
	if (j == 1) {
		printf("\n\n\n빌릴 책의 번호를 입력하세요\n");
		scanf("%d", &num);
		if (!(arr[num].i)) {
			printf("\n입력한 번호의 책이 존재하지 않습니다.\n(메뉴로 돌아갑니다)\n");
			return 0;
		}
		strcpy(arr[num].stat, "대출중...");
		printf("%d번 도서의 대출이 완료되었습니다! >,<\n", num);
		return 0;
	}

	else {
		printf("\n\n몇 번 도서를 반납하시겠습니까?\n");
		scanf("%d", &num);
		if (!(arr[num].i)) {
			printf("\n입력한 번호의 책이 존재하지 않습니다.\n(메뉴로 돌아갑니다)\n");
			return 0;
		}
		if (arr[num].stat != "대출중...") {
			printf("대출중이 아닙니다!");
			borrow();
			return 0;
		}
		strcpy(arr[num].stat, "대출가능");
		printf("%d번 도서의 반납이 완료되었습니다! >,~\n", num);
		return 0;
	}
}
