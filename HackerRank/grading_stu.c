#include<stdio.h>
int nextMultiple(int a)
{
    int b;
    while(a>0)
    {
        if(a%5==0)
        {
        b=a;
        break;
        }
        else a++;
    }
    return b;
}
int main()
{
    int m,n;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&m);
        if(m>=38)
        {
            if((nextMultiple(m)-m)<3)
                m=nextMultiple(m);
        }
        printf("%d\n",m);
        n--;
    }
    return 0;
}
