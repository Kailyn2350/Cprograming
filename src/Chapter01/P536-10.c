#include <stdio.h>
struct point{
	int x;
	int y;
};

void func1 (struct point call);
void func2 (struct point* call);

int main(void){
	struct point p1 = {10, 10};
	struct point p2 = {20, 20};
	
	func1 (p1);
	func2 (&p2);
	
	return 0;
}

void func1 (struct point call){
	printf("%d %d \n", call.x, call.y);
}

void func2 (struct point* call){
	printf("%d %d \n", (*call).x, call->y);	
}
	