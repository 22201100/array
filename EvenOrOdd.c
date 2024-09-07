#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the length of array = ");
    scanf("%d",&n);
    int arr[n],sum;
    printf("Enter the elements of array = ");
    for(i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (n%2==0)
    {
        printf("output is zero or Null");
    }
    else{
            for(i=0;i<n;i++)
        sum=sum+arr[i];
    printf("Sum of the elements of the array =%d",sum);
    }
    return 0;
}

