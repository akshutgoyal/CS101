#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);

    int sum=a+b;
    int avg=sum/2;

    printf("Sum is: %d\n",sum);
    printf("Average is: %d",avg);
}