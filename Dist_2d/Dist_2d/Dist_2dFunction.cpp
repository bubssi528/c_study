/*2018-10-11 ������
�� �������� �Ÿ��� ����ϴ� �Լ��� �̿��� ���α׷�*/
#include <stdio.h>
#include <math.h>

double Dist_2d(int x1, int x2, int y1, int y2);
int main(void) {
	int x1, x2, y1, y2;
	double result;
	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x,y)");
	scanf("%d %d", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x,y)");
	scanf("%d %d", &x2, &y2);

	result = Dist_2d(x1, x2, y1, y2);
	printf("���� ������ �Ÿ��� %lf�Դϴ�.", result);
}
double Dist_2d(int x1, int x2, int y1, int y2) {
	int result;
	result = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return result;
}