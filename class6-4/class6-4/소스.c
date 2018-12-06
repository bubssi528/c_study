/*2018-10-04조현동
반복 구조를 이용하여 1부터 1000까지의 합을 구하는 코드*/

#include <stdio.h>
int main(void) {
	int i, sum;

	i = 1;
	sum = 0;
	while (i <= 1000)
	{
		sum += i;
		i++;
	}
	printf("합은 %d입니다.\n", sum);
	return 0;
}