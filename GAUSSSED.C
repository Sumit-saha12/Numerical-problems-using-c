#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int i,j,f=0,l=1,n,h;
float a[20][20],x[20],m[20],delta[20],s;

printf("enter the value of n:");
scanf("%d",&n);
printf("enter the array elemnt\n");
for(i=1;i<n;i++)
{
	s=0;
	for(j=1;j<=n;j++)
	{
		printf("enter the element for a%d%d :\n",i,j);
		scanf("%f",&a[i][j]);
		s=s+fabs(a[i][j]);
	}
	s=s-fabs(a[i][i])-fabs(a[i][n]);
	if(s>a[i][i])
	{
		printf("it is not strictly diagonally dominate");
		exit(1);
	}
}
printf("\n");
printf("steps	");
for(i=1;i<n;i++)
{
	printf("x[%d]\t\t",i);
	x[i]=0;
	delta[i]=0;
}
printf("\n");
while(1)
{
	for(i=1;i<n;i++)
		m[i]=x[i];
	if(l>2)
	{
		for(i=1;i<n;i++)
		{
			if(delta[i]<0.01)
				f++;
		}
		if(f==n-1)
			break;
	}
	f=0;
	for(i=1;i<n;i++)
	{
		s=a[i][n];
		for(h=1;h<n;h++)
		{
			if(h!=i)
				s=s-(a[i][h]*m[h]); //use x[h] instead of m[h] for sed
		}
		x[i]=(float)s/a[i][i];
	}
	for(i=1;i<n;i++)
		delta[i]=fabs(x[i]-m[i]);
	printf("%d",l);
	for(i=1;i<n;i++)
		printf("\t%f",x[i]);
	l++;
	printf("\n");
}
printf("\nfinal value is :\n");
for(i=1;i<n;i++)
	printf("x[%d] =%.3f\n",i,x[i]);
}


