#include<stdio.h>
int factorial (int n){
    if (n == 0)
    {
        return 1;
    }
     else
    
        return n* factorial(n-1)
          }
       int fun(int n)
     {
        if (n == 1)
        {
            return 1;
        }
         else
        return 1 + fun(n-1);
        
     }
int main(){

        int n =3;
        printf("%d",fun(n));
        return 0;
     }
    


