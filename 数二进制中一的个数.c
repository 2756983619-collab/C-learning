#include<stdio.h>

int Cout_Num(int* num)
{
    int n = 0;
    int i = *num;
    do{
        int YuShu = i % 2;
        i = i / 2;
        if (YuShu == 1 )
        {
            n++;
        }

    }while(i != 0);
    return n;
}

int main()
{
    int num = 0;
    printf("请输入要处理的数字：");
    scanf("%d",&num);
    int* p_num = &num;
    int n = Cout_Num( p_num );
    printf("这个数字的二进制中有%d个1", n );
    return 0;
}