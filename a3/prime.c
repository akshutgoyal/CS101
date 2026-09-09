#include <stdio.h>
int main(){
    int num;
    int isprime=1;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime==0){
        printf("Number is not prime");
    }else{
        printf("Number is prime");
    }
    return 0;
}