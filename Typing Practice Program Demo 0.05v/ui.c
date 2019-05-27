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
	printf("\n\n                                                     ¿£ÅÍÅ°¸¦ ´©¸£¸é ½ÃÀÛÇÕ´Ï´Ù."); WHITE;
	titlesound();
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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢    "); BLUE;
	printf(" 1. ÂªÀº ±Û ¿¬½À    "); WHITE;
	printf("¦¢     2. ±ä ±Û ¿¬½À      ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");	
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(10, 8);
	printf("Å¸ÀÚ ´É·ü Çâ»óÀ» À§ÇÑ ÂªÀº ±Û ¿¬½ÀÀ» ½ÃÀÛÇÕ´Ï´Ù.");
	gotoxy(10, 10);
	printf("ÇÑ±Û Å¸ÀÚ ¿¬½À, ¿µ¹® Å¸ÀÚ ¿¬½À, ÄÚµù Å¸ÀÚ ¿¬½ÀÁß ÇÑ°¡Áö¸¦ ¼±ÅÃÇÒ ¼ö ÀÖ½À´Ï´Ù.\n");
	gotoxy(5, 36);
	printf("enter ÀÔ·Â ½Ã ½ÃÀÛµË´Ï´Ù. ¸Þ´º ÀÌµ¿Àº tapÅ°¸¦ ÀÌ¿ëÇØ ÁÖ¼¼¿ä.");
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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢    "); BLUE;
	printf(" 1. ÂªÀº ±Û ¿¬½À    "); WHITE;
	printf("¦¢     2. ±ä ±Û ¿¬½À      ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n");
	printf(" ¦¢¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤¦¢\n");
	printf(" ¦¢¦¢ÃÖ°íÅ¸¼ö :                ÇöÀçÅ¸¼ö :                 Á¤È®µµ :                                    ¦¢¦¢\n");
	printf(" ¦¢¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤     ¦¢¦¢\n");
	printf(" ¦¢¦¢¦¢                                                                                          ¦¢     ¦¢¦¢\n");
	printf(" ¦¢¦¢¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥     ¦¢¦¢\n");
	printf(" ¦¢¦¢¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤     ¦¢¦¢\n");
	printf(" ¦¢¦¢¦¢                                                                                          ¦¢     ¦¢¦¢\n");
	printf(" ¦¢¦¢¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥     ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");;
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡-¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥¦¢\n"); 
	printf(" ¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("³¡³»½Ã·Á¸é esc¸¦ ÀÔ·ÂÇØ ÁÖ¼¼¿ä.\n");
	

	gotoxy(19,11);
	if(*Typist> *Highest_Typist)
		*Highest_Typist = *Typist;
	printf("%d",*Highest_Typist);//ÃÖ°íÅ¸¼ö
	gotoxy(45,11);
	printf("%d",*Typist);//ÇöÀç
	gotoxy(70,11);
	printf("%d",(int)*typing_Accuracy); //Á¤È®µµ

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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢    "); BLUE;
	printf("  2. ±ä ±Û ¿¬½À    "); WHITE_S;
	printf(" ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢               ±ä±Û ¸ñ·Ï                                                                           ¦¢\n");
	printf(" ¦¢¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¢                                    ¦¢                                                             ¦¢\n");
	printf(" ¦¢¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                                                             ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("¿¬½ÀÇÒ ±ÛÀ» ¼±ÅÃÇÏ°í enterÀ» ´­·¯ ÁÖ¼¼¿ä.\n");
	
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
			case 72:		//¸ÇÀ§Ä¿¼­¿¡¼­ À§ÂÊ ¹æÇâÅ°¸¦ ´­·¶À»°æ¿ì 
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
	typingsound();

	system("mode con cols=105 lines=40");
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢    "); BLUE;
	printf("  2. ±ä ±Û ¿¬½À    "); WHITE_S;
	printf(" ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¢                                                                                                 ¦¢¦¢\n");
	printf(" ¦¢¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("Á¾·áÇÏ½Ã·Á¸é esc¸¦ ÀÔ·ÂÇØ ÁÖ¼¼¿ä.");

	
	gotoxy(5,17);
	for(i = 0 ; i < sentence_Count ; i++)
	{
		gotoxy(x,y+(i*2));
		printf("%S",Long_sentence[i]);
	}
}
void Result_Long_prac(int typing_Accuracy,int Typist)
{
	pokemonsound();
	int input; 
	Beep(MI, 70);
	Beep(DO, 100);
	system("cls");
	system("mode con cols=105 lines=40");
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢    "); BLUE;
	printf("  2. ±ä ±Û ¿¬½À    "); WHITE_S;
	printf(" ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                       ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                      ¦¢\n ");
	printf("¦¢                       ¦¢                  ±ä ±Û Å¸ÀÚ ¿¬½À °á°ú              ¦¢                      ¦¢\n ");
	printf("¦¢                       ¦¢                                                    ¦¢                      ¦¢\n ");
	printf("¦¢                       ¦¢       Å¸ÀÚ ¼Óµµ :                                  ¦¢                      ¦¢\n ");
	printf("¦¢                       ¦¢                                                    ¦¢                      ¦¢\n ");
	printf("¦¢                       ¦¢       Å¸ÀÚ Á¤È®µµ :                                ¦¢                      ¦¢\n ");
	printf("¦¢                       ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                      ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("¸Þ´º·Î ³ª°¡½Ã·Á¸é enterÀ» ´­·¯ÁÖ¼¼¿ä.");

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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢    2. ±ä ±Û ¿¬½À       ¦¢ "); BLUE;
	printf("   3. Å¸ÀÚ ¿¬½À °ÔÀÓ   "); WHITE;
	printf("¦¢     4. È¯°æ ¼³Á¤       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                      ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                      ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                           ¿©µå¸§ Â¥±â °ÔÀÓ                                        ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                      ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                      ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("enter ÀÔ·Â ½Ã ½ÃÀÛµË´Ï´Ù. ¸Þ´º ÀÌµ¿Àº tapÅ°¸¦ ÀÌ¿ëÇØ ÁÖ¼¼¿ä.");


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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢      2. ±ä ±Û ¿¬½À     ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢    "); BLUE;
	printf(" 4. È¯°æ ¼³Á¤"); WHITE_S;
	printf("       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢			     ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                                   ¦¢\n");     
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢   ±â·Ï                            ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                    ¾ð¾î           ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                  1. ÇÑ±Û          ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                  2. ¿µ¾î          ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                  3. ÇÁ·Î±×·¥ ¾ð¾î ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¢                                   ¦¢                                   ¦¢\n");
	printf(" ¦¢			     ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                                   ¦¢\n");
	printf(" ¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(5, 36);
	printf("»ç¿ëÇÏ½Ç ¾ð¾î¸¦ °í¸£°í enterÀ» ´­·¯ ÁÖ¼¼¿ä.");
	rewind(Info_practice);
	for(i = 0 ; !feof(Info_practice) ; i++)
	{
		fscanf(Info_practice,"%s %s",typing_acc,typist);
		if(feof(Info_practice))
			break;
		gotoxy(30,17+i);
		printf("   Á¤È®µµ : %s\tÅ¸ÀÚ±â·Ï : %s",typing_acc,typist);
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
	printf(" ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦¢     1. ÂªÀº ±Û ¿¬½À    ¦¢      2. ±ä ±Û ¿¬½À     ¦¢    3. Å¸ÀÚ ¿¬½À °ÔÀÓ   ¦¢    "); BLUE;
	printf(" 4. È¯°æ ¼³Á¤"); WHITE_S;
	printf("       ¦¢\n");
	printf(" ¦¢                        ¦¢                        ¦¢                        ¦¢                        ¦¢\n");
	printf(" ¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                        ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¢                                                                                                   ¦¢\n ");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n ");
	gotoxy(10, 8);
	printf("Å¸ÀÚ¿¬½À ¾ð¾î¸¦ ¼³Á¤ÇÏ´Â Ã¢ÀÔ´Ï´Ù.");
	gotoxy(10, 10);
	printf("ÇÑ±Û Å¸ÀÚ ¿¬½À, ¿µ¹® Å¸ÀÚ ¿¬½À, ÄÚµù Å¸ÀÚ ¿¬½ÀÁß ÇÑ°¡Áö¸¦ ¼±ÅÃÇÒ ¼ö ÀÖ½À´Ï´Ù.\n");
	gotoxy(10, 12);
	printf("¶ÇÇÑ Å¸ÀÚ, Á¤È®µµ ±â·ÏÀ» º¼ ¼ö ÀÖ½À´Ï´Ù.\n");
	gotoxy(5, 36);
	printf("enter ÀÔ·Â ½Ã ½ÃÀÛµË´Ï´Ù. ¸Þ´º ÀÌµ¿Àº tapÅ°¸¦ ÀÌ¿ëÇØ ÁÖ¼¼¿ä.");
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