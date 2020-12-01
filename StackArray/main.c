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
    printf("Enter the size");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(sizeof(int));
    
}
void Display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d ",st.S[i]);
    }
    printf("\n");
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
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
int peek(struct stack st,int index)
{
    if(st.top-index+1<0)
    {
        printf("Invalid Index");
    }
    int x=st.S[st.top-index+1];
    return x;
}
void isEmpty(struct stack st)
{
    if(st.top==-1)
    {
        printf("isEmpty");
    }
    else
    {
        printf("is Not Empty");
    }
    
}
void isFull(struct stack st)
{
    if(st.top==st.size-1)
    {
        printf("isFull");
    }
    else
    {
        printf("it is not full");
    }
    
}
int main()
{
    struct stack st;
    create(&st);
    
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    push(&st, 60);
    printf("\n");
    isFull(st);
    printf("\n");
    isEmpty(st);
    printf("\n");
    printf("poped item is %d\n",pop(&st));
    printf("\n");
    printf("The stack is \n");
    Display(st);
    printf("\n");
}

