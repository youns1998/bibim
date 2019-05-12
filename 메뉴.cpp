#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*타자 연습 메인 함수*/
void TP_menu()
{
	while (1)
	{
	
		int tp_menu;
		printf("1. 긴 글 연습\n");
		printf("2. 짧은 글 연습\n");
		printf("3. 타자 연습 게임\n");
		printf("4. 이전 메뉴로\n");
		tp_menu = _getch();

		switch (tp_menu) {
		case '1':
		{
			do {

				printf("긴 글 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				

			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("짧은 글 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
		{
			do {

				printf("타자 연습 게임 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				

			} while (_getch() != 27);
			break;
		}

		case'4':
			return;
		}


	}
}
void CP_menu()
{
	while (1)
	{
		
		int cp_menu;
		printf("1. C 연습\n");
		printf("2. C++ 연습\n");
		printf("3. 타자 연습 게임\n");
		printf("4. 이전 메뉴로\n");
		cp_menu = _getch();

		switch (cp_menu) {
		case '1':
		{
			do {

				printf("C 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("C++ 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
		{
			do {

				printf("타자 연습 게임 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}

		case'4':
			return;
		}


	}


	
}

void rank_menu()
{
	while (1)
	{

		int rank_menu;
		printf("1. 일반 랭킹\n");
		printf("2. 코딩 랭킹\n");
		printf("3. 이전 메뉴로\n");
		rank_menu = _getch();

		switch (rank_menu) {
		case '1':
		{
			do {

				printf("일반 타자 랭킹 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("코딩 타자 랭킹 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
			return;



		}


	}
}
void main()
{


	while (1) {
		int main_menu;
		printf("1. 한글 타자 연습\n");
		printf("2. 코딩 연습\n");
		printf("3. 랭킹 보기\n");
		printf("4. 도움말\n");
		printf("5. 프로그램 종료\n");
		main_menu = _getch();
		switch (main_menu) {
		case '1':
			TP_menu();
			break;
		case '2':
			CP_menu();
			break;
		case '3':
			rank_menu();
			break;
		case '4':
			while (1)
			{
				printf("도움말 출력\n");
				printf("esc를 누르면 이전메뉴로 돌아갑니다.\n");
				if (_getch() == 27)
					break;
			}
			break;
		case '5':
			printf("시스템 종료\n");
			system("pause");
			return;
		}

	}
}