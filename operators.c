#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers with space in between:");
    scanf("%d %d",&num1,&num2);

    printf("===Arithmetic Operators===\n");
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d %% %d = %d\n",num1,num2,num1%num2);
    
    printf("===Logical Operators===\n");
    printf("%d && %d = %d\n",num1,num2,num1&&num2);
    printf("%d || %d = %d\n",num1,num2,num1||num2);
    printf("!%d = %d\n",num1,!num1);
    printf("!%d = %d\n",num2,!num2);
    
    printf("===Bitwise Operators===\n");
    printf("%d & %d = %d\n",num1,num2,num1&num2);
    printf("%d | %d = %d\n",num1,num2,num1|num2);
    printf("%d ^ %d = %d\n",num1,num2,num1^num2);
    printf("~%d = %d\n",num1,~num1);
    printf("~%d = %d\n",num2,~num2);
    printf("%d<<1 = %d\n",num1,num1<<1);
    printf("%d<<1 = %d\n",num2,num2<<1);
    printf("%d>>1 = %d\n",num1,num1>>1);
    printf("%d>>1 = %d\n",num2,num2>>1);
    
}