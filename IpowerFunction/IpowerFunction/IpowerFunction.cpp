/*2018-10-11 ������
3�� �ŵ������� ����ϴ� �Լ��� �̿��� ���α׷�*/
#include <stdio.h>

void Ipower(int n, int k);

int main(void) {
	for (int a = 0; a < 6; a++) {
		Ipower(3,a);
	}
}

void Ipower(int n, int k) {
	int factor=1;
	for (int i = 1; i <= k; i++) {
		factor = factor * 3;
	}
	printf("%d\n", factor);
	
}