
#include "typing_game4ver.h"


int startgame()
{
	srand((unsigned)time(NULL));
	system("mode con cols=120 lines=30"); //콘솔 크기를 지정 가로 120 세로 30
	_MainDesign(); //디자인 화면을 띄운다
	gotoxy(60, 9); //커서 위치 조정 함수
	_showcursor(0);

	
	while (1) 
	{
		system("cls");
		_GameMenu();
		gotoxy(45, 18);
		printf("선택메뉴 : ");
		gotoxy(58, 18);
		scanf("%d", &menu_num);
		gotoxy(58, 18);
		switch (menu_num)
		{
		case 1: 
			_score = 0; //점수 초기화
			_startTime = clock();
			_GameMain();
			time_gap = 0;//게임이 끝나면 시간차이를 다시 초기화
			break;

		case 2: 
			_Help();
			break;
		
		case 3: 
			_Best();
			break;
		
		case 4: 
			return 0; 
		
		default:
			break;
		}
	}
}



void _GameDesign() //게임화면 디자인
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("|-----------------------------8bibim8bibim8bibim---------------------------8bibim8bibim8bibim-------------------------|\n");
	printf("|                          8bibim            8bibim                    8bibim            8bibim                       |\n");
	printf("|                                     ○                                          ○                                  |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                  8bibim       8bibim                                                |\n");
	printf("|                                             8bibim      8bibim      8bibim                                          |\n");
	printf("|                                                   8bibim      8bibim                                                |\n");
	printf("|---------------------------------------------------------8bibim------------------------------------------------------|\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                ESC입력시 게임이 종료됩니다                                          |\n");
	printf("|                                                                                                                     |\n");
	printf("|---------------------------------------------------------------------------------------------------------------------|");
}

void _MainDesign() //메인화면 디자인
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("|--------------------------------------------------typing game--------------------------------------------------------|\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|---------------------------------------------------------------------------------------------------------------------|\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|---------------------------------------------------------------------------------------------------------------------|");
}

void _Help()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls"); // 창 전체를 깨끗히 지운다
	_MainDesign();
	gotoxy(30, 7);
	printf("8bibim몬스터 얼굴에 나오는 단어 여드름을 타이핑해 지워주세요!\n");
	gotoxy(30, 9);
	printf("색마다 점수 배점이 다릅니다!");
	gotoxy(30, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	printf("파 랑 : 150점 ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("초 록 : 200점 ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("하 늘 : 250점 ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("빨 강 : 300점 ");
	gotoxy(30, 13);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("30초 동안 게임이 진행됩니다!! 끝나면 자동으로 종료됩니다.");
	gotoxy(30, 17);
	printf("아무키나 누르면 메인 메뉴로 돌아갑니다.\n");
	
	eveything_get = getch();
	if (_kbhit)
	{
		return;
	}
}

void _Best()
{
	system("cls");
	_MainDesign();
	
	gotoxy(52, 4);
	printf("명예의 전당");
	gotoxy(45, 8);
	printf("전설의 타자왕   %s", best_player);
	gotoxy(50, 9);
	printf("최고점수 : %d", best_score);
	gotoxy(45, 11);
	printf("1등: 점수%5d 플레이어 %s", best_score, best_player);
	gotoxy(45, 12);
	printf("2등: 점수%5d 플레이어 %s", score_2nd, player2);
	gotoxy(45, 13);
	printf("3등: 점수%5d 플레이어 %s", score_3rd, player3);
	gotoxy(40, 16);
	printf("아무키나 누르면 메인 메뉴로 돌아갑니다.\n");
	eveything_get = getch();
	if (_kbhit)
	{
		return;
	}
}

void _GameMain()
{
	system("cls");
	_MainDesign();
	gotoxy(50, 9);
	printf(" 준비 하셨나요??");
	Sleep(1000);

	system("cls");
	_MainDesign();
	gotoxy(50, 9);
	printf(" 3초 후 시작합니다");
	Sleep(1000);
	
	system("cls");
	_MainDesign();
	gotoxy(50, 9);
	printf(" 2초 후 시작합니다");
	Sleep(1000);
	
	system("cls");
	_MainDesign();
	gotoxy(50, 9);
	printf(" 1초 후 시작합니다");
	Sleep(1000);
	
	system("cls");
	_GameDesign();
	
	for (int i = 0; i < 120; i++)
		for (int j = 0; j < 30; j++)
			check_position[i][j] = 0;

	for (int i = 0; i < 200; i++)
		check_word[i] = 0;

	game_set = 0;
	sword = 0;
	for (int i = 0; i < 50; i++)
	{
		typing_word[i] = NULL; //타이핑한 단어를 다시 초기화 해준다
	}
	while (1) 
	{
		_PrintWord();
		_SearchWord();

		if (game_set == 1)
			break;
	}
}

void _PrintWord()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(3, 2);
	printf("현재점수 : %d", _score);
	gotoxy(3, 3);
	printf("남은시간 : %2d", 34 - time_gap);
	
	_x = rand() % 80 + 18;//위치 _x를 랜덤으로 생성
	_y = rand() % 15 + 4;//위치 _y를 랜덤으로 생성
	_color = rand() % 4 + 1;//색깔을 랜덤으로 생성
	word_num = rand() % wordmax; //랜덤으로 단어를 생성하기 위한 단어번호 생성

	if (check_position[_x][_y] != 1)//단어가 겹치지 않기위해 나온 단어 위치 주변에는 다시 나오지 않게 한다
	{
		for (check_x = _x ; check_x < _x + 7; check_x++)
		{
			for (check_y = _y ; check_y < _y + 5; check_y++)
			{
				check_position[check_x][check_y] = 1;
			}
		}

		for (check_x = _x; check_x > _x - 7; check_x--)
		{
			for (check_y = _y ; check_y > _y - 5; check_y--)
			{
				check_position[check_x][check_y] = 1;
			}
		}
		if (check_word[word_num] != 1) //단어가 반복해서 나오지 않도록 한다.
		{
			check_word[word_num] = 1;//나온 단어는 체크

			for (int i = 0; i < 3; i++)//데이터의 위치,색깔정보를 입력받는다
			{
				if (i == 0)
				{
					word_data[word_num][i] = _x;
				}
				else if (i == 1)
				{
					word_data[word_num][i] = _y;
				}
				else if (i == 2)
				{
					word_data[word_num][i] = _color;
				}
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _color);
			gotoxy(_x, _y);//랜덤위치로 이동
			printf("%s ", _word[word_num]);//_word배열의 word_num번째 단어를 출력
		}
	}
}

void _SearchWord()
{
	int time_count = 0;
	int typing_char;//입력받을 알파벳을 저장

	while (time_count < wordspeed)//단어속도를 조절 _SearchWord함수가 끝나는 시간을 조절
	{
		time_count++;
		_endTime = clock();
		time_gap = (float)(_endTime - _startTime) / (CLOCKS_PER_SEC); //프로그램 수행에 소요된 시간을 초단위로 반환

		if (time_gap > 34) // 게임시간이 30초가 지나면 종료
		{
			system("cls");
			_MainDesign();
			gotoxy(50, 11);
			printf("게임이 끝났습니다!");
			gotoxy(50, 13);
			printf("플레이어 점수 : %d", _score);
			if (_score > best_score)
			{
				while (getchar() != '\n');
				gotoxy(42, 15);
				printf("최고기록을 갱신하셨습니다! 당신의 이니셜을 적어주세요!");
				gotoxy(55, 17);
				strncpy(player3, player2, 10);
				strncpy(player2, best_player, 10);
				scanf("%s", best_player);
				game_set = 1;
				score_3rd = score_2nd;
				score_2nd = best_score;
				best_score = _score;
				while (getchar() != '\n');
				break;
			}
			else if (_score > score_2nd)
			{
				while (getchar() != '\n');
				gotoxy(45, 15);
				printf("당신의 기록은 2위! 당신의 이니셜을 적어주세요!");
				gotoxy(55, 17);
				strncpy(player3, player2, 10);
				scanf("%s", player2);
				game_set = 1;
				score_3rd = score_2nd;
				score_2nd = _score;
				while (getchar() != '\n');
				break;
			}
			else if (_score > score_3rd)
			{
				while (getchar() != '\n');
				gotoxy(45, 15);
				printf("당신의 기록은 3위! 당신의 이니셜을 적어주세요!");
				gotoxy(55, 17);
				scanf("%s", player3);
				game_set = 1;
				score_3rd = _score;
				while (getchar() != '\n');
				break;
			}
			else
			{
				while (getchar() != '\n');
				gotoxy(45, 15);
				printf("   기록 갱신하지 못했습니다...");
				Sleep(3000);
				game_set = 1;
				while (getchar() != '\n');
				break;
			}

		}
		
		if (_kbhit()) //키보드가 눌러졌을때
		{
			typing_char = getch();//여기서 알파벳 하나를 입력받아 typing_char에 저장
			typingsound();
			
			if (typing_char != 8 && typing_char != 13 && typing_char != 27) //백스페이스나 엔터키가 아니면, 즉 알파벳을 입력하면
			{
				typing_word[sword++] = typing_char; //typing_word(단어)에 입력받은 알파벳 저장
				gotoxy(5, 25);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("%s", typing_word); //입력하는 단어를 출력
			}

			else if (typing_char == 8)//백스페이스를 입력받으면
			{
				gotoxy(0, 25);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("|                                                                                                                     |\n");//일단 입력줄을 다 지운다
				typing_word[--sword] = typing_char; //전에 입력했던 알파벳을 지운다
				if (sword == -1) //애초에 배열에 입력받은 알파벳이 없었을때
					sword = 0; //다시 0으로 고쳐준다
				gotoxy(5, 25);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("%s", typing_word);//화면에도 백스페이스를 한 단어를 출력
			}
			
			else if (typing_char == 13) //엔터값을 입력 받았을때 단어 비교 실행
			{
				sword = 0;
				gotoxy(0, 25);
				printf("|                                                                                                                     |\n");//일단 입력줄을 다 지워준다
				for (int i = 0; i <= wordmax; i++)
				{
					if (strcmp(typing_word, _word[i]) == 0)//단어가 일치하는게 있을때
					{
						x2 = word_data[i][0];//그 단어의 _x위치를 받는다
						y2 = word_data[i][1];//그 단어의 _y위치를 받는다
						color2 = word_data[i][2];//그 단어의 색깔 정보를 받는다
						gotoxy(x2, y2);
						printf("          ");//프린트된 위치의 단어를 지운다
				
						switch (color2)
						{
						case 1: //파랑
							_score += 150; 
							break;

						case 2: //초록
							_score += 200; 
							break;
						
						case 3: //하늘
							_score += 250; 
							break;
						
						case 4: //빨강
							_score += 300; 
							break;
						
						default: 
							break;
						}
						gotoxy(3, 2);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						printf("현재점수 : %d", _score);
					}
				}
				
				for (int i = 0; i < 50; i++) 
				{
					typing_word[i] = NULL; //타이핑한 단어를 다시 초기화 해준다
				}
			}

			else if (typing_char == 27)
			{
				system("cls");
				_MainDesign();
				gotoxy(50, 11);
				printf("게임이 끝났습니다!");
				Sleep(2000);
				game_set = 1;
				break;
			}
			
		}
	}
}

void _GameMenu()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	_MainDesign();
	
	gotoxy(50, 8);
	printf(" 1. 게임시작");
	gotoxy(50, 10);
	printf(" 2. 도움말");
	gotoxy(50, 12);
	printf(" 3. 랭킹 보기");
	gotoxy(50, 14);
	printf(" 4. 게임 종료");
	gotoxy(50, 16);
	printf("  키를 누르세요");
}

