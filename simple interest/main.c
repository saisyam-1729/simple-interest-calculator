#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n;
    float r, si;
    printf("simple interest calculator\n\n");
    printf("enter principle value:\n");
    scanf("%d",&p);
    printf("enter the time period:\n");
    scanf("%d", &n);
    printf("enter rate of interest:\n");
    scanf("%f", &r);
    si = p*n*r/100;
    printf("simple interest is:%f \n", si);
    printf("your principle amount currently is:%f", si + p);

    return 0;
}
