#include<stdio.h>
int add(int *a,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+ *(a+i);
    }
    return sum;

}

int main()
{
    int arr[3]={50,20,30};
    int result =add(&arr,3);
    printf("%d",result);
    return 0;
}




