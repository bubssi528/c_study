/* 사용자가 입력한 온도르 판단하여 영상인지 영하인지 확인해주는 프로그램*/

#include <stdio.h>
int main(void) {
	int temperature;

	printf("온도를 입력하세요:");
	scanf("%d", &temperature);

	if (temprature > 0) {  //temprature가 영상인지 확인
		printf("영상의 날씨입니다.\n");

	else                   //temperature가 0이하이면 아래 문장을 실행
		printf("영하의 날씨입니다.\n");

	printf("현재의 온도는 %d도입니다.\n", temperature); //항상 실행
	return 0;

	}
	
	
}