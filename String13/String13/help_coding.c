#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	char dic[5][30] = { { "#include <Stdio.h>"},
					    {"int main()"         },
					    {"{"                  },
					    {"return 0;"          },
					    {  "}"                } };

	printf("������ �Է��ϼ���:");
	gets(str);

	printf("��ü ���α׷�\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", dic[i]);
		if (i == 2) {
			printf("\t");
			printf("%s\n", str);
			printf("\t");
		}
	}
	return 0;
}