/*2018-10-11 조현동
3의 거듭제곱을 계산하는 함수를 이용한 프로그램*/
#include <stdio.h>

void Ipower(int n, int k);

int main(void) {
	for (int a = 0; a < 6; a++) {
		Ipower(3,a);
	}
}

void Ipower(int n, int k) {
	int factor=1;
	for (int i = 1; i <= k; i++) {
		factor = factor * 3;
	}
	printf("%d\n", factor);
	
}