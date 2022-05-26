#include<stdio.h>
#include<math.h>
float function(float);
float dfunction(float);
int main()
{
	int l=1;
	float xn=0,xn1=0,k,delta=1,m,n,e,i,a,b,h,f,f1;
	printf("enter the lower and uper bound : \n");
	scanf("%f%f",&a,&b);
	printf("the initial approximation are a=%f and b=%f\n\n",a,b);
	printf("steps	xn	f(xn)	f'(xn)	  hn	  	xn1	delta\n");
	xn1=a;
	while(delta>=0.0001)
	{
			xn=xn1;
			f=function(xn);
			f1=dfunction(xn);
			h=-(f/f1);
			xn1=xn+h;
			delta=fabs(xn1-xn);
			printf("%d	%.4f	%.4f	%.4f	h%d=%.4f	%.4f	%.5f\n",l,xn,f,f1,l,h,xn1,delta);
			l++;
	}
	printf("\nthe root is %.4f",xn1);

}


float function(float g)
{
	float a;
	a=(g*g*g)-(8*g)+1;
	return(a);
}
float dfunction(float x)
{
	float y;
	y=(3*(x*x))-8;
	return(y);
}
