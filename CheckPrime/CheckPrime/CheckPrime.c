/*2018-10-11 조현동
주어진 정수가 소수인지 확인하는 프로그램*/


#include <stdio.h>
void Prime(int num);

int main(void) {
	for (int a = 2; a <= 100; a++) {
		Prime(a);
	}
}
void Prime(int num) {
	int cnt = 0;
	for (int i = 2; i < num; i++) {
		if (num >= 3) {
			if (num%i == 0)
				cnt += 1;
		}
	}
	if (cnt== 0)
		printf(" %d", num);
}
