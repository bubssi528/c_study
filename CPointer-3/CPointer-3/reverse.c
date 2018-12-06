//2018-11-15 조현동 배열에 저장된 모든 정수를 더하는 프로그램

#include <stdio.h>
int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = &arr[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *ptr;
		ptr--;
	}
	printf("%d", sum);
	return 0;
}
