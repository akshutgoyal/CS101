#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter Number 1:");
    scanf("%d",&num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);

    int sum=num1+num2;
    float avg=sum/2;

    printf("Sum is: %d\n",sum);
    printf("Average is: %.2f",avg);
}