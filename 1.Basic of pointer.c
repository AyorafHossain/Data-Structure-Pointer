#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;
    printf("Adress of x variable:%u\n",&x);// //%u er jagae %x dele hexadecimal a memory adresss dekhabe
    printf("Value of x variable:%d\n",x);
    printf("%u\n",p);//p=&x mane x er adrees print korbe
    printf("Adress of p variable:%u\n",&p);
    printf("Value of p variable:%d",*p);
    getch();



}
