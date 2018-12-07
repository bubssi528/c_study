#include <stdio.h>
#include <string.h>
int main() {
	int asci[128] = { 0, };
	char str[100];
    
	printf("입력 문자열:");
	scanf("%s", str);
    
	for (int i = 0; i<strlen(str); i++) {
		asci[str[i]]++;
	}
	
	for (int i = 0; i<strlen(str); i++) {
		if (asci[str[i]] == 0)
			continue;
		else {
			printf("%c가 %d번 등장함\n", str[i], asci[str[i]]);
			asci[str[i]] = 0;
		}
	}
	return 0;
}