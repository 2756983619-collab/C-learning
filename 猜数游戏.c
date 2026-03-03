#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int num = rand() %100 + 1;
    int guess = 0;
    int n = 0;
    do{ 
        printf("guess a number:");
        scanf("%d", &guess);       
        n++;
        if (guess > num){
            printf("too high\n");
        }
        else if (guess < num){
            printf("too low\n");            
        }
    }while(num != guess);
    printf("u 2 correct, u took %d attempts\n", n);
    return 0;
}