#include<stdio.h>
#include<math.h>
int main()
{
    float a=-1.0;
    float b=1.0;
    float c=1.0;
    float root1;
    float root2;
    float s;
    s=b*b-4.0*a*c;
    root1=(-b+sqrt(s))/(2*a);
    root2=(-b-sqrt(s))/(2*a);
    printf("root1: %f\nroot2: %f\n",root1,root2);
    return 0;
}
