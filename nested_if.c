#include<stdio.h>
int main(){
    int n1;
    printf("enter any number :");
    scanf("%d", &n1);
    if(n1==1 || n1==2)
    {
        if(n1==1)
        printf("you will get placement");
        else
        printf("you will go to research");
    }
    else
    printf("you will open a thela of panipuri");
    return 0;
} 