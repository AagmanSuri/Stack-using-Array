#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *S;
};
 
void create(struct stack *st)
{
    printf("Enter the number of the stack");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(sizeof(int));
    
}
