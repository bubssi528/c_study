#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int cnt = 0;
	int j = 0;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	for (int i = 0; i < strlen(str); i++){
		if (str[i] == 32) {
			j = i;
			while (str[j] != NULL) {
				str[j] = str[j + 1];
				j++;		
			}
			i--;
		}
	}
	printf("������ ������ ������ ���ڿ�:%s", str);
	return 0;
}