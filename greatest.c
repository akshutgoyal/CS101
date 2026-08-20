#include <stdio.h>
int main(){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;

    printf("Enter All numbers with spaces:");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);

    int greatest = num1;
    if(num2>greatest){
        greatest=num2;
    }if(num3>greatest){
        greatest=num3;
    }if(num4>greatest){
        greatest=num4;
    }if(num5>greatest){
        greatest=num5;
    }if(num6>greatest){
        greatest=num6;
    }if(num7>greatest){
        greatest=num7;
    }if(num8>greatest){
        greatest=num8;
    }if(num9>greatest){
        greatest=num9;
    }if(num10>greatest){
        greatest=num10;
    }

    printf("Greatest Number is:%d",greatest);
}