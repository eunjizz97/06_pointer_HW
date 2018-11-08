#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10];
	int i;
	int minimum;
	int *ptr = a;
	
	printf("input 10 numbers : ");
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	
	minimum = a[0];
	i = 0;
	while(i<10)
	{
		if(minimum>*ptr){
			minimum = a[i];
		}
		
		ptr++;
		i++;
	}
	printf("minimum : %d", minimum);
	
	return 0;
}
