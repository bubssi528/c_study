/*2018-10-09 조현동
이차방정식의 실근을 구하는 코드*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double conclude, result, sil1, sil2;

	printf("계수 a를 입력해수세요: ");
	scanf("%d", &a);
	printf("계수 b를 입력해수세요: ");
	scanf("%d", &b);
	printf("계수 c를 입력해수세요: ");
	scanf("%d", &c);

	conclude = b * b - 4 * a*c;
	result = sqrt(conclude);
	printf("판별식의 값:%lf", result);
	if (result < 0)
		printf("실근이 존재하지 않습니다.");

	else
	{
		sil1 = (-1 * b + result) / (2 * a);
		sil2 = (-1 * b - result) / (2 * a);
		printf("위의 이차방정식의 실근은 %lf과 %lf입니다.", sil1, sil2);

	}

	return 0;
}