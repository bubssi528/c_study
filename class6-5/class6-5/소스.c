/*2018-10-04������
 �ִ������� ���ϴ� �ڵ�*/

#include <stdio.h>
int main(void) {
	int x, y, r;
	int i = 0;

	printf("�ΰ��� ���� �־��ּ��� (ū��,������): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("������� %d�Դϴ�", x);
	return 0;
}