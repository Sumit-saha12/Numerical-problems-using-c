#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,n,t=1,k,l=1,h=1;
    float a[10][10],m[10],x[10],s,b,f=1,v[20];
    printf("enter the number n=");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\nenter the element of a%d%d=",i,j);
            if(i==j)
            {
                scanf("%f",&a[i][j]);
                k=j+n;
                a[i][k]=1;
                if(a[i][j]==0)
                {
                    printf("the diagonal element must be non-zero\n");
                    printf("enter any key for exit\n");
                   // getch();
                    exit(0);
                }
            }
            else if(i!=j)
            {
                scanf("%f",&a[i][j]);
                k=j+n;
                a[i][k]=0;
            }
        }

    }
    printf("\nenter the righthand side vector\n");
    for(i=1;i<=n;i++)
    {
        printf("enter the vector v[%d] :",i);
        scanf("%f",&v[i]);
    }
    printf("\nthe matrix are :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n*2);j++)
        {
            printf("%f   ",a[i][j]);
        }
        printf("\n");
    }
    while(l<=n)
    {
        k=1;
        t=1;
        while(k<=n)
        {
            if(h!=k)
            {
                    m[k]=(float)(a[t][h]/a[h][h]);
            }
            k++;
            t++;
        }
        for(i=1;i<=n;i++)
        {
            if(i!=h)
            {
                s=m[i];
                for(j=1;j<=(n*2);j++)
                {
                    a[i][j]=(a[i][j]-(s*a[h][j]));

                }
            }
        }
        l++;
        h++;
        printf("\n");
        printf("the matrix are :\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=(n*2);j++)
            {
                printf("%f   ",a[i][j]);
            }
            printf("\n");
        }

    }
    for(i=1;i<=n;i++)
    {
        s=a[i][i];
        for(j=1;j<=(n*2);j++)
        {
            a[i][j]=(float)(a[i][j]/s);
        }
    }
    printf("\nthe matrix are :\n");
    	for(i=1;i<=n;i++)
    	{
            for(j=1;j<=(n*2);j++)
            {
                printf("%f   ",a[i][j]);
            }
            printf("\n");
        }
        for(i=1;i<=n;i++)
        {
            k=1;
            m[i]=0;
            for(j=(n+1);j<=(n*2);j++)
            {
                m[i]=m[i]+(a[i][j]*v[k]);
                k++;
            }
        }
        printf("the solution are :\n");
        for(i=1;i<=n;i++)
        {
            printf("\nx[%d]=%f",i,m[i]);
        }


//getch();
}

