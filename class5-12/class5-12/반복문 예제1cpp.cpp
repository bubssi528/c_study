/*2018-10-04조현동
마일을 미터로 변환하는 프로그램*/

#include <stdio.h>
int main(void) {
	int i = 0;
	int meter;

	while (i < 3)
	{
		meter = i * 1609;
		printf("%d 마이은 %d미터입니다.\n",i, meter);
		i++;

	}
	return 0;
}