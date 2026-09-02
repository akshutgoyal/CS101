#include <stdio.h>
int main(){
    int principal;
    int rate;
    int time;

    printf("Enter principle amount (in Rs):");
    scanf("%d",&principal);
    printf("Enter percentage of interest:");
    scanf("%d",&rate);
    printf("Enter time period (in years):");
    scanf("%d",&time);
    
    float si=principal*rate*time/100;
    printf("Simple interest is %.2fRs",si);
}