#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char pass[] = "1234";
	char answer[100];
	int buffer = 0;
	int i = 0;
	printf("��й�ȣ�� �Է��Ͻÿ� : ");
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
		printf("\n��й�ȣ ��ġ\n");
	else
		printf("\n��й�ȣ ����ġ\n");
	return 0;
}