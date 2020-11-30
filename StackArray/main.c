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
void Display(struct stack st)
{
    int i;
    for(i=st.top;i>0;i--)
    {
        printf("%d ",st.S[i]);
        printf("\n");
    }
}
void push(struct stack *st,int x)
{
    if(st->size-1==st->top)
    {
        printf("Stack Overflown \n ");
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("Stack Underflown \n ");
    }
    else
    {
        x=st->S[st->top--];
    }
    return x;
}
