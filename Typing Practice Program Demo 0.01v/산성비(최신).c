#include"Header.h"
int language_Type;//한글인지 영어인지 정보를 담는 변수

void Game_Exe(){
	COORD Coords;
	DWORD trash;
	int KeyInfo;


	Coords.X = 42;	
	Coords.Y = 26;

	 //화면 정보를 얻는다
    hConsoleOut = GetStdHandle( STD_OUTPUT_HANDLE );
    system("cls");
	system("mode con cols=110 lines=29");		//화면크기를 설정한다.
    GetConsoleScreenBufferInfo( hConsoleOut, &csbiInfo );
  
  

    // Create the mutexes and reset thread count. 
    hScreenMutex = CreateMutex( NULL, FALSE, NULL );  // Cleared 
    hRunMutex = CreateMutex( NULL, TRUE, NULL );      // Set 
    ThreadNr = 1;
	
    setlocale(LC_ALL, "Korean");
	
	count =0;
	(GetAsyncKeyState(VK_ESCAPE) & 0x0001); //ESC가 한번이라도 눌린적있다면 그 흔적을 없애기 위한 함수호출임. (게임도중에 이 함수를 한번 더 쓰기위해서) 

	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│점수 :\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│단계 :\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│PH\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│7□\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│6□\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│5□\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t│4□\n");
	printf("────────────────────────────────────────────────┤3□\n");
	printf("\t\t\t\t  ┌──────────┐\t\t\t\t\t│2□\n");
	printf("\t\t\t\t  │입력:               │\t\t\t\t\t│1□\n");
	printf("\t\t\t\t  └──────────┘\t\t\t\t\t│\n");
	

	rain_ph = 7;	//PH는 7로 초기화한다.

	while(1)
	{
	if(stage ==1)
	number_word = 5;
	if(stage ==2)
	number_word = 8;
	if(stage ==3)
	number_word = 14;
	if(stage ==4)
	number_word = 20;
	if(stage ==5)
	number_word = 24;
	if(stage ==6)
	number_word = 28;
	if(stage ==7)
	number_word = 30;


			gotoxy(36,15);
				printf("Enter키를 눌러주세요.\n");	//////////////
			gotoxy(42,26);
			KeyInfo = _getch();
			sign_clear=0;	//단어를 생성하는 스레드에서 올바르게 입력된 단어의 수와 스테이지 클리어 조건의 단어의 수가일치하면 이 변수가 1로 되고 스테이지를 클리어한다.
			complete_word=0; // 올바르게 입력된 단어의 수를 저장하는 변수이다.


		if (KeyInfo == 13){   //엔터누르면 스테이지 시작
			_beginthread( Start_thread, 0, &ThreadNr ); //Start_thread라는 스레드를 생성한다.
			gotoxy(36,15);
				printf("                           ");	//메시지 출려하는 것을 이 공백문자열로 지워주는 것이다.
		}
		else{
			continue;
		}

		while(1)
		{
			
			if(sign_clear==1)			 
				break;

		    gotoxy(42,26);
			
			if(language_Type==1){
			_getws_s(test_str,10);		//while문 안에서 반복적으로 문자열(단어)를 입력받는 것이다.
			WriteConsoleOutputCharacter( hConsoleOut,L"                "
			  ,14, Coords, &trash);
			}

			if(language_Type==2){
			_getws_s(test_str,15);
			WriteConsoleOutputCharacter( hConsoleOut,L"                "//입력단을 공백문자로 지워서 깨끗하게 해준다.
			  ,14, Coords, &trash);
			}

			if(complete_word+1==number_word)//스레드에서 변수값이 업데이트돼도 시간차가 있기떄문에 미리 잠깐 sleep해줌..
			Sleep(1000);
			
			

			if(rain_ph == 1 || stage == 8){	//PH가 1이거나 stage가 8단계면 종료한다.
				if(rain_ph == 1)
				sign_clear=0; //초기화시켜놓는다
				count = 0;
				game_score=0;
				return;
			}
		}
		Sleep(1000);

	}
		 // All threads done. Clean up handles.
    CloseHandle( hScreenMutex );
    CloseHandle( hRunMutex );
    CloseHandle( hConsoleOut );
}


void Start_thread(  void * pMyID  ) // Dispatch and count threads. 이것 스레드 1임 (단어 스레드를 생성하는 스레드 )
{
	DWORD   Dummy;
	int i = 0;
	

	
    while(1)
	{
				
			 ThreadNr++;
            _beginthread( BounceProc, 0, &(ThreadNr) ); //단어스레드를 생성한다.(빗방울 or 입력해야할 단어)
		    i++;
			Sleep(1000);	//시간차두고 생성하도록 Sleep한다.

			if(sign_clear==1 || rain_ph==1 || stage == 8)	//이 조건에 맞으면 스레드생성을 그만둔다. (스레드 종료)
			{
				gotoxy(36,15);
				printf("Enter키를 눌러주세요.\n");
				printf("                           ");	
				_endthread();	
			}
	
	}
  
}

void BounceProc(  void * pMyID  )		// 이녀석 ThreadNr은 2부터~~~    2,3,4,5,6,7,8,9,10,...
{
    wchar_t MyCell[330][15];//330 가지의 단어 저장.
    wchar_t    BlankCell[] = L"                ";
    wchar_t str[6];
	COORD   Coords, Delta;
    COORD   Old = {0,0};
	COORD fill = {0,0};
	COORD fill3 = {30,20};
	DWORD   Dummy;
	wchar_t print_score[10];
    char    *MyID = (char*)pMyID;
	int count2,i;
	COORD fill2 = {104,5};
	COORD fill4 = {104,1};//104,1
	COORD fill_ph7=  {99,20};//ph7좌표
	COORD fill_ph6 = {99,21};
	COORD fill_ph5 = {99,22};
	COORD fill_ph4 = {99,23};
	COORD fill_ph3 = {99,24};
	COORD fill_ph2 = {99,25};
	COORD fill_ph1 = {99,26};
	COORD fill5 = {0,24};
	char print_stage;
	FILE *fp;
	WCHAR b_nemo[] = L"■", w_nemo[] = L"□";

	
   srand( (unsigned int) *MyID * 5 );

   if(language_Type ==1){//한글설정이라면
   if((fp= fopen("Rain_data_KOR.txt","r")) == NULL)	{printf("산성비 데이터 파일 열기 오류\n"); exit(1);}
  for(i=0;i<330;i++){
  fgetws(MyCell[i],(wcslen(MyCell[i])-1)*2,fp);	
  MyCell[i][wcslen(MyCell[i])-1] = NULL;
  }
  }
   if(language_Type ==2){ //영어설정이라면
   if((fp= fopen("Rain_data_ENG.txt","r")) == NULL)	{printf("산성비 데이터 파일 열기 오류\n"); exit(1);}
	 for(i=0;i<330;i++){
     fgetws(MyCell[i],(wcslen(MyCell[i])),fp);	
     MyCell[i][wcslen(MyCell[i])-1] = NULL;
    }
   }

  
  fclose(fp);  
	Coords.X = getrandom( 0, csbiInfo.dwSize.X - 30 );	//초기 X좌표는 랜덤하다.
    Coords.Y = 0;//단어는 맨위에서 생성되어야 하므로 0이다
    Delta.X = 0;//(옆으로는 움직이지 않겠다)
	
    Delta.Y = 1;//밑으로 한칸씩 움직이겠다.
	
  
	 
	 count2=count++;

	 


    do
    {
        // Wait for display to be available, then lock it.
		
        WaitForSingleObject( hScreenMutex, INFINITE );
		
 
		 if(language_Type ==1){// 언어설정이 한글일 경우
            WriteConsoleOutputCharacter( hConsoleOut, BlankCell, wcslen(MyCell[count2])+3, Old, &Dummy );//기존에 위치한 단어를 지운다

      
        WriteConsoleOutputCharacter( hConsoleOut, MyCell[count2], wcslen(MyCell[count2]),
                                     Coords, &Dummy );	//새롭게 단어를 출력한다.(단어가 점점 밑으로 내려오는 것을 출력)
		 }

		 if(language_Type ==2){//언어설정이 영어일 경우
            WriteConsoleOutputCharacter( hConsoleOut, BlankCell, wcslen(MyCell[count2])+3, Old, &Dummy );

      
        WriteConsoleOutputCharacter( hConsoleOut, MyCell[count2], wcslen(MyCell[count2]),
                                     Coords, &Dummy );
		 }

		
        
        ReleaseMutex( hScreenMutex );

			Sleep((8-stage)*90);// 스레드를 멈추게 한다. 슬립을 통해서 Coordes.X or Y가 증가되는 것을 늦춘다. 이거로 속도 조정함

		// Old는 바로 이전의 좌표정보를 담는 변수이다.
        Old.X = Coords.X;
        Old.Y = Coords.Y;
		
		fill.Y = Coords.Y;

        Coords.X += Delta.X;
        Coords.Y += Delta.Y;//새롭게 변하는 단어의 좌표
		
		_itow(game_score,print_score,10);//게임 스코어를 출력해주기위해 문자열로 변환해주는것임


			
	print_stage = stage+48;

		if(stage<8)	//몇 스테이지인지 출력
		FillConsoleOutputCharacter( hConsoleOut, print_stage, 
                                1,fill2, &Dummy );	      
		if(stage==8)//스테이지 8은 없으므로 스테이지가 8일경우 공백문자열로 지워준다. (사용자가 혼란스럽지 않도록하기위해)
		FillConsoleOutputCharacter( hConsoleOut, L"   ", 
                                3,fill2, &Dummy );

			  WriteConsoleOutputCharacter( hConsoleOut, print_score, 
                                wcslen(print_score),fill4, &Dummy );


			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph1, &Dummy );					//PH를 알맞게 출력해주기 위한 작업
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph2, &Dummy );
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo,
                                2,fill_ph3, &Dummy );
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph4, &Dummy );
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph5, &Dummy );
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph6, &Dummy );
			  WriteConsoleOutputCharacter( hConsoleOut, w_nemo, 
                                2,fill_ph7, &Dummy );

			  switch(rain_ph){			//현재의 PH를 알맞게 출력해주기 위해서
			  case 1 : WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph1, &Dummy );
				  break;
			  case 2: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph2, &Dummy );
				  break;
			  case 3: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph3, &Dummy );
				  break;
			  case 4: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph4, &Dummy );
				  break;
			  case 5: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph5, &Dummy );
				  break;
			  case 6: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph6, &Dummy );
				  break;
			  case 7: WriteConsoleOutputCharacter( hConsoleOut, b_nemo, 
                                2,fill_ph7, &Dummy );
				  break;
			  }
		
			   WriteConsoleOutputCharacter( hConsoleOut,L"────────────────────────────────────────────────"
			  ,48, fill5, &Dummy );


		if(stage ==8)// 스테이지 막판이면 스레드 종료
		{
			 WriteConsoleOutputCharacter( hConsoleOut, BlankCell,wcslen(MyCell[count2])+3, Old, &Dummy );
			 _endthread();
		}

		if((complete_word)==number_word){
	
			stage++;				//올바르게 입력한 단어수와 클리어 조건의 단어의 수가 같으면 스테이지수 증가와 게임스코어증가와 PH증가가 되도록함 
			game_score+=100;
			
			if(rain_ph<7){
			rain_ph++;
			
			}

			complete_word = 0; //올바륵 입력한 단어수를 다시 설정해줌
								
			sign_clear = 1;  //클리어 신호를 1로 함으로써 스테이지가 끝났다는 것을 다른 스레드에 전달 할 수 있다.
		}

		if(sign_clear==1){
		WriteConsoleOutputCharacter( hConsoleOut, BlankCell,wcslen(MyCell[count2])+3, Old, &Dummy );		//클리어 시 남아있는 쓰레드 종료
		_endthread();
		}
		if(rain_ph ==1 ){
		WriteConsoleOutputCharacter( hConsoleOut, BlankCell,wcslen(MyCell[count2])+3, Old, &Dummy );		//실패 시 남아있는 쓰레드 종료
		_endthread();
		
		}

		if(wcscmp(test_str,MyCell[count2])==0)// 두 문자열이 일치한다면
		{
			 WriteConsoleOutputCharacter( hConsoleOut, BlankCell,wcslen(MyCell[count2])+3, Old, &Dummy );
			 complete_word++;
			 game_score +=10;
			_endthread();
		
		}
	


        if( Coords.Y > csbiInfo.dwSize.Y-5 )
		{ 
			rain_ph--;						//단어가 한계선에 도달해버릴 경우 PH가 감소되록한것이다,

         Beep( 1000, 250 );//소리내주는 함수임 Beep(주파수,음의길이)
		
		  
			 
			_endthread();  //단어가 한계선에 도달해버릴 경우 스레드를 종료한다. (빗방울 스레드)
		}

		
		if(GetAsyncKeyState(VK_ESCAPE) & 0x0001){
			stage = 8;// ESC눌렀으므로 스테이지를 강제로 8로 설정함으로써 모든 스레드 종료
			gotoxy(36,15);
			printf("Enter키를 눌러주세요.\n");
			
		}

    }
    // Repeat while RunMutex is still taken. 
    while ( WaitForSingleObject( hRunMutex, 75L ) == WAIT_TIMEOUT );

			
}


