#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

void func(stack *s)
{
push(s,77);
push(s,88);
push(s,99);
push(s,66);

}


void main()
{

stack s;
s.top=NULL;

func(&s);
display(s.top);

printf("\npop element is %d\n",pop(&s));
display(s.top);
printf("\n");
 
}


