#include<stdio.h>
void process(int num , char* P_Arr);
void print(char* P_Arr);

int main(){
    int num = 0;
    printf("input a number(lower than 9999):");
    scanf("%d" , & num);
    char Arr[32] = {'0'};
    process(num , Arr);
    print(Arr);
    return 0;
}



void process(int num , char* P_Arr){
    for ( int i = 0 ; i < 32 ; i++ ){
        if ( num >> i & 1 == 1){
            P_Arr[i] = '1';
        }
        else{
            P_Arr[i] = '0';
        }
    }
}

void print(char* P_Arr){
    for(int i = 31 ; i >= 0 ; i-=2){
        printf("%c" , P_Arr[i]);
    }
}