#include <stdio.h>
int power(int,int);
int main(){
    int x,n,res;
    printf("Enter base and exponent:");
    scanf("%d %d", &x, &n);
    if(n==0){
        res=0;
    }else{
        res=power(x,n);
    }
    printf("%d^%d is %d", x,n,res);
}

int power(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x*power(x,n-1);
    }
}