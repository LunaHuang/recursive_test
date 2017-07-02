#include <stdio.h>
#include <stdlib.h>


int p(int i, int N)
{
    return (i < N && printf("%d\n", i) && !p(i + 1, N)) \
           || printf("%d\n", i);
}

/*
 * factorial 5! = 5X4X3X2X1
 *
 */
int factorial(int N)
{
	if(N == 0)
		return 1;
	else
		return (N*factorial(N-1));
}

/*
 * fibonacci : F_n = F_n-1 + F_n-2; F_0=0, F1=1
 * |F0|F1|F2|F3|F4|F5|F6|F7|F8|F9|F10|F11|F12|F13|
 * |0 |1 |1 |2 |3 |5 |8 |13|21|34|55 |89 |144|233|
 *
 */
int fibonacci(int N)
{
	if(N== 0)
		return 0;
	else if(N == 1)
		return 1;
	else
		return(fibonacci(N-2)+fibonacci(N-1));

}

void main(void)
{
	p(0, 5);
	printf("5! = %d \n", factorial(5));
	printf("fibonacci 10 = %d \n", fibonacci(10));
}
