/*2018-10-11 조현동
세개의 인자를 전달받아서 가장큰수와 가장 작은수를  반환하는 프로그램*/

int Read(void);
int Big(int num1, int num2);
int Small(int num1, int num2);

#include <stdio.h>
int main(void) {
	int num1, num2, num3;
	int max, min;
	printf("세개의 정수를 입력하세요:");
	num1 = Read();
	num2 = Read();
	num3 = Read();
	max = Big(num1, num2);
	min = Small(num1, num2);
	max = Big(max, num3);
	min = Small(min, num3);
	printf("가장 큰수는:%d이고 가장 작은 수는:%d입니다.", max, min);
	return 0;
}

int Read(void) {
	int num;
	scanf("%d", &num);
	return num;
}

int Big(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int Small(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}