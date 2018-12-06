/*2018-10-11 조현동
두 점사이의 거리를 계산하는 함수를 이용한 프로그램*/
#include <stdio.h>
#include <math.h>

double Dist_2d(int x1, int x2, int y1, int y2);
int main(void) {
	int x1, x2, y1, y2;
	double result;
	printf("첫번째 점의 좌표를 입력하시오:(x,y)");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오:(x,y)");
	scanf("%d %d", &x2, &y2);

	result = Dist_2d(x1, x2, y1, y2);
	printf("두점 사이의 거리는 %lf입니다.", result);
}
double Dist_2d(int x1, int x2, int y1, int y2) {
	int result;
	result = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return result;
}