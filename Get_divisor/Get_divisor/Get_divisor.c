/*2018-10-18 ������
 �־��� ������ ����� ��� ã�Ƴ��� ���α׷�*/
void Get_divisor(int num);

#include <stdio.h>
int main(void) {
	printf("8�� ���=");
	Get_divisor(8);
}
void Get_divisor(int num) {
	for (int a = 1; a <= num; a++) {
		if (num%a == 0) {
			printf(" %d", a);
		}
	}
	return;
}