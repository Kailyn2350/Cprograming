#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char array[100];
	int count[26] = {0};
	
	printf("단어를 입력하세요 : ");
	gets(array);
	
	for (int i=0; i< strlen(array); i++){
		for (int j = 0; j<26; j++){
			if(toascii(array[i]) == 97+j || toascii(array[i]) == 65+j){
				count[j]++;
			}
		}
	}
	for (int i=0; i<26; i++){
		if(count[i] != 0)
			printf("%c : %d개\n", (97+i), count[i]);
	}
	
	return 0;
}
