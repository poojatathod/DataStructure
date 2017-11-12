#include"queue.h"


typedef struct graph
{
int count1;
int **edges;
}graph;


void set_vertices(graph *g,int count)
{
int i;
g->count1=count;
g->edges=(int **)malloc(sizeof(int *)*count);
for(i=0;i<count;i++)
{
g->edges[i]=(int *)calloc(count,sizeof(int));
}
}


void display_graph(graph *g)
{
int i,j,count;
count=g->count1;
for(i=0;i<count;i++)
{
printf("\n");
for(j=0;j<count;j++)
{
printf("%d\t",g->edges[i][j]);
}
}
}

 

void addedges(graph *g,int val1,int val2)
{
g->edges[val1][val2]=1;
g->edges[val2][val1]=1;
}



void dfs(graph *g,queue *q,stack *s,int p)
{
int i;
push(s,p);
printf("%d=> ",p);
add(q,p);

for(i=0;i<g->count1;i++)
{
if(g->edges[p][i]==1)
{
if((!ispresent(s->top,i)) && (!ispresent(q->top,i)))
{
 dfs(g,q,s,i);
}
}
}
}



void bfs(graph *g,queue *q1,queue *q2,int a)
{
int i;
for(i=0;i<g->count1;i++)
{
if(g->edges[a][i]==1)
{
if((!ispresent(q1->top,i)) && (!ispresent(q2->top,i)))
{
add(q1,i);
}
}
}
printf("%d=> ",a);
add(q2,a);

if(!(length(q2->top)==g->count1))
{
bfs(g,q1,q2,delete(q1));
}
}
