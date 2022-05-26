#include<stdio.h>
float eqsn(float,float);
void main()
{
    float k1,k2,k3,k4,h,q,x,y;
    printf("enter the step length : ");
    scanf("%f",&h);
    printf("enter the starting value of x : ");
    scanf("%f",&x);
    printf("enter the starting value of y : ");
    scanf("%f",&y);
    printf("enter the value of x to be find : ");
    scanf("%f",&q);
    for(;x<q;x=x+h)
    {
        k1=h*eqsn(x,y);
        k2=h*eqsn(x+(h/2.0),y+(k1/2.0));
        k3=h*eqsn(x+(h/2.0),y+(k2/2.0));
        k4=h*eqsn(x+h,y+k3);
        y=y+((1/6.0)*(k1+(2.0*k2)+(2.0*k3)+k4));
        printf("\n\nFor Y(%.1f):-\n\n",x+h);
        printf("k1=%f\nk2=%f\nk3=%f\nk4=%f\n\ny(%.1f)=%.5f",k1,k2,k3,k4,x+h,y);
    }
    
}
float eqsn(float x,float y)
{
    float t;
    t=x-y;
    return(t);
}
