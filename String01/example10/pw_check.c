#include <stdio.h>
#include <string.h>
int main() {
	char pw[100];
	int check[5] = { 0,0,0,0 };
	while (1) {
		printf("��ȣ�� �����Ͻÿ�:");
		gets(pw);

		for (int i = 0; i < strlen(pw); i++) {
			if (pw[i] >= 'A' && pw[i] <= 'Z')
				check[0]++;
			else if (pw[i] >= '0' && pw[i] <= '9')
				check[1]++;
			else if (pw[i] >= 'a' && pw[i] <= 'z')
				check[2]++;
		}
		for (int a = 0; a < 3; a++) {
			if (check[a] == 0) 
				check[4]++;
			check[a] = 0;
		}
		if (check[4] > 0) {
			printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��\n");
			check[4] = 0;
		}
		else {
			printf("������ ��ȣ�Դϴ�.");
			break;
		}
	}
	return 0;
}