#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int k = 0;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32 && str[i+1] == 32) {
			k = i;
			while (str[k + 1] != NULL) {
				str[k] = str[k + 1];
				k++;
			}
			str[k] = NULL;
			i--;
		}
	}
	printf("������ ���ŵ� �ؽ�Ʈ: %s", str);
	return 0;
}