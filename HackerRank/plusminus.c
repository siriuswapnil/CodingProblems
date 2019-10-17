#include<stdio.h>
int main()
{
    int i,n;
    float pos=0,neg=0,z=0;
    float pf,nf,zf;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;

        else if(arr[i]==0)
            z++;
    }
    pf=pos/n;
    nf=neg/n;
    zf=z/n;
    printf("%0.6f\n%0.6f\n%0.6f",pf,nf,zf);
    return 0;
}
