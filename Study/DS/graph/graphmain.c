#include "graph.h"

int main()
{
graph g;
queue q,q1,q2;
stack s;
q.top=NULL;
q1.top=NULL;
q2.top=NULL;
s.top=NULL;


set_vertices(&g,9);
addedges(&g,0,1);
addedges(&g,2,1);
addedges(&g,2,:i5);
addedges(&g,3,2);
addedges(&g,3,6);
addedges(&g,4,0);
addedges(&g,7,8);
addedges(&g,7,5);
addedges(&g,8,4);
addedges(&g,6,2);
addedges(&g,6,1);
addedges(&g,5,0);
display_graph(&g);
printf("\n\ndfs traversal is: \n");
dfs(&g,&q,&s,0);
printf("\n\nbfs traversal is: \n");
bfs(&g,&q1,&q2,0);
return 0;

}

