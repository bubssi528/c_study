//2018-11-15 Á¶Çöµ¿

#include <stdio.h>
int main(void) {
	struct {
		int member ;
		int number ;
	}point;

	struct point p1;
	p1.member = 3;
	printf("%d", p1.member);

	return 0;
	
}