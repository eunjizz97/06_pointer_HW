#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 365;
	int *ptr = &i;
	
	printf("i address : %d\n", &i);
	printf("i value : %d\n", i);
	
	printf("ptr adress : %d\n", ptr);
	printf("ptr value : %d\n", *ptr);
	
	return 0;
}
