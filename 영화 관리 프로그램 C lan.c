#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int i = 0;
int temp;
int temp2;
char tn[100];//temp name
int nt;//number temp
int yon;//yes or no
int un1;//update number1
int un2;//update number2
int bn;//book number
int size;

struct movie {
	char title[100];//제목
	char genre[20];//장르
	char director[50];//감독
	char runtime[20];//상영시간
	char screen;//상영중여부
	int not;//number of tickets(예매표갯수)
};
struct movie* list[100];


void func();//등록기능
void funr();//조회기능
void funu();//수정기능
void fund();//삭제기능
void funb();//예매기능

int main() {
	char fun[100];
	for (;;) {
		printf("사용 하고싶은 기능을 선택하세요.\n등록 : c 조회 : r 수정 : u 삭제 : d 예매 : b 종료 : e\n");
		fflush(stdin);
		scanf("%s", fun);
		if (strcmp(fun, "c") != 0 && strcmp(fun, "r") != 0 && strcmp(fun, "u") != 0 && strcmp(fun, "d") != 0
			&& strcmp(fun, "b") != 0 && strcmp(fun, "e") != 0) {
			system("cls");
			printf("다시 입력하세요.\n");
		}

		//등록 기능
		if (strcmp(fun, "c") == 0) {
			system("cls");
			func();
		}
		//조회 기능
		if (strcmp(fun, "r") == 0) {
			system("cls");
			funr();
		}
		//수정 기능
		if (strcmp(fun, "u") == 0) {
			system("cls");
			funu();
		}
		//삭제 기능
		if (strcmp(fun, "d") == 0) {
			system("cls");
			fund();
		}
		//예매 기능
		if (strcmp(fun, "b") == 0) {
			system("cls");
			funb();
		}
		//종료 기능
		if (strcmp(fun, "e") == 0) {
			system("cls");
			break;
		}
	}

	return 0;
}

void func() {

	struct movie* p = malloc(sizeof(struct movie));
	//동적할당을 쓰는이유 : 메모리 낭비 x



	//영화 제목 입력하기
	for (;;) {
		printf("등록 하고싶은 영화의 제목을 넣으세요.\n");
		scanf("%s", p->title);
		system("cls");
		printf("'%s' 다시 입력 하시겠습니까?\n네 : 1 아니오 : 2\n", p->title);
		scanf("%d", &yon);
		/*영화 제목 다시 입력 여부 묻기*/for (;;) {
			if (yon == 1 || yon == 2) {
				break;
			}
			else {
				continue;
			}
		}
		if (yon == 1) {
			continue;
		}
		else {
			break;
		}
	}
	//장르 선택하기
	for (;;) {
		system("cls");
		printf("영화의 장르를 선택하시오.\n액션 애니메이션 드라마 범죄 코미디 로멘스 스릴러 공포 SF 미스터리 판타지 어드벤처 가족 사극 전쟁 다큐멘터리 뮤지컬 서부극\n");
		fflush(stdin);
		scanf("%s", p->genre);
		for (;;) {
			if (strcmp(p->genre, "액션") != 0) {
				break;
			}
			else if (strcmp(p->genre, "애니메이션") != 0) {
				break;
			}
			else if (strcmp(p->genre, "드라마") != 0) {
				break;
			}
			else if (strcmp(p->genre, "범죄") != 0) {
				break;
			}
			else if (strcmp(p->genre, "코미디") != 0) {
				break;
			}
			else if (strcmp(p->genre, "로멘스") != 0) {
				break;
			}
			else if (strcmp(p->genre, "스틸러") != 0) {
				break;
			}
			else if (strcmp(p->genre, "공포") != 0) {
				break;
			}
			else if (strcmp(p->genre, "SF") != 0) {
				break;
			}
			else if (strcmp(p->genre, "미스터리") != 0) {
				break;
			}
			else if (strcmp(p->genre, "판타지") != 0) {
				break;
			}
			else if (strcmp(p->genre, "어드벤처") != 0) {
				break;
			}
			else if (strcmp(p->genre, "가족") != 0) {
				break;
			}
			else if (strcmp(p->genre, "사극") != 0) {
				break;
			}
			else if (strcmp(p->genre, "전쟁") != 0) {
				break;
			}
			else if (strcmp(p->genre, "다큐멘터리") != 0) {
				break;
			}
			else if (strcmp(p->genre, "뮤지컬") != 0) {
				break;
			}
			else if (strcmp(p->genre, "서부극") != 0) {
				break;
			}
			else {
				printf("다시 선택하세요.\n");
				scanf("%s", p->genre);
			}
		}
		system("cls");
		//영화 장르 다시 입력 여부 묻기
		for (;;) {
			printf("'%s' 다시 입력하시겠습니까?\n네 : 1 아니오 : 2\n", p->genre);
			scanf("%d", &yon);
			if (yon == 1 || yon == 2) {
				break;
			}
			else {
				continue;
			}
		}
		if (yon == 1) {
			continue;
		}
		else {
			break;
		}
	}
	//영화 감독 이름 입력하기
	for (;;) {
		system("cls");
		printf("영화의 감독 이름을 입력하세요.\n");
		scanf("%s", p->director);
		system("cls");
		//영화 감독 이름 다시 입력 여부 묻기for (;;) {
		printf("'%s' 다시 입력하시겠습니까?\n네:1 아니오:2\n", p->director);
		scanf("%d", &yon);
		for (;;) {
			if (yon == 1) {
				break;
			}
			else if (yon == 2) {
				break;
			}
			else {
				printf("잘못된 숫자입니다. 다시 입력하세요.\n");
				continue;
			}
		}
		if (yon == 1) {
			continue;
		}
		else {
			break;
		}

	}
	//영화 상영 시간 입력하기
	for (;;) {
		system("cls");
		printf("상영 시간을 입력하세요.(예시 : 1:47)\n");
		scanf("%s", p->runtime);
		system("cls");
		//영화 상영 시간 다시 입력 여부 묻기
		for (;;) {
			printf("'%s' 다시 입력하시겠습니까?\n네 : 1 아니오 : 2\n", p->runtime);
			scanf("%d", &yon);
			if (yon == 1 || yon == 2) {
				break;
			}
			else {
				continue;
			}
		}
		if (yon == 1) {
			continue;
		}
		else {
			break;
		}
	}
	//영화 상영 여부 묻기
	system("cls");
	printf("상영 하시겠습니까?\n네 : 1 아니오 : 2\n");
	scanf("%d", &yon);
	system("cls");
	for (;;) {
		if (yon == 1 || yon == 2) {
			break;
		}
		else {
			printf("다시 입력하세요.");
			continue;
		}
	}
	if (yon == 1) {
		p->screen = 'o';
	}
	else {
		p->screen = 'x';
	}

	p->not = 0;

	list[i++] = p;

}

void funr() {
	printf("현재 등록된 영화 목록입니다.\n");
	if (i == 0) {
		system("cls");
		printf("등록된 영화가 없습니다.\n");
	}
	else {
		system("cls");
		for (temp = 0; temp < i; temp++) {
			printf("%s\n", list[temp]->title);
		}
		printf("조회하고싶은 영화 제목을 입력하세요.\n");
		scanf("%s", tn);
		for (temp = 0; temp < i; temp++) {
			system("cls");
			if (strcmp(list[temp]->title, tn) == 0) {
				printf("제목 : %s\n", list[temp]->title);
				printf("장르 : %s\n", list[temp]->genre);
				printf("감독 : %s\n", list[temp]->director);
				printf("상영 시간 : %s\n", list[temp]->runtime);
				printf("상영 중 : %c\n", list[temp]->screen);
				printf("===============================================\n");
				printf("나의 예매 표 갯수 : %d\n", list[temp]->not);
				break;
			}
			else {
				printf("조회하고싶은 영화가 없습니다.\n");
			}
		}
	}
}
void funu() {
	printf("수정할 영화의 번호를 입력하세요.\n");
	for (temp = 0; temp < i; temp++) {
		printf("%d.%s\n", temp + 1, list[temp]->title);
	}
	scanf("%d", &un1);
	system("cls");
	printf("수정할 세부사항의 번호를 입력하세요.\n");
	printf("1. 제목\n");
	printf("2. 장르\n");
	printf("3. 감독\n");
	printf("4. 상영시간\n");
	printf("5. 상영중\n");
	scanf("%d", &un2);
	system("cls");
	if (un2 == 1) {
		printf("영화 제목을 입력하세요.\n");
		scanf("%s", list[un1 - 1]->title);
		system("cls");
	}
	else if (un2 == 2) {
		printf("영화의 장르를 선택하세요.\n액션 애니메이션 드라마 범죄 코미디 로멘스 스릴러 공포 SF 미스터리 판타지 어드벤처 가족 사극 전쟁 다큐멘터리 뮤지컬 서부극\n");
		for (;;) {
			if (strcmp(list[un1 - 1]->genre, "액션") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "애니메이션") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "드라마") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "범죄") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "코미디") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "로멘스") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "스틸러") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "공포") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "SF") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "미스터리") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "판타지") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "어드벤처") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "가족") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "사극") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "전쟁") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "다큐멘터리") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "뮤지컬") != 0) {
				break;
			}
			else if (strcmp(list[un1 - 1]->genre, "서부극") != 0) {
				break;
			}
		}
		system("cls");
	}
	else if (un2 == 3) {
		printf("감독 이름을 입력하세요.\n");
		scanf("%s", list[un1 - 1]->director);
		system("cls");
	}
	else if (un2 == 4) {
		printf("상영 시간을 입력하세요.\n(예시 : 1:46)\n");
		scanf("%s", list[un1 - 1]->runtime);
		system("cls");
	}
	else if (un2 == 5) {
		for (;;) {
			printf("상영중 여부를 선택하세요.\n네 : 1 아니오 : 2\n");
			scanf("%d", &yon);
			system("cls");
			if (yon == 1 || yon == 2) {
				break;
			}
			else {
				printf("다시 입력하세요.\n");
			}
		}
		if (yon == 1) {
			list[un1 - 1]->screen = 'o';
		}
		if (yon == 2) {
			list[un1 - 1]->screen = 'x';
		}
	}
}
void fund() {
	struct movie del;
	printf("삭제하고싶은 영화의 번호를 선택하세요.\n");
	for (temp = 1; temp <= i; temp++) {
		printf("%d.%s\n", temp, list[temp - 1]->title);
	}
	scanf("%d", &nt);
	system("cls");
	free(list[nt - 1]);
	for (nt; nt <= i; nt++) {
		list[nt - 1] = list[nt];
	}
	i--;
}
void funb() {
	for (temp2 = 0; temp2 < i; temp2++) {
		if (list[temp2]->screen == 'x') {
			system("cls");
			printf("예매 할 수 있는 영화가 없습니다.\n");
			if (temp2 == i - 1) {
				return;
			}
		}
	}
	if (i == 0) {
		printf("예매 할 수 있는 영화가 없습니다.\n");
	}
	else {
		printf("예매할 영화의 번호를 선택하세요.\n");
		for (temp2 = 0; temp2 < i; temp2++) {
			printf("%d.%s\n", temp2 + 1, list[temp2]->title);
		}
		scanf("%d", &bn);
		system("cls");
		list[bn - 1]->not++;
	}
}