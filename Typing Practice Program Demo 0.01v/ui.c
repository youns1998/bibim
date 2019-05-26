#include"Header.h"
#define BLUE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
#define YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
#define WHITE_S SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
#define GRAY SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

void First_Page()
{
	char input;
	system("cls");
	system("mode con cols=130 lines=42");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("........................................................................................,........................................\n");
	printf("...................................................................................,+7$?:.,......................................\n");
	printf("..............................................................................,., 7DNNNNN8,......................................\n");
	printf(".................................................................................+NNDZZONNNO:....................................\n");
	printf(".................................................................................OMN7777IDMND=,..................................\n");
	printf("..........................................................,..:=?+=:.,,..,.....,..7MNZ77777ZMNN=..,...............................\n");
	printf("..........................................................,ONNNNDDND7.............ONNMMDZIIZND8..................................\n");
	printf(".......................................................,.=8NN87=+IONN8:...........~8DNNNNN87$NN=.................................\n");
	printf(".........,,.......,.................,,................,..8ND~......=NNO,..........~DNZ.,?NNNODNO....,,............,..............\n");
	printf("..........................,.........,....,...............DNO.......,NND,..........:8NO,..:7NNNNN:...,............................\n");
	printf("............:+7O8NNNNDDOI=...........:IZDNNNNNNND8$+:....8NO.......,NN8,..,=7ODNND8NNO.....~8NNM~....~?O8DNNNNNN8O$=,............\n");
	printf(".........,=8NNNNNNMNNNNNNND$: ....,INNMNNNNMMNNMNNDNNZ: .8NO.......,NND,.IDNDNNNNNNNNZ......~NNM+..$DDNNNNNNNNNMNNNNNZ~.,........\n");
	printf("........:8NNN8$+~,...,~?ZNNNN$...+DNNNZ?:,. .. .:=$DDNNZ,DNO.......,DNO=DNDNZ+:,.,~IDZ.......INM+?NDNNO?~,......~?7NNNN$.........\n");
	printf("....,..7NNN=.. ...........:INND?ZMN8:... ............$NNNNNO.......,DNDND8:........... ......:DNNNN7,...............:$MNO~,......\n");
	printf("......~ND8~................ +NNNNNO,...  ... ....... ,INNNNO.......,NNNND:....... ............DNNN$..........,.... ..,+NN$.......\n");
	printf(".....,$NN=.......~8NNO, .....:8DDDNZ$ODNNNMMNND~,.  .  INNNO.......,NNNN=.......7NNNZ.........DNN8,.... .,$NMNI....... 7ND=..,...\n");
	printf("....,:8ND,.... .,NNNNN$.......?NNNNNNNNNNNNNNNNM=......~NNNO.......,DNN8. .....=NDNDNI .......DNN=.......7NNNNN+.. ....~NN$......\n");
	printf(".....=DNO.......,NNNNND,... ..~DNNDNDZ+:,.........     ,8NNO...... ,NNDZ..... .?NNNNNO........NND,..    .ZDDNNN7...   .,NNO,.....\n");
	printf(".....=NNZ.......,NNNNND,..... ,DDNDI........ .....    ..8NNO...... ,NNN$ .... .?NNNNNO........NND,...   .ZDDNNN7...   .,NND,.....\n");
	printf(".....=NNZ..... .,NNNNND,......,DNN+... ...?8DN8I,......,8NNO...... ,NNDO.. ....?NNNNNO........NND,.......ZNNNNN7.......,NN8.,....\n");
	printf(".....=NNZ........MNNDNZ.......~NND,..... ,NNDNNM? .....~NNNO...... ,NNDN:.... .~NNNDMI.......:DNN?.......7MDNDM?.......=NN$......\n");
	printf(".....~DNO.........    .......+NNNN$,......... .. .....+MDNNO.......,NNDNN$..................+MNDNN$..................,?MNO.......\n");
	printf(".....~DN8,... ..............INND8NN8:...............,$NNDDNO.......,NN8OMN8~...............$NDD:8NN7:...............:ZMNO~,......\n");
	printf(".....:8ND~..... :NZ=,..,~?DMNMO,.?NNNN8$=~,,,.,~+IONNDM$.ZNND?:..:I8NMI.~8NNDD7=,....,~?ONNNMZ,..=DNNN87+~,.,.,~?78NNDMI,........\n");
	printf(".....,ONNZ,... .,NNNNNMNNNND8+.,,,.IDNNDNNNNMNNNNNDNN$:.,,$NNNNMMNDND$.,,.IDNNNNNMNNNNNNDNNZ:....,,$DNNNNNNNNMNNNNDMD$:.,........\n");
	printf(".....,$NDNZ.....,NNN8NNNDZ?:.,,......,=7ODDNNDD8O$+~.......:IZDNDDOI,.......:+Z8DNDNNDDZI~...........:+$O8DNNDD8O7+:.............\n");
	printf("......INNNN8~...,NNZ......,,..,...................,,...,..........,...........................,...................,,.............\n");
	printf("......=NN8DNNZ=.:NNZ..,....................................,....,,.,,,...................,,.........,............................\n");
	printf("......,DNDZODDNNDNM$.,...............,.,......,....,,...,,.............................,.,.,...,.,...............................\n");
	printf(".......IMNDZ$Z8DDNDN?.............................................,,,........,...............,...................................\n");
	printf("....,.,,7NN8ZZZZZODDN:......... _______          _               _____                _   _          ,...........................\n");
	printf(".........IMNDZZZZZ8NN+.........|__   __|        (_)             |  __ Y              | | (_)         ............................\n");
	printf("......,.,.=MNDDOO8NDM:.........   | |_   _ _ __  _ _ __   __ _  | |__) | __ __ _  ___| |_ _  ___ ___ ............................\n");
	printf("........,,.,$NNDNDND~..........   | | | | | '_ Y| | '_ Y / _` | |  ___/ '__/ _` |/ __| __| |/ __/ _ Y,,..........................\n");
	printf("........,,.,...DNDND~...........  | | |_| | |_) | | | | | (_| | | |   | | | (_| | (__| |_| | (_|  __/,,..........................\n");
	printf("...............................   |_|Y__, | .__/|_|_| |_|Y__, | |_|   |_|  Y__,_|Y___|Y__|_|Y___Y___|............................\n");
	printf("..............................        __/ | |             __/ |                                      ............................\n");
	printf("..............................       |___/|_|            |___/                                       ............................\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\n\n                                                     縛攪酈蒂 援腦賊 衛濛м棲棻."); WHITE;
	while(1)
	{
		input = getch();
		if(input == 13)
			break;
	}
}
int Short_prac_Main()
{
	Beep(MI, 70);
	Beep(DO, 100);
	char input;
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛    "); BLUE;
	printf(" 1. 穠擎 旋 翱蝗    "); WHITE;
	printf("弛     2. 曹 旋 翱蝗      弛    3. 顫濠 翱蝗 啪歜   弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛                        戌式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");	
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(10, 8);
	printf("顫濠 棟睦 щ鼻擊 嬪и 穠擎 旋 翱蝗擊 衛濛м棲棻.");
	gotoxy(10, 10);
	printf("и旋 顫濠 翱蝗, 艙僥 顫濠 翱蝗, 囀註 顫濠 翱蝗醞 и陛雖蒂 摹鷗й 熱 氈蝗棲棻.\n");
	gotoxy(5, 36);
	printf("enter 殮溘 衛 衛濛腌棲棻. 詭景 檜翕擎 tap酈蒂 檜辨п 輿撮蹂.");
	while (1)
	{
		gotoxy(43, 12);
		input = getch();
		if (input == 9)
		{
			return 0;
		}
		else if (input == 13)
		{
			return 1;
		}
		else if (input == 27)
		{
			
			return -1;
		}
	}
}
void UI_Short_prac(int* Highest_Typist,long long* Typist,int* typing_Accuracy)
{
	Beep(MI, 70);
	Beep(DO, 100);
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛    "); BLUE;
	printf(" 1. 穠擎 旋 翱蝗    "); WHITE;
	printf("弛     2. 曹 旋 翱蝗      弛    3. 顫濠 翱蝗 啪歜   弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛                        戌式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n");
	printf(" 弛                                                                                                   弛\n");
	printf(" 弛                                                                                                   弛\n");
	printf(" 弛                                                                                                   弛\n");
	printf(" 弛                                                                                                   弛\n");
	printf(" 弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖弛\n");
	printf(" 弛弛譆堅顫熱 :                ⑷營顫熱 :                 薑�挾� :                                    弛弛\n");
	printf(" 弛戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖     弛弛\n");
	printf(" 弛弛弛                                                                                          弛     弛弛\n");
	printf(" 弛弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎     弛弛\n");
	printf(" 弛弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖     弛弛\n");
	printf(" 弛弛弛                                                                                          弛     弛弛\n");
	printf(" 弛弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎     弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");;
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式-式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎弛\n"); 
	printf(" 弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("部頂衛溥賊 esc蒂 殮溘п 輿撮蹂.\n");
	

	gotoxy(19,11);
	if(*Typist> *Highest_Typist)
		*Highest_Typist = *Typist;
	printf("%d",*Highest_Typist);//譆堅顫熱
	gotoxy(45,11);
	printf("%d",*Typist);//⑷營
	gotoxy(70,11);
	printf("%d",(int)*typing_Accuracy); //薑�挾�

}
int Long_prac_Main(wchar_t*** Long_Name,int Long_Num)
{
	Beep(MI, 70);
	Beep(DO, 100);
	int input;
	int x,y;
	int i;
	x = 5;
	y = 12;
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛    "); BLUE;
	printf("  2. 曹 旋 翱蝗    "); WHITE_S;
	printf(" 弛    3. 顫濠 翱蝗 啪歜   弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式戎                        戌式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛               曹旋 跡煙                                                                           弛\n");
	printf(" 弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛弛                                    弛                                                             弛\n");
	printf(" 弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎                                                             弛\n");
	printf(" 弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("翱蝗й 旋擊 摹鷗ж堅 enter擊 揚楝 輿撮蹂.\n");
	
	setlocale(LC_ALL, "Korean");
	for(i = 0 ; i< Long_Num ; i++)
	{
		gotoxy(x+1,y+i);
		printf("%S",Long_Name[i][0]);
	}
	gotoxy(x,y);
	while(1)
	{
		input = getch();
		if(input == 9)	//kbhit() == TAB
			return -1;
		else if(input == 13)	//kbhit() == enter
			return y-12;
		else if(input == 27)	//kbhit() == esc
			return -2;
		if(input == 224)
			input = getch();
			switch(input)
			{
			case 72:		//裔嬪醴憮縑憮 嬪薹 寞щ酈蒂 揚毓擊唳辦 
				if(y == 12)
					y = 12+Long_Num - 1;
				else
					y--;
				gotoxy(x,y);
				break;
			case 80:
				if(y == 12+Long_Num - 1)
					y = 12;
				else
					y++;
				gotoxy(x,y);
				break;
			}
	}
}
void UI_Long_prac(wchar_t** Long_sentence,int sentence_Count)
{
	system("cls");
	int i;
	int x = 5,y = 16;
	
	Beep(MI, 70);
	Beep(DO, 100);
	
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛    "); BLUE;
	printf("  2. 曹 旋 翱蝗    "); WHITE_S;
	printf(" 弛    3. 顫濠 翱蝗 啪歜   弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式戎                        戌式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛弛                                                                                                 弛弛\n");
	printf(" 弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎弛\n");
	printf(" 弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("謙猿ж衛溥賊 esc蒂 殮溘п 輿撮蹂.");

	
	gotoxy(5,17);
	for(i = 0 ; i < sentence_Count ; i++)
	{
		gotoxy(x,y+(i*2));
		printf("%S",Long_sentence[i]);
	}
}
void Result_Long_prac(int typing_Accuracy,int Typist)
{
	int input; 
	Beep(MI, 70);
	Beep(DO, 100);
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛    "); BLUE;
	printf("  2. 曹 旋 翱蝗    "); WHITE_S;
	printf(" 弛    3. 顫濠 翱蝗 啪歜   弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式戎                        戌式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                       忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖                      弛\n ");
	printf("弛                       弛                  曹 旋 顫濠 翱蝗 唸婁              弛                      弛\n ");
	printf("弛                       弛                                                    弛                      弛\n ");
	printf("弛                       弛       顫濠 樓紫 :                                  弛                      弛\n ");
	printf("弛                       弛                                                    弛                      弛\n ");
	printf("弛                       弛       顫濠 薑�挾� :                                弛                      弛\n ");
	printf("弛                       戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎                      弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("詭景煎 釭陛衛溥賊 enter擊 揚楝輿撮蹂.");

	gotoxy(60,13);
	printf("%d",typing_Accuracy);
	gotoxy(60,15);
	printf("%d",Typist);

	while(1)
	{
		gotoxy(13,6);
		input = getch();
		if(input == 13)
			break;
	}
}


int Game_Main()
{
	Beep(MI, 70);
	Beep(DO, 100);
	int input;
	int x, y;
	x = 31;
	y = 14;
	system("cls");

	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛    2. 曹 旋 翱蝗       弛 "); BLUE;
	printf("   3. 顫濠 翱蝗 啪歜   "); WHITE;
	printf("弛     4. �秣� 撲薑       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式戎                        戌式式式式式式式式式式式式式式式式式式式式式式式式扣\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                      忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖                      弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                           罹萄葷 瞼晦 啪歜                                        弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                      戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎                      弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("enter 殮溘 衛 衛濛腌棲棻. 詭景 檜翕擎 tap酈蒂 檜辨п 輿撮蹂.");


	gotoxy(x, y);
	while (1)
	{
		input = getch();
		if (input == 9)
			return 0;
		else if (input == 13)
			return 1;


	}
}
int Environment(FILE* Info_practice)
{
	int input;
	int x = 48,y = 23;
	char typist[10],typing_acc[10];
	int i;
	system("cls");
	Beep(MI, 70);
	Beep(DO, 100);
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛      2. 曹 旋 翱蝗     弛    3. 顫濠 翱蝗 啪歜   弛    "); BLUE;
	printf(" 4. �秣� 撲薑"); WHITE_S;
	printf("       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式戎                        弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛			     忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖                                   弛\n");     
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛   晦煙                            弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                    樹橫           弛                                   弛\n");
	printf(" 弛			     弛                  1. и旋          弛                                   弛\n");
	printf(" 弛			     弛                  2. 艙橫          弛                                   弛\n");
	printf(" 弛			     弛                  3. Щ煎斜極 樹橫 弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     弛                                   弛                                   弛\n");
	printf(" 弛			     戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎                                   弛\n");
	printf(" 弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(5, 36);
	printf("餌辨ж褒 樹橫蒂 堅腦堅 enter擊 揚楝 輿撮蹂.");
	rewind(Info_practice);
	for(i = 0 ; !feof(Info_practice) ; i++)
	{
		fscanf(Info_practice,"%s %s",typing_acc,typist);
		if(feof(Info_practice))
			break;
		gotoxy(30,17+i);
		printf("   薑�挾� : %s\t顫濠晦煙 : %s",typing_acc,typist);
	}
	gotoxy(x,y);
	while(1)
	{
		input = getch();
		if(input == 13)
			return y-22;
		if(input == 224)
			input = getch();
			switch(input)
			{
			case 72:
				if(y == 23)
					y = 25;
				else
					y--;
				gotoxy(x,y);
				break;
			case 80:
				if(y == 25)
					y = 23;
				else
					y++;
				gotoxy(x,y);
				break;
			}
	}
	
}
int Environment_Main()
{
	Beep(MI, 70);
	Beep(DO, 100);
	char input;
	
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 弛     1. 穠擎 旋 翱蝗    弛      2. 曹 旋 翱蝗     弛    3. 顫濠 翱蝗 啪歜   弛    "); BLUE;
	printf(" 4. �秣� 撲薑"); WHITE_S;
	printf("       弛\n");
	printf(" 弛                        弛                        弛                        弛                        弛\n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式式式式式式式式式戎                        弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("弛                                                                                                   弛\n ");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n ");
	gotoxy(10, 8);
	printf("顫濠翱蝗 樹橫蒂 撲薑ж朝 璽殮棲棻.");
	gotoxy(10, 10);
	printf("и旋 顫濠 翱蝗, 艙僥 顫濠 翱蝗, 囀註 顫濠 翱蝗醞 и陛雖蒂 摹鷗й 熱 氈蝗棲棻.\n");
	gotoxy(10, 12);
	printf("傳и 顫濠, 薑�挾� 晦煙擊 獐 熱 氈蝗棲棻.\n");
	gotoxy(5, 36);
	printf("enter 殮溘 衛 衛濛腌棲棻. 詭景 檜翕擎 tap酈蒂 檜辨п 輿撮蹂.");
	while(1)
	{
		gotoxy(34,8);
		input = getch();
		if(input == 9)
			return 0;
		else if(input == 13)
			return 1;
		else if(input == 27)
			return -1;
	}

}