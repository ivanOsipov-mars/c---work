#include<stdio.h>
int main()
{
    long long int n=15,i=1,mul=1;
    while(i<=n)
    {
        mul*=i;
        i++;
    }
    printf("%lld\n",mul);
    return 0;
}

