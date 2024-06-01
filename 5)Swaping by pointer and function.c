#include<stdio.h>
void swaping(int*p1,int*p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int x=10,y=20;
    printf("Before swaping x=%d\n",x);
    printf("Before swaping y=%d\n",y);
    swaping(&x,&y);
    printf("After swaping x=%d\n",x);
    printf("After swaping y=%d\n",y);


    return 0;
}


