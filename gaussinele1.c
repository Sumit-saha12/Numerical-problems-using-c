#include<stdio.h>
#include<conio.h>
void display(float q[10][10],int);
int main()
{
    int i,j,n,t=2,k=2,l=2,h;
    float a[10][10],m[10],x[10],s;
    printf("enter the number n=");
    scanf("%d",&n);
    printf("\nenter the array element :\n");
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\nenter the element for a%d%d=",i,j);
            if(i==j)
            {
                scanf("%f",&a[i][j]);
                if(a[i][j]==0)
                {
                    printf("\nThe diagonal element must be non-zero\n");
                    printf("enter any key for exit\n");
                    //getch();
                    exit(1);
                }
            }
            else 
                scanf("%f",&a[i][j]);
        }
    }
    
    printf("\n\nThe matrix are\n\n");
    display(a,n);
    h=1;
    while(l<n)
    {
        k=l;
        while(k<n)
        {
            m[k]=(float)(a[t][h]/a[h][h]);
            k++;
            t++;
        }
        t=l;
        for(i=l;i<n;i++)
        {
            s=m[i];
            for(j=1;j<=n;j++)
            {
                a[i][j]=(a[i][j]-(s*a[h][j]));
            }
        }
        printf("\nMatrix after pass %d\n",h);
        l++;
        h++;
        t++;
        printf("\n");
        display(a,n);
    }
    k=n-1;
    while(k>=1)
    {
        x[k]=0;
        k--;
    }
    k=n-1;
    while(k>=1)
    {
        j=n-1;
        s=a[k][n];
        while(j>=1)
        {
            s=s-(x[j]*a[k][j]);
            j--;
        }
        x[k]=(float)s/a[k][k];
        k--;
    }
    printf("\nthe solution are :");
//    for(k=1;k<n;k++)
//        printf("\n\n%c=%f",k+87,x[k]);
	for(k=1;k<n;k++)
        printf("\n\nx%d=%f",k,x[k]);
    getch();
}
void display(float q[10][10],int k)
{
    int i,j;
    for(i=1;i<k;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%f\t",q[i][j]);
        }
        printf("\n");
    }
}


