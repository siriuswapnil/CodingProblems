#include<stdio.h>
#include<stdint.h>
int main()
{
    long long int arr[5];
    long long int sum[5];
    long long int min,max;
    int i,j;
    long long int sumt=0;
    for(i=0;i<5;i++)
    scanf("%lld",&arr[i]);
    for(i=0;i<5;i++)
    sumt=sumt+arr[i];
    for(i=0;i<5;i++)
    sum[i]=sumt-arr[i];
    max=sum[0];
    for(i=1;i<5;i++)
    {
        if(sum[i]>max)
        max=sum[i];
    }
    min=sum[0];
    for(i=1;i<5;i++)
    {
    if(sum[i]<min)
    min=sum[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
