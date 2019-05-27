#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include "Header.h"
#define wordmax 100//단어의 개수
#define wordspeed 25//25000//단어가 뜨는 속도
void _Help();// 도움말
void _GameMain();// 게임메인
void _PrintWord();//단어뜨게 해주는 함수
void _SearchWord();//단어를 입력 받고 비교
void _GameDesign();//게임 디자인
void _GameMenu();//게임 시작 초기 화면
void _Best();//최고점수
void _RemoveCursor();// printf에서 단어를 뜨게할때 커서 제거
void _MainDesign();//메인 디자인

char _word[200][200] = { "printf", "scanf", "int", "float", "double", "%d", "%f", "%lf", "return", ";", "&", "main", "#include",//단어
"void", "#define", "stdio.h", "stdlib.h", "unsigned", "malloc", "free", "char", "if", "switch", "else", "break", "default", "while", "for", "++",
"--", "&&", "||", "NULL", "class", "cin", "cout", "endl", "new", "delete", "[]", "*", "=", "()", "time", "string", "strcmp", "getline", "gets",
"sizeof", "temp", "extern", "register", "struct", "static", "goto", "do", "enum", "auto", "case", "const", "continue", "signed", "short", "friend",
"public", "using","bool", "private", "true", "false", "typename", "union", "template", "protected", "clear", "time.h", "windows.h", "conio.h",
"%s", "%c", "!=", "==", ">=", "<=", ">", "<", "iostream", "swap", "inline", "namespace", "ignore", "-", "+", "/", "%", "//", "/**/", ".", "->", "char" };
time_t _startTime = 0, _endTime = 0;//게임의 시간제한을 위해서
int time_gap;//시작시간과 시간차이
int check_word[200];//한번뜬 단어들은 안뜨게 해주기 위해서
char typing_word[50];//타이핑한 단어
char word_data[200][3] = { 0 };//단어 정보
char check_position[120][30] = { 0 };//한번뜬 위치들은 안뜨게 해주기 위해서
int menu_num;//초기화면에서 입력 받을때 변수
int _x, _y;// gotoxy 의 _x값과 _y값
int _color;// 색깔
int x2, y2;// _x,_y값을 다시 불러올 때 변수
int color2;// 색깔 값을 다시 불러올때 변수
int eveything_get; //아무키나 입력받을때 변수
int _score = 0;//점수
int word_num;//단어수
int sword = 0;
int check_x, check_y;//한번뜬 위치에 다시 뜨지 않기 위한 변수
int game_set = 0;
int best_score = 0;//최고점
int score_2nd = 0;
int score_3rd = 0;
char best_player[10] = { 0 };
char player2[10] = { 0 };
char player3[10] = { 0 };