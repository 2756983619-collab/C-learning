#include<stdio.h>
int main()
{
    long *p1 = NULL;
    printf("%p\n", p1);
    printf("%p\n", &p1);
    printf("%d\n",sizeof(p1));
    return 0;
}