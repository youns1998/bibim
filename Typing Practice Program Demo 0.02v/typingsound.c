#include"typingsound.h"


#define TypingSound "타이핑자막.wav"
#define TitleSound "사다리타기.wav"
#define PokeSound "포켓몬.wav"
#define TetSound "테트리스.wav"
void typingsound()
{
	PlaySound(TEXT(TypingSound), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	//사운드 파일 위치, SND_ASYNC, SND_LOOP 세가지가 제일 중요
	//SND_ASYNC : 재생하면서 다음코드 실행
	//SND_LOOP : 반복재생



}
void stopsound()
{
	PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

}

void titlesound()
{
	PlaySound(TEXT(TitleSound), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

}
void pokemonsound()
{
	PlaySound(TEXT(PokeSound), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	

}
void tetsound()
{
	PlaySound(TEXT(TetSound), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

}
