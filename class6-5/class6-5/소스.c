/*2018-10-04조현동
 최대공약수를 구하는 코드*/

#include <stdio.h>
int main(void) {
	int x, y, r;
	int i = 0;

	printf("두개의 수를 넣어주세요 (큰수,작은수): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("공약수는 %d입니다", x);
	return 0;
}