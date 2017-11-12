#include "queue.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{

queue q;
q.top=NULL;
add(&q,22);
add(&q,33);
add(&q,44);
add(&q,55);
display(q.top);
printf("\ndelete element is %d\n",delete(&q));
display(q.top);
}
