//step 3
#include <stdio.h>

int main()
{
    int a=10;
    int b=20;

    int c=a;
    a=b;
    b=c;

    printf("New values are %f and %f",&a,&b);
    
    return 0;
}