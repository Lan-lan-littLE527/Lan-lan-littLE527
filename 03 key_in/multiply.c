#include"stdio.h"

int main ()
{
    float f = 0;
    float t = 0;
    float mul = 0;

    scanf("%f%f", &f , &t );
    
    printf("Input 1st number:%f\n", f );
    printf("Input 2nd number:%f\n", t );

    mul = f * t ;

    printf("Result: %f * %f = %f \n", f , t , mul);

    return 0 ;
}