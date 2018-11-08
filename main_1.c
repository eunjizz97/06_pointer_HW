#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	int sum = 0;
	float avg;
	int *ptr = grade;
	
	for(i=0; i<5; i++){
		printf("input value (%d) : ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0; i<5; i++){
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	for(i=0; i<5; i++){
		sum += *(ptr+i);
	}
	
	avg = (float)(sum/5);
	
	printf("\n average : %f\n", avg);
	
	return 0;
}
