#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 20
typedef int StackEntry;




typedef struct stack
{

    int TOP; // counter to track index
    StackEntry entry[MAX_STACK];

} Stack;

/*we use the pointer to work directky to the real stack */
void IntitalizeStack(Stack *ptr_s)
{
/*********************************************************************
@[Description] : Used to Initialize the Stack paramter (TOP , Entry )
@[Input]       : address of the Stack Want to Be initialized 
@[Output]      : void 
@[Complexity]  : n^0  theta(0) 
@[Version]     : V 0.0
**********************************************************************/
    ptr_s->TOP = 0;
}
int Push(StackEntry element, Stack *ptr_s)
{

/*********************************************************************
@[Description] : Used to Push an element to the stack with 
	         some pre-condition related to Top value 
@[Input]       :     1- StackEntry Element :elemnt with type StackEntry  
		     2- StackType 
@[Output]      : ineger value repesent the index or -1 index exceed 
@[Complexity]  : n^0  theta(0) 
@[Version]     : V 0.0
**********************************************************************/
    int flag = 0;
    if (ptr_s->TOP <= MAX_STACK - 1)
    {
        ptr_s->entry[ptr_s->TOP] = element;
        ptr_s->TOP++;
        /*
ptr_s->entry[ptr_s->top++] = element ; 
to replace both lines 
*/

        flag = 1;
    }
    else
    {
        flag = 0;
    }

    return flag;
}

int StackFull(Stack *ptr_s)
{

/*********************************************************************
@[Description] : Used to Check if Stack is Full 
@[Input]       : address of the Stack Want to Be Checked 
@[Output]      : void 
@[Complexity]  : n^0  theta(0) 
@[Version]     : V 0.0
**********************************************************************/

    int flag = 0;
    if (ptr_s->TOP == MAX_STACK)
    {
        flag = 1;
    }

    return flag;
}
