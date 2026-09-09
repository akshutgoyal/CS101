#include <stdio.h>
int area(int,int,int);
int perimeter(int,int,int);
float circle(int,int);
int main(){
    int choice, pm1, pm2;
    printf("Calculate Area & Perimeter\n Enter 1 for Rectange\n Enter 2 for Square\n Enter 3 for Circle\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter length and breadth of rectangle:");
            scanf("%d %d", &pm1, &pm2);
            printf("Area & Perimeter of rectangle are %d, %d:",area(choice, pm1,pm2), perimeter(choice,pm1,pm2));
            break;
        case 2:
            printf("Enter side length of square:");
            scanf("%d",&pm1);
            printf("Area & Perimeter of square are %d, %d:",area(choice, pm1,0), perimeter(choice,pm1,0));
            break;
        case 3:
            printf("Enter radius of circle:");
            scanf("%d", &pm1);
            printf("Area & Perimeter of circle are %f, %f:",circle(1, pm1), circle(2, pm1));
            break;
        default:
            break;
    }
}

int area(int ch, int pm1, int pm2){
    if(ch==1){
        return pm1*pm2;
    }else if(ch==2){
        return pm1*pm1;
    }
}

int perimeter(int ch, int pm1, int pm2){
    if(ch==1){
        return (pm1+pm2)*2;
    }else if(ch==2){
        return pm1*4;
    }
    return 0;
}

float circle(int in, int rad){
    printf("%d\n",rad);
    if (in == 1) return 3.14*rad*rad;
    else if(in == 2) return 2*3.14*rad;
}