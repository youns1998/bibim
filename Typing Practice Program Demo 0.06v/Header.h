#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <process.h>
#include <tchar.h>
#define DO 510
#define MI  660
#define BACK   700
#define col GetStdHandle(STD_OUTPUT_HANDLE) 
#define RED SetConsoleTextAttribute(col, 0x000c); 
#define WHITE SetConsoleTextAttribute(col, 0x000f); 
#define COROL SetConsoleTextAttribute(col, 0x000a); 
#define getrandom( min, max ) (SHORT)((rand() % (int)(((max) + 1) - \
                               (min))) + (min))

void gotoxy(int x, int y);
void First_Page();
void UI_Short_prac(int* Highest_Typist, long long* Typist, int* typing_Accuracy);
void UI_Long_prac(wchar_t** Long_sentence, int sentence_Count);
int Long_prac_Main(wchar_t*** Long_Name, int Long_Num);
void Result_Long_prac(int typing_Accuracy, int Typist);
int Short_prac_Main();
int Game_Main();
int Environment_Main();
int Environment(FILE* Info_practice);
wchar_t test_str[10];//산성비 단어 입력받는 변수
int stage;
int game_score;
int number_word;
int sign_clear;
int rain_ph;
int count;
int complete_word;//입력되거나 땅에 떨어진 단어 개수
int animate;
					// Thread 1: main 

int     ThreadNr;                    // Number of threads started 
CONSOLE_SCREEN_BUFFER_INFO csbiInfo; // Console information 

