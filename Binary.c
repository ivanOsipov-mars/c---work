#include<stdio.h>
int main()
{
    char c='z';
    int a=8;
    while(a)
    {
        if(c&128)printf("1");
        else printf("0");
        c=c<<1;
        a--;
    }
    return 0;
}


