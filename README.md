# Stack Using Array

Why do we need  Data structure
when we really look at what we do in programming: we are just processing some input to get the output

```
input and output are the data we have and we need to design and think about this data and how we store it in the meory
and the proccesing is the Real algorithm that we apply
so as prgrammers we need to have these tow part :
1- Data Structure
2- Algorithm

```

Why Data Structure :
>> as program and call another function run we need to save context switch
of caller and called function parameters
>> How we process the data and the type of the data
>> to present the mathematical operations
>> Graph represents the relation between nodes

## ***<< Stack and Array Implantation >>***

**array :**
>> For User Level
int MyArr[6] ;

```
>> For implemention_Level
	1- Looking up for 6 contigous memory of int size
	   { Location_Size = element_size x Number_Of_Elements }
	2- Giving the starting location a name of MyArr
		    |        | 5
		    |        | 4
		    |        | 3
		    |        | 2
		    |        | 1
MyArr>> |        | 0
```

```
just lest imagine if we dont have a structure called array
we need to do all of this steps manully
allocate the memory and return the address of the element
a Way that hide the mechanize of allocation the data and you just use it
```

```jsx
> >> For User_Level
	 MyArr[3] = 25 ;

>> For implemention_Level
	1- calaculate the address that equal to
		{ address = MyArr+3*sizeof(int) }
	2- acess the data and store 25 on it
          |        | 5
          |        | 4
          |   25   | 3    >> MyArr+3*sizeof(int)
          |        | 2
          |        | 1
> MyArr>> |        | 0
```

{.............
Mechanism the Hide all of the steps in implementation level and make to easier in the User level called {  ENCAPSULATION }
we just use the D.S with no care to the Details User inly care about What Not HOW
Enhance Top-Down Design
..............}

## <<  {Stacks}  >>

```
	Last IN First OUT
Read Data and Output it In a Reverse Order : in this eay stack will be a great design to do this steps
```

Example :
read a string and Revise it

/*all of the Down function is a user-level */

```c

void ReveseData()
{
StackEntry Item ;
Stack stack ;
StackIntialize(&stack) ;
while(!StackFull()  && item = getchar() != '\\0' )
	{
		Push(Item,&stack) ;
	}

while( !StackEmpty(&Stack) )
	{
		Pop(&item,&stack) ;
		Putchar(item) ;
	}
Putchar('\\0') ;

```

}

> i dont care how pop and push work and  i dont need to change it behaviour
and now our code is clear
@{ Stack importance are clear when i use it in operation system as a context switching saving structre }
@{ Type  : Set of [Values + Operation] }
@{ADT (Abstruct Data Type) data type that can not be accessed only through an interface  }
> 

                                       ***$$   Defination of Stack     $$***
@ stack of element of Type T(Stack_Entry) of finit Element doing the Follwing Opertion
1- POP
2-PUSH
3-StackFull
4-StackEmpty
5-Initalize
6-Clear Stack
7-Find the Size

## { How to Implement the stack ... } ?

```
 FIRST  we implement the stack type itself vvv
and to do this we need to use structure
-> we need to define the entry and a Index Counter tracking the index itself
-> entry must be generic to cast it to any type
```

```c
/*
@ User should select the StackEntry
*/

typedef struct stack {

int TOP   ;  \\ counter to track index
StackEntry entry[Max_Stack] ; \\

}Stack ;

/*we use the pointer to work directky to the real stack /
void IntitalizeStack(Stack ptr_s )
{
/*******************************************************************
@[Description] : Used to Initialize the Stack paramter (TOP , Entry )
@[Input]       : address of the Stack Want to Be initialized
@[Output]      : void
@[Complexity]  : n^0  theta(0)
@[Version]     : V 0.0
**********************************************************************/
ptr_s->TOP = 0 ;

}
int Push( StackEntry element , Stack *ptr_s)
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
int flag = 0 ; 	
if (ptr_s->top <= MAX_Stack-1) {
ptr_s->entry[ptr_s->top] = element ;
ptr_s->top++ ;
/*
ptr_s->entry[ptr_s->top++] = element ;
to replace both lines
*/

```
flag = 1 ;

```

}
else
{
flag = 0 ;
}

return flag
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

int flag = 0 ;
if (ptr_s->Top == Max_Stack)
{
flag =  1 ;
}

return flag  ;
}
```
