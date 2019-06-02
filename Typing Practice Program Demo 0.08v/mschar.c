#include "mschar.h"
#define BLUE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
#define YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
#define WHITE_S SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
#define GRAY SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
void mainchar()
{
	
	if (animate == 0)
	{
		gotoxy(80, 35);
		BLUE;
		printf("타자 장인 빔면이");
		YELLOW;
		gotoxy(80, 36);
		printf("　　　^  ^　m\n");
		gotoxy(80, 37);
		printf("  m( ㅇㅅㅇ )　\n");
		gotoxy(80, 38);
		GRAY;
		printf("/############/\n");
		WHITE_S;
		animate++;
	}
	else
	{
		gotoxy(80, 35);
		BLUE;
		printf("타자 장인 빔면이");
		YELLOW;
		gotoxy(80, 36);
		printf("　m　^  ^　　　\n");
		gotoxy(80, 37);
		printf("  ( ㅇㅅㅇ )m\n");
		GRAY;
		gotoxy(80, 38);
		printf("/############/\n");
		WHITE_S;
		animate--;
		

	}

}