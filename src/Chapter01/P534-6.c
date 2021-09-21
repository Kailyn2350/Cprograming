#include <stdio.h>

struct point{
	char num[10]; //문자열 배열이여서 배열 크기를 지정해줘야 할 것 같음.
	char name[20];
	double total;
};

int main(void){
	struct point stu ={"20101323", "Park", 160};
	struct point* p = NULL;
	struct point** pp = NULL;
	
	p=&stu;
	pp=&p;

	
	printf("%s %s %lf \n", (**pp).num, (**pp).name, (**pp).total);// **pp = **&p = **&&stu = stu
	
	return 0;
}