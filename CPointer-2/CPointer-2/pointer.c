//2018-11-15 ������ �����͸� ������� ���������� �Ͽ� �迭�� ������ 2������Ű�� ���α׷�

#include <stdio.h>
int main(void) {
	int arr[7] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];

	for (int i = 0; i < 6; i++) {
		*(ptr1 + i) += 2;

	}
	printf("%d", arr[3]);
	return 0;
}