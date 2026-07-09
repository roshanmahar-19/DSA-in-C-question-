#include<stdio.h>
#include<conio.h>

void main()
{
    int a1,a2,a3,a4,b1,b2,b3,c1,c2,c3,c4,f1,f2,f3,i,n;

    float x1[25],x2[25],x3[25];


    printf("\nEnter the value of a1,b1,c1,f1 for first equation:-");
    scanf("%d%d%d%d",&a1,&b1,&c1,&f1);

    printf("\n\nEnter the values of a2,b2,c2,f2 for second equation:-");
    scanf("%d%d%d%d",&a2,&b2,&c2,&f2);

    printf("\n\nEnter the values of a3,b3,c3,f3 for the third equation:-");
    scanf("%d%d%d%d",&a3,&b3,&c3,&f3);

    printf("\n\nThe initial approximation is:-");
    printf("\n\n\tx=y=z=0");

    printf("\nEnter the number of iteration:-");
    scanf("%d",&n);

    x1[1]=x2[1]=x3[1]=0;

    for(i=1;i<=n;i++)
    {
        x1[i+1]=(f1-(b1*x2[i])-(c1*x3[i]))/a1;

        x2[i+1]=(f2-(a2*x1[i+1])-(c2*x3[i]))/b2;

        x3[i+1]=(f3-(a3*x1[i+1])-(b3*x2[i+1]))/c3;
    }

    printf("\n\t........................................");

    printf("\nNo\t x\t\t y\t\t z");

    printf("\n\t........................................");

    for(i=1;i<=n;i++)
    {
        printf("\n\t%2d\t%10.5f\t%10.5f\t%10.5f",i,x1[i],x2[i],x3[i]);
    }

    getch();
}
