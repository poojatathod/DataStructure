

typedef struct node
{
int data;
struct node *next;
struct node *prev;
}node;



node *create(int val)
{
node *nn;
nn=(node *)malloc(sizeof(node));
nn->data=val;
nn->next=NULL;
nn->prev=NULL;

return nn;
}



node *insertlast(node *start,int val)
{
if(start==NULL)
{
start=create(val);
}
else
{
start->next=insertlast(start->next, val);

}
return start;
}

node * display(node *start)
{
node *temp;
for(temp=start;temp!=NULL;temp=temp->next)
{
printf("%d -> ",temp->data);
}
return start;
}


node *insertfront(node *start,int val)
{
node *temp;
temp=create(val);
temp->next=start;
start->prev=temp;
return temp;
}


node *insertpos(node *start,int val,int pos)
{
node *temp;
if(start==NULL)
{
return create(val);
}
else if(pos==2)
{
temp=start->next;
start->next=create(val);
start->next->next=temp;
return start;
}
else
{
start->next=insertpos(start->next,val,pos-1);
return start;
}
}



node * deletefront(node *start)
{
node *temp;
temp=start->next;
free(start);
temp->prev=NULL;
return temp;
}


void deletelast(node *start)
{
node *temp;
if(start->next->next==NULL)
{
temp=start->next;
free(temp);
start->next= NULL;
}
else
{
deletelast(start->next);
}
}


node *deletepos(node *start,int pos)
{
node *temp;
if(pos==2)
{
temp=start->next;
start->next=start->next->next;
start->next->prev=start;
free(temp);
return start;
}
else 
{
start->next=deletepos(start->next,pos-1);
return start;
}

}


