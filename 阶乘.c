#include<stdio.h>
int main(){
    int n = 0 ;
    printf("input a number:");
    scanf("%d",&n);
    int i = 1;
    int result = 1;
    for (i = 1; i <=n; i++){
        result *= i;
    }
    printf("the result is%d",result);
    return 0;
    }