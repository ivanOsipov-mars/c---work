#include<stdio.h>
int main()
{
    char c='d';
    if(c>='a' && c<='z')
        c-='a'-'A';
    printf("%c\n",c);
    return 0;
}
