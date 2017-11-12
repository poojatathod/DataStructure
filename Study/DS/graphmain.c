#include"graph.h"

int main()
{

graph g;
queue q;
stack s;
q.top==NULL;
s.top==NULL;


set_vertices(&g,3);
addedges(&g,0,1);
addedges(&g,2,1);
addedges(&g,2,0);
display_graph(&g);
printf("\n");
printf("dfs traversal is: ");
dfs(&g,&q,&s,0);
return 0;
}

