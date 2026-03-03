#include<stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int n = 0;
    printf("请输入要比较的两个数字(不超过9999)：");
    scanf("%d %d", &num1, &num2);
    for (int i = 31 ; i >= 0 ; i--)
    {
        if ( ((num1 >> i) & 1) != ((num2 >> i) & 1))
        {
            n++;
            printf("%d\n",n);
        }
    }
    printf("他们的二进制有%d位不同\n",n);
    return 0;
}
    




   