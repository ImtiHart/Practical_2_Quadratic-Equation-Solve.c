#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Declare variables
float a, b, c, d, e, f;
int main()
{
    //Ask user to input values of coefficients
    printf("What are the values of the coefficients: ");
    scanf("%f %f %f", &a, &b, &c);
    d= (b*b)-(4*a*c);
    //If a is 0 there is no solution
    if (a!=0)
    {
        //Calculate answers with quadratic formula
        d=sqrt(d);
        e=-((b+d)/(2*a));
        f=-((b-d)/(2*a));
        //Display answer of the equation
         if (d>0)
        {
        printf("Therefore roots are both real and different, Root1 = %.3f and Root2 = %.3f", e, f);
        }
        else if (d==0)
        {
            printf("Therefore roots are both real and the same, Root1 = Root2 = %.3f", e);
        }
        else if (d<0)
        {
            printf("Therefore roots are both complex and different, Root1= %.3f and Root2 = %.3f",e ,f);
        }
        //No solution if discriminant less than zero or "a" variable equals zero
        else
        {
            printf("There is no solution");
        }
    }
    else
        printf("There is no solution");


}
