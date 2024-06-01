#include<stdio.h>
int main()
{
    int a[50],sum=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
     {
         sum=sum+*(a+i);

     }



    for(i=0;i<n;i++)
    {
        printf("%d  ",*(a+i));
    }


    for(i=0;i<n;i++)
    {
        printf("\n%d\n",&a[i]);
    }


     printf("sum=%d\n",sum);
     return 0;

}
