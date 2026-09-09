#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int rev=0;
    while(num!=0){
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    printf("Reverse number is %d",rev);
    return 0;
}