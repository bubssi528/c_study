#include <stdio.h>
int main(void) {
	int year = 0;
	printf("연도를 입력해주세요:");
	scanf("%d", &year);

	if (year % 4 == 0) {
		printf("%d는 윤년입니다.", year);
	}
	else {
		printf("%d는 윤년이 아닙니다.", year);
	}
	return 0;

}