//���α׷� ����ڷκ��� �� ���� x,y ��ǥ�� �Է¹޾Ƽ�, ������ �̷�� ���簢���� ���̸� ����ϴ� �ڵ�//

#include <stdio.h>

int main(void)
{
	int x1, x2, y1, y2 = 0;
	int high, garo, area = 0;

	printf("�»���� x,y�� ��ǥ:");
	scanf("%d %d", &x1,&y1);
 
	printf("���ϴ��� x,y�� ��ǥ:");
	scanf("%d %d", &x2, &y2);

	garo = x1 - x2;
	high = y1 - y2;

	area = garo * high;
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", area);

}

