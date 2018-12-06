//2018-11-15 조현동 포인터를 대상으로 덧셈연산을 하여 배열에 접근해 2증가시키는 프로그램

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