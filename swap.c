#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int t = *a; *a = *b; *b = t;
}

void swap2(int *a, int *b)
{
	*a = *a - *b; //兩數相差
	*b = *a + *b; //相加得出*b
	*a = *b - *a; //相減得出*a
}

static inline void swap_s(char *a, char *b)
{
    *a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

char *reverse(char *s)
{
    if((*s == '\0') || *(s + 1) == '\0')
        return NULL;

    reverse(s + 1);

    swap_s(s, (s + 1));

    if (reverse(s+2) != '\0')
        reverse(s+2);

    reverse(s+1);
}

void main(void)
{
	int a=2;
	int b=4;

	printf("a=%d , b=%d \n", a, b);
	swap(&a, &b);
	printf("swap a=%d , b=%d \n", a, b);
	swap2(&a, &b);
	printf("swap2 a=%d , b=%d \n", a, b);

	char str[]="abcdef";
	printf("string is: %s \n", str);
	reverse(str);
	printf("reverse string is: %s \n", str);

}
