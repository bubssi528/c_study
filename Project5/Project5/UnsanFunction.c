#include <stdio.h>
int Unsan(int x, int y, int sign);
int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
int main(void) {
	int num1=0, num2=0, result=0;
	char sign;
	for (;;) {
		printf("연산을 입력하시오(종료는 Ctrl+c):");
		scanf(" %d%c%d", &num1, &sign, &num2);
		switch (sign) {
		case '+': result=Unsan(num1, num2,1);
			printf("덧셈은 총%d번 호출되었습니다.\n", cnt1);
			printf("연산 결과:%d\n", result);
			break;
		case '-': result=Unsan(num1, num2, 2);
			printf("뺄셈은 총%d번 호출되었습니다.\n", cnt2);
			printf("연산 결과:%d\n", result);
			break;
		case '/': result=Unsan(num1, num2, 3);
			printf("나눗셈은 총%d번 호출되었습니다.\n", cnt3);
			printf("연산 결과:%d\n", result);
			break;
		case '*': result=Unsan(num1, num2, 4);
			printf("곱셈은 총%d번 호출되었습니다.\n", cnt4);
			printf("연산 결과:%d\n", result);
			break;
		}
		
	}
	return 0;
}
int Unsan(int x, int y, int sign) {
	int result;
	switch (sign) {
	case 1: result = x + y;
		cnt1 += 1;
		break;
	case 2: result = x - y;
		cnt2 += 1;
		break;
	case 3: result = x / y;
		cnt3 += 1;
		break;
	case 4: result = x * y;
		cnt4 += 1;
		break;
	}
	return result;