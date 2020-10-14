

#include<stdio.h>

struct comp
{
    float re,im;
};

int main()
{
    struct comp x1,x2,x3;
    printf("Enter the complex number:\n");
    scanf(" %f %f",&x1.re,&x1.im);
    printf("Enter the second  complex number:\n");
    scanf(" %f %f",&x2.re,&x2.im);
    x3.re=x1.re+x2.re;
    x3.im=x1.im+x2.im;
    printf("The sum of the complex numbers is:%f +i%f",x3.re,x3.im);
    return 0;
}
