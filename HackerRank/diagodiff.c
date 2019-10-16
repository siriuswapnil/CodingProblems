#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int arr[1000][1000];
    int i,j;
    int lsum=0,rsum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                lsum+=arr[i][j];
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
             rsum+=arr[i][j];
        }
    }
    printf("%d",abs(lsum-rsum));
    return 0;
}

