// #include<stdio.h>
// int main(){
//     int m1,m2,m3,m4,m5;

//     printf("enter marks of 5 subjects :");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

//     int total = m1+m2+m3+m4+m5;
//     float percentage = (total/500.0)*100;

//     if(percentage>=60)
//     printf("you are passed with first division");

//     else if(percentage>=50)
//     printf("you are passed with second division");

//     else if(percentage>=40)
//     printf("you are passed with third division");

//     else
//     printf("you are failed");
//     return 0;
// }


#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;

    printf("enter marks of 5 subjects :");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    int total = m1+m2+m3+m4+m5;
    float percentage = (total/500.0)*100;
    if(percentage>=40)

    {
        if(percentage>=60)
           printf("you are passed with first division");

        else if(percentage>=50)
         printf("you are passed with second division");

        else
         printf("you are passed with third division");
    }

    else
    printf("you are failed");
    return 0;
}