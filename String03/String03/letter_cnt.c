#include <stdio.h>
#include <string.h>
int main() {
	int asci[128] = { 0, };
	char str[100];
    
	printf("�Է� ���ڿ�:");
	scanf("%s", str);
    
	for (int i = 0; i<strlen(str); i++) {
		asci[str[i]]++;
	}
	
	for (int i = 0; i<strlen(str); i++) {
		if (asci[str[i]] == 0)
			continue;
		else {
			printf("%c�� %d�� ������\n", str[i], asci[str[i]]);
			asci[str[i]] = 0;
		}
	}
	return 0;
}