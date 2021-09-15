#include <stdio.h>

struct point {
	int x;
	int y;
};

struct pint* function(void);

int main(void){
	struct point* p;
	p=function();
	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);
	
	return 0;
}

struct point* function(void){
	static struct point call = {10; 20};
	//static을 붙이는 이유는 여기는 12행의 p에 call 전체를 복사하는것이 아니고 call의 주소값만 복사해서 함수가 끝나면 10, 20넣은 값이 사라지기 때문에 call을 정적 변수로 선언 해야된다!
	return &call;
}