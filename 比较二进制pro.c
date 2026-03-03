#include<stdio.h>

int main(){
    int num_1 = 0 , num_2 = 0;
    printf("input the first number:");
    scanf("%d" , & num_1 );
    printf("input the second number:");
    scanf("%d" , & num_2);
    int Num = num_1 ^ num_2;                  //按位异或取得相同位数不同的特征
    int n = 0;
    while(Num){
        Num = Num & ( Num - 1 );              //-1与计算1的个数
        n++;
    }
    printf("二进制有%d位不同",n);
    return 0;
}