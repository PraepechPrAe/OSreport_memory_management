#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int *mal;
int a=0;
int i=1;

int incresing(int n)
{
    int d = 10;
    mal = (int *)malloc(sizeof(int));
    if(n==INFINITY)
        return 1;
    printf("%p %p\n", &d, mal);
    return incresing(n+i);
}

int main()
{
    incresing(a);
}