#include<stdio.h>
int main()
{
    int arr[100000];
    int n,i;
    int max;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        count++;
    }
    printf("%d",count);

}
