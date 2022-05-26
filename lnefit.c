#include<stdio.h>
#include<stdlib.h>
void main()
{
    float a,b,d[30],c[30],x=0,y=0,z=0,w=0;
    int i,n;
    printf("enter the number of arguments : ");
    scanf("%d",&n);
    printf("\nenter the values of x :\n");
    for(i=1;i<=n;i++)
    {
        printf("d[%d] : ",i);
        scanf("%f",&d[i]);
    }
    printf("\nenter the values of y :\n");
    for(i=1;i<=n;i++)
    {
        printf("c[%d] : ",i);
        scanf("%f",&c[i]);
    }
    printf("x       y      x*x     x*y\n");
    for(i=1;i<=n;i++)
    {
        w=w+d[i];
        x=x+c[i];
        y=y+(d[i]*d[i]);
        z=z+(d[i]*c[i]);
        printf("%.1f    %.1f    %.1f    %.1f\n",d[i],c[i],d[i]*d[i],d[i]*c[i]);

    }
    b=((n*z)-(w*x))/((n*y)-(w*w));
    a=(x-(b*w))/n;
    printf("the required equation is = %.2f + %.2f x",a,b);
    
}
