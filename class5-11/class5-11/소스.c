/*2018-10-04������
����2 ��ƮƮ��*/

#include <stdio.h>
int main(void) {
	int x=0, y=0;

	while (x < 5) 
	{
		while (y < x)
		{
			printf("o");
			y++;
		}
		y = 0;
		printf("* \n");
		x++;
	}

	
}