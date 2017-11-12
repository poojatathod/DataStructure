#include "sll.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
node *start=NULL;
start=create(1);
display(start);
printf("\n");
start=insertlast(start,2);
start=insertlast(start,3);
start=insertlast(start,4);
start=insertlast(start,5);
display(start);
printf("\n");
start=insertfront(start,10);
display(start);
printf("\n");
start=insertpos(start,100,5);
display(start);
printf("\n");
deletelast(start);
display(start);
printf("\n");
start=deletefront(start);
display(start);
printf("\n");
start=deletepos(start,3);
display(start);
printf("\nlength is %d\n",length(start));
display(start);
printf("\n");
printf("%d",ispresent(start,100));
return 0;
}


