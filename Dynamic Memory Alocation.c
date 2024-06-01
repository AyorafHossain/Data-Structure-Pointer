#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;

    ptr1=(int*)malloc(5*sizeof(int));
    ptr2=(int*)calloc(5,sizeof(int));

    if(ptr1==NULL)
        printf("Memory alocation is not successful.\n");
    else
        printf("Memory alocation is  successful.\n");

    if(ptr2==NULL)
        printf("Memory alocation is not successful.\n");
    else
        printf("Memory alocation is  successful.\n");


    ptr1=realloc(ptr1,50);

    if(ptr1==NULL)
        printf("Memory alocation is not successful.\n");
    else
        printf("Memory alocation is  successful.\n");

    free(ptr1);
    printf("Memory dealocation is  successful.\n");
  return 0;
}
