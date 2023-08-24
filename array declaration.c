#include<stdio.h>
int main()
{
    int a[5];//declaration with size
    int b[10] = {10,11,20,30,40};//initialization with size
    int c[] = {10,20,30};//initialization without size
    printf("%d\n",a[4]);//garbage value
    printf("%d\n",b[3]);
    printf("%d",c[1]);
    //changing element
    printf("%d\n",b[3]);
    b[3]=999;
    printf("%d\n",b[3]);
    //scaning
    int p,pos;
    scanf("%d",&p);
    scanf("%d",&pos);
    b[pos]=p;
     printf("%d\n",b[pos]);


}
