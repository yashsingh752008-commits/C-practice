#include <stdio.h>
int power(int a,int b)
{
    if (b==0)
    return 1;
    else
    return a*power(a,b-1);
}
void main()
{
    int ans;
    ans=power(5,3);
    printf("%d",ans);
}