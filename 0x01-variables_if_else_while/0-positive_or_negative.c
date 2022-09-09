#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return : Always 1(succes(
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	
	if(n > 0)
	{
		printf("%d is postive",n);
	}else if(n == 0){
		printf("%d is zero\n",n);
	}else if(n < 0)
	{
		printf("%d is zero\n",n);
	}
	return (0);
}
