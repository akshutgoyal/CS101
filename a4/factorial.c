#include <stdio.h>
int factorial(int);
int main(){
    int num;
    printf("Enter number to calculate the factorial: ");
    scanf("%d",&num);
    if(num<0) printf("Factorial of negative numbers cant be determined");
    else printf("The factorial of %d is %d",num,factorial(num));
}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}