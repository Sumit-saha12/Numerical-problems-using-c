#include<stdio.h>
#include<math.h>
float equation(float);
int main()
{
	int l=1;
	float xn=0,xn1=0,k,delta=1,m,n,e,i,a=-1.0,b=-1.0;
//	printf("enter the lower and uper bound : \n");
//	scanf("%f%f",&a,&b);
	for(i=0;a==-1.0||b==-1.0;i++)
	{
		printf("%f %f\n",a,b);
		k=equation(i);
		printf("%f\n",k);
		if(k<0.00)
		{
			a=i;
		}
		else 
		{
			b=i;
		}
	}
	printf("steps  f(a)<0	f(b)>0  xn1=(a+b)/2     f(xn1)\n");
	while(delta>=0.01)
	{
		xn=xn1;
		xn1=(a+b)/2;
		k=equation(xn1);
		printf("%d	%.2f	%.2f	%.2f	\t%.5f\n",l,a,b,xn1,k);
		if(k<0)
		{
				
				a=xn1;
		}
		else if(k>0)
		{
			
				b=xn1;
		}
		delta=fabs(xn1-xn);
		l++;
	}
	printf("the root is xn1=%.3f",xn1);
}
float equation(float x)
{
	float a;
	a=(x*x*x)-(9*x)+1;
	return(a);
}
