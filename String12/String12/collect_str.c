#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int k = 0;
	int size = 0;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);
	size = strlen(str);

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	if (str[size - 1] != 46) {
		str[size] = 46;
		str[size+ 1] = NULL;
	}
	printf("������ �ؽ�Ʈ:%s", str);
	return 0;
}