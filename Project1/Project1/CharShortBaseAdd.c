//프로그램 사용자로부터 두 점의 x,y 좌표를 입력받아서, 두점이 이루는 직사각형의 넓이를 계산하는 코드//

#include <stdio.h>

int main(void)
{
	int x1, x2, y1, y2 = 0;
	int high, garo, area = 0;

	printf("좌상단의 x,y의 좌표:");
	scanf("%d %d", &x1,&y1);
 
	printf("우하단의 x,y의 좌표:");
	scanf("%d %d", &x2, &y2);

	garo = x1 - x2;
	high = y1 - y2;

	area = garo * high;
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);

}

