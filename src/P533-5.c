#include <stdio.h>

struct point{
	int x;
	int y;
};

int main(void){
	struct point array[2] ={1, 1, 2, 2};
	struct point* p = NULL;
	
	p=array;
	printf("%d %d \n",array[0].x, array[0].y); //0번 배열의 시작 주소.x or y로 입력하면 됨
	printf("%d %d \n",array[1].x, array[1].y);
	
	printf("%d %d \n",p[0].x, p[0].y);
	printf("%d %d \n",p[1].x, p[1].y);
	
	printf("%d %d \n", p->x, p->y); //p->x = (*p).x = (*array).x == 1
	printf("%d %d \n", (p+1)->x, (p+1)->y);
}
//구조체 변수로 배열 사용하는거는 printf할때 구조체 배열주소.구조체 변수 하면 된다.