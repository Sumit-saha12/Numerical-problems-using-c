#include<stdio.h>
#include<math.h>
float eqsn(float);
void main()
{
    int i,j,n,s=88;
    float y0=0,y1=0,y2=0,a,b,h,x,t,Is,It;
    printf("\nenter the lower value : ");
    scanf("%f",&a);
    printf("\nenter the upper value : ");
    scanf("%f",&b);
    printf("\nenter the interval : ");
    scanf("%d",&n);
    h=(b-a)/n;
    printf("\tXi\t\tYi=f(Xi)\t\tY0\t\tY1\t\tY2");
    for(i=0,x=a;i<=n;i++,x=x+h)
    {
        if(i==0||i==n)
        {
            t=eqsn(x);
            y0=y0+t;
            printf("\nx[%d]=%.3f\t\ty[%d]=%.3f\t\t%.3f\t\t%c\t\t%c\n",i,x,i,t,t,s,s);
        }
        else if(i%2==0)
        {
            t=eqsn(x);
            y2=y2+t;
            printf("\nx[%d]=%.3f\t\ty[%d]=%.3f\t\t%c\t\t%c\t\t%.3f\n",i,x,i,t,s,s,t);
        }
        else
        {
            t=eqsn(x);
            y1=y1+t;
            printf("\nx[%d]=%.3f\t\ty[%d]=%.3f\t\t%c\t\t%.3f\t\t%c\n",i,x,i,t,s,t,s);
        }
    }
    Is=(h/3)*(y0+(4*y1)+(2*y2));
    printf("\nthe exact value using Simpson 1/3 method is = %f",Is);
    It=(h/2)*(y0+(2*(y1+y2)));
    printf("\nthe exact value using trapizodal method is = %f",It);
}
float eqsn(float x)
{
    float y;
    y=(4*x)-(3*(x*x));
    return(y);
}
