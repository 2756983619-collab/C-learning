#include<stdio.h>
struct PEO_INFOR
{
    char name[20];
    char tele[12];
    int age;    // 修改为单个整数类型
};

int main()
{
    struct PEO_INFOR peo1;
    printf("请一次输入姓名、电话、年龄：");
    // 修复 scanf 的格式化字符串，并添加长度限制
    scanf("%19s %11s %d", peo1.name, peo1.tele, &peo1.age);

    struct PEO_INFOR* PEO1 = &peo1;
    printf("请核对信息：\n");
    // 修复 printf 的格式化字符串
    printf("姓名：%s  电话：%s  年龄：%d\n", PEO1->name, peo1.tele, peo1.age);

    return 0;
}