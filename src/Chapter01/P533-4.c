#include <stdio.h>

struct point{
	int x;
	int y;
};

int main(void){
	struct point s1 = {10, 10};
	struct point* sp = NULL;
	
	sp = &s1;
	printf("%d %d \n", (*sp).x, (*sp).y);
	printf("%d %d \n", sp->x, sp->y);
	
	return 0;
}