#include<stdio.h>
int main(){
    int num = 0;
    printf("input a number:");
    scanf("%d",&num);
    int n = 10;
    int result = 0;
    while (num > 0){
        result = result * 10 + num % n;
        n *= 10;
        num /= 10;
    }
printf("the result is%d",result);
}