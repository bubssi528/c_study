#include <stdio.h>
int main(void) {
	int year = 0;
	printf("������ �Է����ּ���:");
	scanf("%d", &year);

	if (year % 4 == 0) {
		printf("%d�� �����Դϴ�.", year);
	}
	else {
		printf("%d�� ������ �ƴմϴ�.", year);
	}
	return 0;

}