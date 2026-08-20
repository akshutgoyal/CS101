#include <stdio.h>
int main(){
    int p;
    int r;
    int t;

    printf("Enter principle amount (in Rs):");
    scanf("%d",&p);
    printf("Enter percentage of interest:");
    scanf("%d",&r);
    printf("Enter time period (in years):");
    scanf("%d",&t);
    
    int simp=p*r*t/100;
    printf("Simple interest is %dRs",simp);
}