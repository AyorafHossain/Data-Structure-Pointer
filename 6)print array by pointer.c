#include<stdio.h>
int main()
{
    int i,*p;
    int a[5]={1,2,3,4,5};
    p=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;
}
