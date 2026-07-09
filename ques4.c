#include<stdio.h>
#include<math.h>

 float f(float x)
 {
    return x*x*x-5*x+3;
 }

 float df(float x)
 {
    return 3*x*x-5;
 }
 int main()
 {
    int i,itr;
    float h, x0, x1, error;

    printf("Enter initial guess, allowed error and max iterations:\n");
    scanf("%f%f%d",&x0,&error,&itr);

    for ( i = 1; i < itr; i++)
    {
        if (df(x0)==0)
        {
            printf("Mathematical error(division by zero)\n");
            return 0;
        }

        h=f(x0)/df(x0);
        x1=x0-h;

        printf("iteration %d:x=%.6f\n",i,x1);

        if(fabs(h) < error)
        {
            printf("\nRoot=%.6f\n",x1);
            return 0;
        
        }
           x0=x1;
        
    }
    printf("\nSolution does not canverge\n");
    return 0;
 }