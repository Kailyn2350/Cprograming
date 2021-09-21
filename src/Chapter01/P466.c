#include <stdio.h>

int move(int* p1);

int main(void){
	int array[8]={10, 12, 14, 16, 18, 20, 22, 24};
	for(int i=0; i<8; i++)
		printf("%d ", array[i]);
	printf("\n");
	move(array);
	for(int i=0; i<8; i++)
		printf("%d ", array[i]);
	return 0;
}

int move(int* p1){
	int temp1 = *(p1+7);
	int temp2, i;
	for(i=0; i<8; i++){
		temp2 = *(p1+i);
		*(p1+i) = temp1;
		temp1 = temp2;
	}
	
}