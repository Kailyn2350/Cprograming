//연습문제1
#include <stdio.h>

struct point{
	int number;
	char blood[5];
	double sight;
	int weight;
};

int main(void){
	struct point stu[5];
	int i=0;
	
	for(i=0; i<5; i++){
		printf("학번 혈액형 시력 몸무게 순으로 입력하세요 : ");
		scanf("%d %s %lf %d", &stu[i].number, stu[i].blood, &stu[i].sight, &stu[i].weight);
	}
	printf("\n");
	
	printf("학생 정보를 출력 중입니다....\n");
	
	for(i=0; i<5; i++){
		printf("%d %s %.1f %d\n",stu[i].number, stu[i].blood, stu[i].sight, stu[i].weight);
		printf("\n");
	}
	
	return 0;
}