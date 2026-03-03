#include<stdio.h>
#include <stdlib.h>
void test(int number[] , int size);

int main()
{
    printf("请输入要输入的数字个数：");
    int n; 
    scanf("%d",&n);               //用户自定义检验数字范围
    int number[(n-1)];           //自定义长度的数组，第一个为已知的素数
    for ( int i = 2 ; i <= n ; i++)
    {
        number[i-2] = i;         //将2到n-1的数存入数组
    }
 //至此完全定义数组

    for ( int i = 0 ; i < (n-1) ; i++)  //开始遍历数组元素       
     {
            if (number[i] != 0 )   //判断利用的元素是否为0，以加快运行速度          
              {
                for ( int j = 2 ; j * number[i] <= n ; j++)  //开始输出当前素数的倍数
                {
                    int  FailedNumber = number[i] * j;//依次计算当前素数倍数        
                             for ( int k = i ; k < (n-1) ; k++)
                             {
                                if ( number[k] == FailedNumber)
                                {
                                    number[k] = 0;
                                    break;
                                }
                             }
                }
            }
        }
 //至此完全处理数组表
 test( number , (n-1) );
 printf("\n");

 int times = 1;
 for ( int i = 0 ; i < (n-1) ; i++)
    {
        if (number[i] != 0)
        {
            if ( times % 5 != 0 )
            {
                printf("%d\t" , number[i]);
                times++;
            }
            else 
            {
                printf("%d\n" , number[i]);
                times++;
            }
        }
    }                                    //输出结果

            
return 0;
}


void test( int number[] , int size )
{
        for ( int i = 0 ; i < size ; i++)
            {
                printf("%d ", number[i]);
                
            }
}
