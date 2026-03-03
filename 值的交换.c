#include<stdio.h>

int swap(int a, int b){
    int t = 0;
    t = a;
    a = b;
    b = t;
    return a = b , b = t;
}

int main(){
    int a = 1, b = 2;
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}