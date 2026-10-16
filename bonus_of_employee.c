#include<stdio.h>
int main(){
    int n1, n2;
    printf("enter joining year of employee :");
    scanf("%d", &n1);
    printf("enter current year :");
    scanf("%d", &n2);
    int working_years = n2 - n1;
    if(working_years >= 3)
    {
        printf("he will get 25 percent bonus");
    }
    else
    {
        printf("he will not get any bonus");
    }
        return 0;
}