/*2018-10-04조현동
팩토리얼 값 반복 계산 코드*/

#include <stdio.h>
int main(void) {
	int i = 5;
	long factorial = 1;

	while (i >= 1)
	{
		factorial *= i;
		i--;
	}
	printf("%d\n", factorial);
	return 0;
}