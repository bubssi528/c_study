#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char pass[] = "1234";
	char answer[5];
	int i = 0;

	printf("비밀번호를 입력하시오 : ");
	for (;;) {
		answer[i] = getch();
		if (answer[i] == 13)
			break;
		if (answer[i] == NULL) {
			i--;
			continue;
		}
		putch('*');
		i++;
	}
	answer[i] = NULL;

	if (strcmp(pass, answer) == 0)
		printf("\n비밀번호 일치\n");
	else
		printf("\n비밀번호 불일치\n");
	return 0;
}

