#include<stdio.h>
int main()
{
    int a[5]= {2,5,7,8,9};
    int i;
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
