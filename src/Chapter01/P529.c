#include<stdio.h>

union point{
	int x;
	int y;
};

int main(void){
	union point p;
	p.x = 10;
	printf("%d %d \n", p.x, p.y);
	//4바이트 메모리 공간을 공유해서 사용해서 p.x에 값이 변경되면 p.y값도 변경된다.
	
	return 0;
}