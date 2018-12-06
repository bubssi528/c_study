/*2018-10-04 조현동  동전던지기 게임 프로그램을 실행할때마다 실제 동전을 던지는 것처럼 
                    앞면과 뒷면이 랜덤하게 나온다.*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int coin;
	coin = 0%2;
	
	if (coin == 0) {
		printf("앞면입니다.\n");
	}
	else
		printf("뒷면 입니다.\n");
	
    return 0;
}