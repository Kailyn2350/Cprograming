#include <stdio.h>

struct student{
	char name[20]; // 문자열은 배열이기 때문에 배열 크기를 꼭 지정해줘야됨 안그러면 세그멘테이션 오류 뜸!
	int score;
	struct student* left_link;
	struct student* right_link;
};

int main(void){
	struct student stu3 = {"Goo", 60, NULL, NULL};
	struct student stu2 = {"Lee", 80, NULL, NULL};
	struct student stu1 = {"KIM", 90, &stu2, &stu3};
	
	printf("%s %d \n", stu1.name, stu1.score);
	printf("%s %d \n", (*stu1.left_link).name, stu1.left_link->score);
	
	return 0;
}