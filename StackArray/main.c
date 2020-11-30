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
