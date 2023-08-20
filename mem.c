#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int *mal;
int a=0;
int i=1;

int inc(int n)
{
    int d = 10;
    mal = (int *)malloc(sizeof(int));
    if(n==INFINITY)
        return 1;
    printf("&d=%p mal=%p &mal=%p &a=%p &i=%p\n", &d, mal,&mal, &a, &i);
    inc(n+i);
    free(mal);
    return 0;
}

int main()
{
    inc(a);
}