#include<stdio.h>
int main()
{
    char month[][12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int i;
    printf("Enter month number (1-12): ");
    scanf("%d", &i);
    if (i >= 1 && i <= 12) {
        printf("The month is: %s\n", month[i - 1]);
    } else {
        printf("Invalid month number.\n");
    }
}