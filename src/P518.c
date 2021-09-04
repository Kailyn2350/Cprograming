#include <stdio.h>

struct point{
	int x;
	int y;
};

void function (struct point call);

int main(void){
	struct point p = {10, 20};
	function(p); //구조체 변수 P를 통해 function(struct call)함수를 호출함
	
	return 0;
}

void function (struct point call){ //구조체 변수 call 에 구조체 변수 P 가 복사가 됨.
	printf("%d %d \n", call.x, call.y); //구조체 변수 p가 구조체 변수 call에 복사가 됐기 때문에 p의 값이 나옴
}