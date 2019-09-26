#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{

	int x, y;
	int cond1, cond2, cond3, cond4, cond5;
	
	printf("input two integrars ");
	scanf("%d %d", &x, &y);
	
	printf("+ result is %d\n", x+y);
	printf("- result is %d\n", x-y);
	printf("* result is %d\n", x*y);
	printf("/ result is %d\n", x/y);
	printf("%% result is %d\n", x%y);

}


