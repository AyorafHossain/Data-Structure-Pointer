#include<stdio.h>
int main()
{
    int x=5,y=10,z=15;
    int *p;
    p=&x;
    printf("x=%d\n",*p);
    p=&y;
    printf("y=%d\n",*p);
    p=&z;
    printf("z=%d\n",*p);
    return 0;

}
