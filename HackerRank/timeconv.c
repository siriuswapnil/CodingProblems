#include<stdio.h>
int main()
{
    int h,m,s;
    char t[3];
    scanf("%d:%d:%d%s",&h,&m,&s,t);
    if(strcmp(t,"PM")==0)
    {
        if(h<12)
        {
            h+=12;
        }
    }
    if(h==12 && (strcmp(t,"AM")==0))
    {
        h==00;
    }
    printf("%d:%d:%d",h,m,s);

}
