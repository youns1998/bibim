
#include "menu.h"


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
			while (1)
			{
				system("cls");
				printf("긴 글 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;
				}
			}
			break;
		}

		case '2':
		{
			while (1)
			{
				system("cls");
				printf("짧은 글 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}
		case '3':
		{
			while (1)
			{
				system("cls");
				printf("게임 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}

		case'4':
			system("cls");
			return;
		default:
			system("cls");
			break;
			
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
			while (1)
			{
				system("cls");
				printf("C 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}

		case '2':
		{
			while (1)
			{
				system("cls");
				printf("C++ 연습 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}
		case '3':
		{
			while (1)
			{
				system("cls");
				printf("게임 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}

		case'4':
			system("cls");
			return;
		default:
			system("cls");
			break;
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
			while (1)
			{
				system("cls");
				printf("일반 랭킹 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
			break;
		}

		case '2':
		{
			while (1)
			{
				system("cls");
				printf("코딩 랭킹 실행\n");
				printf("esc를 누르면 이전 메뉴로 돌아갑니다\n");
				if (_getch() == 27)
				{
					system("cls");
					break;
				}
				else
				{
					system("Cls");
					continue;

				}
			}
		}
		case '3':
			system("cls");
			return;
		default:
			system("cls");
			break;


		}


	}
}
