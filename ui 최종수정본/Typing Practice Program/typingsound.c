#include"typingsound.h"


#define TypingSound "D:\\비빔피피티\\bibim.github\\타이핑자막\\타이핑자막.wav"

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

