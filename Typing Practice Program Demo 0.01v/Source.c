#include"Header.h"

void gotoxy(int x,int y)
{
	COORD cd;
	cd.X = x;
	cd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}
extern int language_Type = 1;	
int BreakHan(wchar_t *str, wchar_t *buffer, UINT nSize)	//한글 한글자에 대해 초성,중성, 종성을 하나하나 분리해주는 함수 
{ 
	int head_Index,mid_Index,tail_Index;
	//초성에 대한 정보
	static const wchar_t wcHead[] = {L'ㄱ', L'ㄲ', L'ㄴ', L'ㄷ', 
		L'ㄸ', L'ㄹ', L'ㅁ', L'ㅂ', 
		L'ㅃ', L'ㅅ', L'ㅆ', L'ㅇ', 
		L'ㅈ', L'ㅉ', L'ㅊ', L'ㅋ', 
		L'ㅌ', L'ㅍ', L'ㅎ'};

	//중성에 대한 정보
	static const wchar_t wcMid[] = {L'ㅏ', L'ㅐ', L'ㅑ', L'ㅒ', 
		L'ㅓ', L'ㅔ', L'ㅕ', L'ㅖ', 
		L'ㅗ', L'ㅘ', L'ㅙ', L'ㅚ', 
		L'ㅛ', L'ㅜ', L'ㅝ', L'ㅞ', 
		L'ㅟ', L'ㅠ', L'ㅡ', L'ㅢ', L'ㅣ'};

	//종성에 대한 정보
	static const wchar_t wcTail[] = {L' ', L'ㄱ', L'ㄲ', L'ㄳ', 
		L'ㄴ', L'ㄵ', L'ㄶ', L'ㄷ', 
		L'ㄹ', L'ㄺ', L'ㄻ', L'ㄼ', 
		L'ㄽ', L'ㄾ', L'ㄿ', L'ㅀ', 
		L'ㅁ', L'ㅂ', L'ㅄ', L'ㅅ', 
		L'ㅆ', L'ㅇ', L'ㅈ', L'ㅊ', 
		L'ㅋ', L'ㅌ', L'ㅍ', L'ㅎ'};

	UINT    pos = 0;
	while(*str != '\0') 
	{
		head_Index = (*str - 0xAC00) / (21*28);			//한글 한글자의 초성
		mid_Index = (*str - 0xAC00) % (21 * 28) / 28;	//중성
		tail_Index = (*str - 0xAC00) % 28;				//종성

		if(*str < 256)					//str이 한글이 아니라면
		{ 
			if(pos+2 >= nSize-1)	
				break;

			buffer[pos] = *str;		//str의 한글자를 buffer에 저장
			++pos;		//분리한 글자 개수
			++str;		//str문장의 다음 글자
		} 
		else 
		{ 
			if(pos+4 >= nSize-1) 
				break;
			//초성 1개 중성 1개 
			if(mid_Index < 9 || mid_Index == 12 || mid_Index == 13 ||mid_Index ==17||mid_Index == 18||mid_Index == 20)
			{
				//종성 0개
				if(tail_Index == 0)
				{
					buffer[pos] = wcHead[head_Index]; 
					buffer[pos+1] = wcMid[mid_Index];
					pos+= 2;
				}
				//종성 1개
				else if(tail_Index == 1 ||tail_Index ==2||tail_Index == 4||tail_Index == 6||tail_Index == 7||tail_Index == 8||tail_Index == 16||tail_Index == 17||tail_Index >= 19 )  
				{
					buffer[pos] = wcHead[head_Index]; 
					buffer[pos+1] = wcMid[mid_Index]; 
					buffer[pos+2] = wcTail[tail_Index];
					pos+=3;
				}
				//종성 2개
				else
				{
					buffer[pos] = wcHead[head_Index]; 
					buffer[pos+1] = wcMid[mid_Index]; 
					switch(tail_Index)
					{
					case 3:
						buffer[pos+2] = wcTail[1];
						buffer[pos+3] = wcTail[19];
						pos+= 4;
						break;
					case 5:
						buffer[pos+2] = wcTail[4];
						buffer[pos+3] = wcTail[22];
						pos+= 4;
						break;
					case 6:
						buffer[pos+2] = wcTail[4];
						buffer[pos+3] = wcTail[27];
						pos+= 4;
						break;
					case 9:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[1];
						pos+= 4;
						break;
					case 10:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[16];
						pos+= 4;
						break;
					case 11:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[17];
						pos+= 4;
						break;
					case 12:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[19];
						pos+= 4;
						break;
					case 13:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[25];
						pos+= 4;
						break;
					case 14:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[26];
						pos+= 4;
						break;
					case 15:
						buffer[pos+2] = wcTail[8];
						buffer[pos+3] = wcTail[27];
						pos+= 4;
						break;
					case 18:
						buffer[pos+2] = wcTail[17];
						buffer[pos+3] = wcTail[19];
						pos+= 4;
						break;
					}
				}

			}
			//초성 1개 중성 2개 종성 2개
			else
			{
				buffer[pos] = wcHead[head_Index];
				switch(mid_Index)
				{
				case 9:
					buffer[pos+1] = wcMid[8];
					buffer[pos+2] = wcMid[0];
					break;
				case 10:
					buffer[pos+1] = wcMid[8];
					buffer[pos+2] = wcMid[1];
					break;
				case 11:
					buffer[pos+1] = wcMid[8];
					buffer[pos+2] = wcMid[20];
					break;
				case 14:
					buffer[pos+1] = wcMid[13];
					buffer[pos+2] = wcMid[4];
					break;
				case 15:
					buffer[pos+1] = wcMid[13];
					buffer[pos+2] = wcMid[4];
					break;
				case 16:
					buffer[pos+1] = wcMid[13];
					buffer[pos+2] = wcMid[20];
					break;
				case 19:
					buffer[pos+1] = wcMid[18];
					buffer[pos+2] = wcMid[20];
					break;
				}
				//종성 0개
				if(tail_Index == 0)
				{
					pos+= 3;
				}
				//종성 1개
				else if(tail_Index == 1 ||tail_Index ==2||tail_Index == 4||tail_Index == 6||tail_Index == 8||tail_Index == 7||tail_Index == 16||tail_Index == 17||tail_Index >= 19 )  
				{
					buffer[pos+3] = wcTail[tail_Index];
					pos+=4;
				}
				//종성 2개
				else
				{
					switch(tail_Index)
					{
					case 3:
						buffer[pos+3] = wcTail[1];
						buffer[pos+4] = wcTail[19];
						pos+= 5;
						break;
					case 5:
						buffer[pos+3] = wcTail[4];
						buffer[pos+4] = wcTail[22];
						pos+= 5;
						break;
					case 6:
						buffer[pos+3] = wcTail[4];
						buffer[pos+4] = wcTail[27];
						pos+= 5;
						break;
					case 9:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[1];
						pos+= 5;
						break;
					case 10:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[16];
						pos+= 5;
						break;
					case 11:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[17];
						pos+= 5;
						break;
					case 12:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[19];
						pos+= 5;
						break;
					case 13:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[25];
						pos+= 5;
						break;
					case 14:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[26];
						pos+= 5;
						break;
					case 15:
						buffer[pos+3] = wcTail[8];
						buffer[pos+4] = wcTail[27];
						pos+= 5;
						break;
					case 18:
						buffer[pos+3] = wcTail[17];
						buffer[pos+4] = wcTail[19];
						pos+= 5;
						break;
					}
				}
			}

			++str; 
		}

	}
	buffer[pos] = '\0'; 
	return pos;// 문자열에 포함되어 있는 글자수를 반환하고 종료

}
wchar_t** include_short_sentence(int* sentence_Count,FILE* Short_practice)	//텍스트 파일에 있는 짧은 글들을 동적인 크기의 2차원 배열에 저장.
{
	
	int i;
	char New_line;						
	wchar_t** Short_sentence;			//텍스트파일 안의 짧은 문장을 저장하는 포인터
	setlocale(LC_ALL, "Korean");		//유니코드 한글로 설정
	*sentence_Count = 0;				//텍스트파일의 줄 수(짧은 문장의 개수)
	
	while(!feof(Short_practice))		//텍스트 파일의 라인수를 읽는다.
	{
		New_line = fgetc(Short_practice);
		if(New_line == '\n')
			(*sentence_Count)++;		
	}
	rewind(Short_practice);				
	Short_sentence = (wchar_t**)malloc(sizeof(wchar_t*)*(*sentence_Count));	//텍스트파일의 라인수 == 짧은 문장 개수대로 동적할당.
	for(i = 0 ; i < *sentence_Count ; i++)
	{
		Short_sentence[i] = (wchar_t*)malloc(sizeof(wchar_t)*50);	//짧은글 하나에 50개의 문자 저장
		fgetws(Short_sentence[i],50,Short_practice);				//텍스트파일에 있는 짧은 문장을 읽는다.
	}
	return Short_sentence;	//짧은글을 저장하고 있는 포인터 /반환
}
wchar_t*** include_long_sentence(FILE* long_practice,int* Long_Num,int sentence_Count[])	//텍스트파일의 긴글들을 동적인 크기의 3차원 배열에 저장
{
	int i,j;
	char New_line;
	wchar_t buffer;
	wchar_t*** Long_sentence;
	
	setlocale(LC_ALL, "Korean");
	while(!feof(long_practice))
	{
		New_line = fgetc(long_practice);
		if(New_line == '[')					//텍스트 파일에서 '['를 만나면
		{
			while((New_line = fgetc(long_practice)) != ']')	//']'를 만날때 까지
			{
				if(New_line == '\n')
					sentence_Count[*Long_Num]++;			//sentence_Count에 하나의 긴글에 대한 문장 개수 저장
			}												//Long_Num은 긴 글 개수
			sentence_Count[*Long_Num]--;
			(*Long_Num)++;
		}
	}
	rewind(long_practice);
	Long_sentence = (wchar_t***)malloc(sizeof(wchar_t**)*(*Long_Num));	//긴글 개수에 따라 3차원 동적할당
	for(i = 0 ; i < *Long_Num ; i++)
		Long_sentence[i] = (wchar_t**)malloc(sizeof(wchar_t*)*sentence_Count[i]);	//하나의 긴글에대한 문장 개수에 따라 동적할당
	for(i = -1 ; !feof(long_practice) ;)
	{
		buffer = fgetc(long_practice);
		if(buffer == '[')		//텍스트파일에서 '['를 만나면
		{ 
			i++;
			buffer = fgetc(long_practice);
			for(j = 0 ; j < sentence_Count[i] ; j++)	
			{
				Long_sentence[i][j] = (wchar_t*)malloc(sizeof(wchar_t)*50);		//하나의 긴글 한줄의 메모리를 할당하고
				fgetws(Long_sentence[i][j],50,long_practice);					//텍스트 파일에서 한줄을 읽는다.
			}
		}
	}
	return Long_sentence;		//긴 글을 저장하고 있는 포인터 반환
}
wchar_t*** include_long_sentence_SOU(FILE* long_practice, int* Long_Num, int sentence_Count[])	//텍스트파일의 긴글들을 동적인 크기의 3차원 배열에 저장
{
	int i, j;
	char New_line;
	wchar_t buffer;
	wchar_t*** Long_sentence;

	setlocale(LC_ALL, "Korean");
	while (!feof(long_practice))
	{
		New_line = fgetc(long_practice);
		if (New_line == '@')					//텍스트 파일에서 '['를 만나면
		{
			while ((New_line = fgetc(long_practice)) != '`')	//']'를 만날때 까지
			{
				if (New_line == '\n')
					sentence_Count[*Long_Num]++;			//sentence_Count에 하나의 긴글에 대한 문장 개수 저장
			}												//Long_Num은 긴 글 개수
			sentence_Count[*Long_Num]--;
			(*Long_Num)++;
		}
	}

	rewind(long_practice);
	Long_sentence = (wchar_t***)malloc(sizeof(wchar_t**)*(*Long_Num));	//긴글 개수에 따라 3차원 동적할당
	for (i = 0; i < *Long_Num; i++)
		Long_sentence[i] = (wchar_t**)malloc(sizeof(wchar_t*)*sentence_Count[i]);	//하나의 긴글에대한 문장 개수에 따라 동적할당
	for (i = -1; !feof(long_practice);)
	{
		buffer = fgetc(long_practice);
		if (buffer == '@')		//텍스트파일에서 '['를 만나면
		{
			i++;
			buffer = fgetc(long_practice);
			for (j = 0; j < sentence_Count[i]; j++)
			{
				Long_sentence[i][j] = (wchar_t*)malloc(sizeof(wchar_t) * 50);		//하나의 긴글 한줄의 메모리를 할당하고
				fgetws(Long_sentence[i][j], 50, long_practice);					//텍스트 파일에서 한줄을 읽는다.
			}
		}
	}
	return Long_sentence;		//긴 글을 저장하고 있는 포인터 반환
}
void Record_set(int* start_Typing,int* X_Cursor,int* present,int* Check_accuracy,wchar_t* typing_One_word,wchar_t* Example_sentence)
{
	*start_Typing = 1;			//시작시점 초기화
	*X_Cursor = 0;				//커서값 초기화
	*present = 0;				//현재 입력하고 있는 문자 초기화
	memset(Check_accuracy,-1,4*100);		//예시문과 맞는지 체크하는 변수 초기화
	memset(typing_One_word,0,sizeof(wchar_t)*50);		//사용자 입력변수 초기화
	memset(Example_sentence,0,sizeof(wchar_t)*50);		//예시문 초기화

}
int Long_sentence_practice(wchar_t*** Long_sentence,int Long_Num,int sentence_Count[],FILE* Info_practice)
{
	wchar_t Example_sentence[50];	//한줄씩 첵
	wchar_t typing_One_word[7][50] = {L"",L"",L"",L"",L"",L"",L""}; //길글은 최대 7문장으로 구성. 한 문장당 50개의 문자 저장
	wchar_t temp[500] = L"";
	wchar_t tmp[1000];
	double typing_start_Time,typing_finish_Time;
	double typing_duration_Time;
	int start_Typing=1,present = 0,correct_word_Count =0;	//start_typing이 0이면 입력시작
	int len_Example_sentence ;
	int X_Cursor = 5;		//X 커서위치
	int Y_Cursor = 17;		//Y 커서위치
	int i,j = 0;
	int Highest_Typist = 0;		//최대 타자수
	int User_input_typist;		//사용자가 입력한 글자개수
	long long Typist = 0;		//타자수
	int typing_Accuracy = 0;	//정확도
	int sentence_word_Count;	//긴글 문장에서의 글자개수
	int Check_accuracy[100] = {-1,};	//-1이면 무입력 상태, -2이면 맞는 입력, 다른값으맞
	int Random;
	int k;
	
	setlocale(LC_ALL, "Korean");
	k = Long_prac_Main(Long_sentence,Long_Num);	//메뉴에서 몇번째 긴글인지 선택
	if(k == -1)
		return 0;
	else if(k == -2)
		return -1;
	else
	{
	
		UI_Long_prac(Long_sentence[k],sentence_Count[k]);	//사용자가 선택한 긴글 출력.
		while(j != sentence_Count[k])		//긴글이 끝날떄까지
		{
			start_Typing = 1;			//값들 초기화
			X_Cursor = 2;
			present = 0;
			memset(Check_accuracy,-1,4*100);
			memset(Example_sentence,0,sizeof(wchar_t)*50);
			
			wcscpy(Example_sentence,Long_sentence[k][j]);		//긴글의 한 문장을 읽는다.
			len_Example_sentence = wcslen(Example_sentence);	//위에서 읽은 문장의 길이
			while(1)
			{

				gotoxy(5,16+(j*2));
				for(i = 0 ; i < len_Example_sentence ; i++)		//사용자 입력과 예시문과의 일치 실시간 확인
				{
					if(Check_accuracy[i] == i)		//틀릴경우
					{
						RED;
					}
					else if(Check_accuracy[i] == -2)	//맞는경우
					{
						COROL;
					}
					else			//무입력상태
					{
						WHITE;
					}
					printf("%C",Example_sentence[i]);
				}
				if(present>=len_Example_sentence-1)	//문자 길이보다 많이 입력받으면 종료
				{
					break;
				}	
				gotoxy(3+X_Cursor,Y_Cursor+(j*2));
				typing_One_word[j][present] = _getwche();	//문자 하나를 입력받음
				if(typing_One_word[j][present] == 27)	// ESC키를 누르면 연습종료
				{
					break;
				}
				if(typing_One_word[j][present] == 8 && present == 0)	//커서가 처음이고, 백스페이스를 누르면 
					gotoxy(X_Cursor+3,Y_Cursor+(j*2));		//동작없는것처럼 보이게.
				else if(typing_One_word[j][present] == 8)	//백스페이스를 누르면
				{
					if(present>=1)
					{
						if(Example_sentence[present-1] < 256)	//전 글자가 1byte이면
						{
							present--;
							X_Cursor-=1;						//커서 하나만 뒤로 이동
							gotoxy(X_Cursor+3,Y_Cursor+(j*2));
							printf(" ");		//지워진것처럼 보이게 덮어씀
						}
						else				//전 글자가 2byte면
						{	
							present--;		
							X_Cursor-=2;		//커서 두개 이동
							gotoxy(X_Cursor+3,Y_Cursor+(j*2));
							printf("  ");
						}
					}
					Check_accuracy[present] = -1;	//지워진 예시글 다시 하얀색으로 출력되게 값 변경
				}
				else if(typing_One_word[j][present] != Example_sentence[present])  //예시문이랑 달를경우
				{
					if(present== 0 && start_Typing == 1 &&j == 0)		//최초입력시에
					{
						start_Typing = 0 ;				//최초입력변수 0으로 변경
						typing_start_Time = (double)(clock())/CLOCKS_PER_SEC;	//입력 시간 시작
					}
					if(typing_One_word[j][present] <256 && Example_sentence[present] <256)	//문자 크기에 따른 커서 이동
					{
						X_Cursor+=1;
						Check_accuracy[present] = present;
					}
					else if(typing_One_word[j][present] > 256 && Example_sentence[present] <256)
					{
						if(Example_sentence[present+1] < 256)
						{
							Check_accuracy[present] = present;
							Check_accuracy[present+1] = present+1;
							X_Cursor+= 2;
							present++;
						}
						else
						{
							X_Cursor+= 3;
							Check_accuracy[present] = present;
							Check_accuracy[present+1] = present+1;
							present++;
						}
					}
					else if(typing_One_word[j][present] < 256 && Example_sentence[present] > 256)
					{
						X_Cursor+= 2;
						Check_accuracy[present] = present;
					}
					else if(typing_One_word[j][present] >256 && Example_sentence[present] > 256)
					{
						X_Cursor+= 2;
						Check_accuracy[present] = present;
					}
					present++;
				}
				else  //예시문이랑 같게 입력
				{
					if(present== 0 && start_Typing == 1 &&j == 0)
					{
						start_Typing = 0 ;
						typing_start_Time = (double)(clock())/CLOCKS_PER_SEC;
					}
					if(typing_One_word[j][present] < 256)
					{
						Check_accuracy[present] = -2;
						X_Cursor+= 1;
					}
					else
					{
						Check_accuracy[present] = -2;
						X_Cursor+=2;
					}
					present++;
				}
			}
			if(typing_One_word[j][present] == 27)
			{
				break;
			}
			j++;
		}
		if(typing_One_word[j][present] == 27)		//입력도중 ESC키 입력하면 종료
			return 0;
		typing_finish_Time = (double)(clock())/CLOCKS_PER_SEC;	//연습종료시간
		correct_word_Count = 0;
		for(j = 0 ; j < sentence_Count[k] ; j++)
		{
			memset(Example_sentence,0,sizeof(wchar_t)*50);
			wcscpy(Example_sentence,Long_sentence[k][j]);
			len_Example_sentence = wcslen(Example_sentence);
			for(i = 0 ; i <= len_Example_sentence ; i++)
			{
				if((typing_One_word[j][i] == Example_sentence[i]) && (typing_One_word[j][i] != 0))
				{
					temp[correct_word_Count] = Example_sentence[i];
					correct_word_Count++;
				}
			}
		}
		memset(tmp,0,sizeof(wchar_t)*1000);
		wcscpy(tmp,Example_sentence);
		typing_duration_Time = (typing_finish_Time-typing_start_Time)+0.5;//CLOCKS_PER_SEC;
		User_input_typist = BreakHan(temp,tmp,sizeof temp);	//사용자가 입력한 타수

		memset(tmp,0,sizeof(wchar_t)*1000);
		wcscpy(tmp,Example_sentence);
		memset(temp,0,sizeof(wchar_t)*500);
		//wcscpy(temp,Example_sentence);
		for(i = 0 ; i < sentence_Count[k] ; i++)
			wcscat(temp,Long_sentence[k][i]);
		sentence_word_Count = BreakHan(temp,tmp,sizeof temp);	//긴글에 입력해야 하는 타수

		typing_Accuracy = (float)(User_input_typist)/(sentence_word_Count-sentence_Count[k])*100;	//정확도계산
		Typist = (User_input_typist*60)/(typing_duration_Time);		//타자수 계산
		/*for( i = 0 ; i < Long_Num ; i++)
		{
			for(j = 0 ; j < sentence_Count[i] ; j++)
				free(Long_sentence[i][j]);
		}
		free(Long_sentence);*/

		Result_Long_prac(typing_Accuracy,Typist);		//결과화면 출력
		fprintf(Info_practice,"%d %d\n",typing_Accuracy,Typist);	//텍스트파일에 쓰기
	}
}
int Short_sentence_practice(wchar_t** Short_sentence,int sentence_Count)
{
	wchar_t Example_sentence[50];		//짧은글 예시문 길이는 최대 50문자
	wchar_t typing_One_word[50] = L"";	//사용자 문자 입력 변수
	wchar_t temp[50] = L"";
	wchar_t tmp[500];
	double typing_start_Time,typing_finish_Time;
	double typing_duration_Time;
	int start_Typing=1,present = 0,correct_word_Count =0;	//start_typing이 0이면 입력시작
	int len_Example_sentence ;
	int X_Cursor = 0;
	int Y_Cursor = 20;
	int i;
	int Highest_Typist = 0;
	int User_input_typist;
	long long Typist = 0;
	int typing_Accuracy = 0;
	int sentence_word_Count;
	int Check_accuracy[100] = {-1,};	//-1이면 무입력 상태, -2이면 맞는 입력, 다른값으맞
//	int sentence_Count;
	int Random;
//	wchar_t** Short_sentence = NULL;
	setlocale(LC_ALL, "Korean");
	
//	Short_sentence = include_short_sentence(&sentence_Count,Short_practice);
	
	while(1)
	{
		typingsound();
		Record_set(&start_Typing,&X_Cursor,&present,Check_accuracy,typing_One_word,Example_sentence);	//데이터값 초기화
		UI_Short_prac(&Highest_Typist,&Typist,&typing_Accuracy);				//UI뿌리기
		
		srand((unsigned)time(0));			
		Random = rand()%sentence_Count;		//짧은글 랜덤으로 고르기
		wcscpy(Example_sentence,Short_sentence[Random]);	
		len_Example_sentence = wcslen(Example_sentence);
		
		while(1)	//긴글 검사하는것과 동일
		{
			
			if(present>=len_Example_sentence-1)
			{
				typing_finish_Time = (double)(clock())/CLOCKS_PER_SEC;
				break;
			}
			gotoxy(5,Y_Cursor-3);
			for(i = 0 ; i < len_Example_sentence ; i++)
			{
				if(Check_accuracy[i] == i)
				{
					RED;
				}
				else if(Check_accuracy[i] == -2)
				{
					COROL;
				}
				else
				{
					WHITE;
				}
				printf("%C",Example_sentence[i]);
			}
	
			gotoxy(X_Cursor+5,Y_Cursor);
			typing_One_word[present] = _getwche();
			if(typing_One_word[present] == 27)
			{
				break;
			}
			if(typing_One_word[present] == 8 && present == 0)
				gotoxy(X_Cursor+5,Y_Cursor);
			else if(typing_One_word[present] == 8)
			{
				if(present>=1)
				{
					if(Example_sentence[present-1] < 256)
					{
						present--;
						X_Cursor-=1;
						gotoxy(X_Cursor+5,Y_Cursor);
						printf(" ");
					}
					else
					{
						present--;
						X_Cursor-=2;
						gotoxy(X_Cursor+5,Y_Cursor);
						printf("  ");
					}
				}
				Check_accuracy[present] = -1;
			}
			else if(typing_One_word[present] != Example_sentence[present])  //예시문이랑 다를경우
			{
				if(present== 0 && start_Typing == 1)
				{
					start_Typing = 0 ;
					typing_start_Time = (double)(clock())/CLOCKS_PER_SEC;
				}
				if(typing_One_word[present] <256 && Example_sentence[present] <256)
				{
					X_Cursor+=1;
					Check_accuracy[present] = present;
				}
				else if(typing_One_word[present] > 256 && Example_sentence[present] <256)
				{
					if(Example_sentence[present+1] < 256)
					{
						Check_accuracy[present] = present;
						Check_accuracy[present+1] = present+1;
						X_Cursor+= 2;
						present++;
					}
					else
					{
						X_Cursor+= 3;
						Check_accuracy[present] = present;
						Check_accuracy[present+1] = present+1;
						present++;
					}
				}
				else if(typing_One_word[present] < 256 && Example_sentence[present] > 256)
				{
					X_Cursor+= 2;
					Check_accuracy[present] = present;
				}
				else if(typing_One_word[present] >256 && Example_sentence[present] > 256)
				{
					X_Cursor+= 2;
					Check_accuracy[present] = present;
				}
				present++;
			}
			else  //예시문이랑 같게 입력
			{
				if(present== 0 && start_Typing == 1)
				{
					start_Typing = 0 ;
					typing_start_Time = (double)(clock())/CLOCKS_PER_SEC;
				}
				if(typing_One_word[present] < 256)
				{
					Check_accuracy[present] = -2;
					X_Cursor+= 1;
				}
				else
				{
					Check_accuracy[present] = -2;
					X_Cursor+=2;
				}
				present++;
			}
		}
		correct_word_Count = 0;
		if(typing_One_word[present] == 27)
			break;
		for(i = 0 ; i <= len_Example_sentence ; i++)
		{
			if(typing_One_word[i] == Example_sentence[i])		//사용자가 입력한 문자와 예시문의 문자와 맞는 글자로만 새로운 문자열 생성
			{
				temp[correct_word_Count] = Example_sentence[i];
				correct_word_Count++;
			}
		}
		memset(tmp,0,sizeof(wchar_t)*500);
		wcscpy(tmp,Example_sentence);
		typing_duration_Time = (typing_finish_Time-typing_start_Time)+0.5;//CLOCKS_PER_SEC;
		User_input_typist = BreakHan(temp,tmp,sizeof Example_sentence);	//사용자가 정확하게 입력한 타자 개수
		memset(tmp,0,sizeof(wchar_t)*500);
		wcscpy(tmp,Example_sentence);
		memset(temp,0,sizeof(wchar_t)*50);
		wcscpy(temp,Example_sentence);
		sentence_word_Count = BreakHan(temp,tmp,sizeof Example_sentence);	//사용자가 입력해야하는 예시문의 타자 개수
		typing_Accuracy = (float)(User_input_typist)/(sentence_word_Count-1)*100;	//정확도 계산
		Typist = (User_input_typist*60)/(typing_duration_Time);		//타자수 계산
	}
	stopsound();
	return 0;
}
int main(int argc,char* argv[])
{


	int i,j,k;
	wchar_t*** Long_sentence_KOR = NULL;
	int Long_Num_KOR = 0;
	int sentence_Count_KOR[5] = {0,};
	
	wchar_t*** Long_sentence_ENG = NULL;
	int Long_Num_ENG = 0;
	int sentence_Count_ENG[5] = {0,};

	wchar_t*** Long_sentence_SOU = NULL;
	int Long_Num_SOU = 0;
	int sentence_Count_SOU[5] = { 0, };

	
	wchar_t** Short_sentence_KOR = NULL;
	int Short_sentence_Count_KOR = 0;

	wchar_t** Short_sentence_ENG = NULL;
	int Short_sentence_Count_ENG = 0;
	wchar_t** Short_sentence_SOU = NULL;
	int Short_sentence_Count_SOU = 0;


	FILE* Short_practice_KOR;
	FILE* Short_practice_ENG;
	FILE* Long_practice_KOR;
	FILE* Long_practice_ENG;
	FILE* Long_practice_SOU;
	FILE* Short_practice_SOU;
	FILE* Info_practice;

			
	
	//파일 열기
	Short_practice_KOR = fopen(argv[1],"r");
	Short_practice_ENG = fopen(argv[2],"r");
	Long_practice_KOR = fopen(argv[3],"r");
	Long_practice_ENG = fopen(argv[4],"r");
	Info_practice = fopen(argv[5],"r+");
	Long_practice_SOU = fopen("Long_practice_SOU.txt", "r");
	Short_practice_SOU = fopen("Short_practice_SOU.txt", "r");

	if(Short_practice_KOR == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	if(Short_practice_ENG == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	if(Long_practice_KOR == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	
	if(Long_practice_ENG == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	if(Info_practice == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	if (Long_practice_SOU == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	if (Short_practice_SOU == NULL)
	{
		printf("FILE OPEN ERROR\n");
		return -1;
	}
	//메모리 할당
	Long_sentence_KOR = include_long_sentence(Long_practice_KOR,&Long_Num_KOR,sentence_Count_KOR);
	Long_sentence_ENG = include_long_sentence(Long_practice_ENG,&Long_Num_ENG,sentence_Count_ENG);
	Short_sentence_KOR = include_short_sentence(&Short_sentence_Count_KOR,Short_practice_KOR);
	Short_sentence_ENG = include_short_sentence(&Short_sentence_Count_ENG,Short_practice_ENG);
	Long_sentence_SOU = include_long_sentence_SOU(Long_practice_SOU, &Long_Num_SOU, sentence_Count_SOU);
	Short_sentence_SOU = include_short_sentence(&Short_sentence_Count_SOU, Short_practice_SOU);

	
	//프로그램 실행
	First_Page();
	Beep(MI, 70);
	Beep(DO, 100);
	while(1)
	{
		
		i = Short_prac_Main();
			if (i == -1)
				break;
			switch (i)
			{
			case 0:
				break;
			case 1:

				if (language_Type == 1)
					i = Short_sentence_practice(Short_sentence_KOR, Short_sentence_Count_KOR);
				else if (language_Type == 2)
					i = Short_sentence_practice(Short_sentence_ENG, Short_sentence_Count_ENG);
				else if (language_Type == 3)
					i = Short_sentence_practice(Short_sentence_SOU, Short_sentence_Count_SOU);
				break;
			}
			fflush(stdin);


		if(language_Type == 1)
			i = Long_sentence_practice(Long_sentence_KOR,Long_Num_KOR,sentence_Count_KOR,Info_practice);
		else if(language_Type == 2)
			i = Long_sentence_practice(Long_sentence_ENG,Long_Num_ENG,sentence_Count_ENG,Info_practice);
		else if (language_Type == 3)
			i = Long_sentence_practice(Long_sentence_SOU, Long_Num_SOU, sentence_Count_SOU, Info_practice);

		if (i == -1)
		{
		
			
			break;
		}
		fflush(stdin);
		
		
		i = Game_Main();

		if (i == -1)
			break;
		switch (i)
		{
		case 0:

			break;
		default:
			startgame();
			break;
		}
		fflush(stdin);

		i = Environment_Main();
		if (i == -1)
			break;
		switch(i)
		{
		case 0:
		
			break;
		case 1:
			
			
			language_Type = Environment(Info_practice);
			break;
		}
	}
	
	//메모리 반환
	for( k = 0 ; k < Long_Num_KOR ; k++)
	{
		for(j = 0 ; j < sentence_Count_KOR[i] ; j++)
			free(Long_sentence_KOR[k][j]);
	}
	free(Long_sentence_KOR);
	for( k = 0 ; k < Long_Num_ENG ; k++)
	{
		for(j = 0 ; j < sentence_Count_ENG[i] ; j++)
			free(Long_sentence_ENG[k][j]);
	}
	free(Long_sentence_ENG);
	 
	for( i = 0 ; i < Short_sentence_Count_KOR ; i++)
	{
		free(Short_sentence_KOR[i]);
	}
	free(Short_sentence_KOR);
	for( i = 0 ; i < Short_sentence_Count_ENG ; i++)
	{
		free(Short_sentence_ENG[i]);
	}
	for (k = 0; k < Long_Num_SOU; k++)
	{
		for (j = 0; j < sentence_Count_SOU[i]; j++)
			free(Long_sentence_SOU[k][j]);
	}
	free(Long_sentence_SOU);
	for (i = 0; i < Short_sentence_Count_SOU; i++)
	{
		free(Short_sentence_SOU[i]);
	}
	

	
	//파일 닫기
	free(Short_sentence_SOU);
	free(Short_sentence_ENG);
	fclose(Short_practice_ENG);
	fclose(Short_practice_KOR);
	fclose(Long_practice_ENG);
	fclose(Long_practice_KOR);
	fclose(Info_practice);
	fclose(Long_practice_SOU);
	fclose(Short_practice_SOU);
	return 0;
}


