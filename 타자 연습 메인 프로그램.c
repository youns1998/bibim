#include<stdio.h>
#include<windows.h>
#define MAX_LANKER 20
typedef struct lanking
{
char name[10];
int lank;
int score;
int accuracy;
}Lanking;
Lanking lank[MAX_LANKER];
void long_chat();
void code_chat();
void go_game();
void gotoxy(int x, int y);
void go_lanking();
void main()
{
int select;
while(1)
{
printf("메뉴를 선택 해 주세요\n");
printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
printf("1 . 긴 글 연습\n");
printf("2 . 코딩 연습\n");
printf("3 . 미니 게임\n");
printf("4 . 랭킹 확인\n");
printf("5 . 프로그램 종료\n");
printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
scanf("%d",&select);
switch(select)
{
case 1:
printf("긴 글 연습을 시작합니다."\n);
long_chat();
break;
case 2:
printf("코딩 연습을 시작합니다."\n);
code_chat();
break;
case 3:
printf("미니 게임을 시작합니다."\n);
go_game();
break;
case 4:
printf("--------------전체 랭킹--------------");
void go_lanking();
break;
case 5:
return 0;
default:
printf("잘못 입력 하셨습니다.\n");
break;
}
}
