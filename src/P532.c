//연습문제1
#include <stdio.h>

struct point{
	int number;
	char blood;
	double sight;
	int weight;
};

int main(void){
	struct point p = {14537, 'B', 1.5, 72};
	
	printf("%d %c %.1f %d \n", p.number, p.blood, p.sight, p.weight);
	
	return 0;
}