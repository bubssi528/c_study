/*2018-10-11 조현동
피보나치 수열을 우너하는 수까지 출력하는 프로그램*/


#include <stdio.h>
int Read(void);
void fibo(int num);
int main(void) {
	int num;
	printf("피보나피 수:");
	num = Read();
	fibo(num);
}
int Read(void) {
	int num;
	scanf("%d", &num);
	return num;
}
void fibo(int num) {
	int i = 0, a = 0, b = 1, c = 1;
	for (i = 0; i < num; i++) {
		printf("%d", a);
		a = b;
		b = c;
		c = a + b;
	}
}