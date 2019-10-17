#include<stdio.h>
long int ca=0,co=0;
void checka(long int x,long int y)
{
    if(x>=y)
    ca++;
}
void checko(long int x,long int y)
{
    if(x>=y)
    co++;
}
int main()
{
    long int s,t;
    long int a,b;
    long int m,n;
    long int x,y;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    while(m>0)
    {
        scanf("%ld",&x);
        checka((a+x),s);
        m--;
    }
    while(n>0)
    {
        scanf("%ld",&y);
        checko((b+y),t);
        n--;
    }
    printf("%ld\n%ld",ca,co);
    return 0;
}
