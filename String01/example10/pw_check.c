#include <stdio.h>
#include <string.h>
int main() {
	char pw[100];
	int check[5] = { 0,0,0,0 };
	while (1) {
		printf("암호를 생성하시오:");
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
			printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요\n");
			check[4] = 0;
		}
		else {
			printf("적당한 암호입니다.");
			break;
		}
	}
	return 0;
}