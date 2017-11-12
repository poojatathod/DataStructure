#include<stdio.h>
#include<stdlib.h>
#include "dll.h"


int main()
{
 node * start=NULL;
start=create(4);
display(start);
printf("\n");
start=insertlast(start,5);
start=insertlast(start,5);
start=insertlast(start,5);
start=insertlast(start,8);
display(start);
printf("\n");
start=insertfront(start,11);
display(start);
printf("\n");
start=insertpos(start,66,4);
display(start);
printf("\n");

start=deletefront(start);
display(start);
printf("\n");
deletelast(start);
display(start);
printf("\n");
start=deletepos(start,4);
display(start);
}

