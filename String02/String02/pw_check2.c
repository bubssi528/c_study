#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char pass[] = "1234";
	char answer[100];
	int buffer = 0;
	int i = 0;
	printf("비밀번호를 입력하시오 : ");
	while (1) {
		answer[i] = getch();
		if (answer[i] == '\0') {
			i--;
			continue;
		}
		putch('*');
		if (answer[i] == '\n')
			break;
	}
	answer[i - 1] = NULL;
	if (strcmp(pass, answer) == 0)
		printf("\n비밀번호 일치\n");
	else
		printf("\n비밀번호 불일치\n");
	return 0;
}