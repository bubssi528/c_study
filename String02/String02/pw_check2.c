#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	char pass[] = "1234";
	char answer[5];
	int i = 0;

	printf("��й�ȣ�� �Է��Ͻÿ� : ");
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
		printf("\n��й�ȣ ��ġ\n");
	else
		printf("\n��й�ȣ ����ġ\n");
	return 0;
}

