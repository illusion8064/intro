#include <stdio.h>
// float me chahe int value aaye lekin with decimal aaegi 



int main()
{
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d%d%f%f\n", k,l,a,b);
    return 0;
}