#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
int data;
struct tree *left;
struct tree *right;
}tree;

tree *create(int val)
{
tree *nn;
nn=(tree *)malloc(sizeof(tree));
nn->data=val;
nn->left=NULL;
nn->right=NULL;
return nn;
}


void preorder(tree *root)
{
if(root)
{
printf("%d->",root->data);
preorder(root->left);
preorder(root->right);
}

}


void postorder(tree *root)
{
if(root)
{
postorder(root->left);
postorder(root->right);
printf("%d->", root->data);
}
}


void inorder(tree *root)
{
if(root)
{
inorder(root->left);
printf("%d->",root->data);
inorder(root->right);
}
}



tree * insert(tree *root, int val)
{
if(!root)
{
root=create(val);
}
else if(root->data>val)
{
root->left=insert(root->left,val);
}
else if(root->data<val)
{
root->right=insert(root->right,val);
}

  return root;

}


int isbst(tree *root)
{
if(root && root->left && root->right)
{
return ((root->left->data<root->data) && (root->right->data>root->data) && (isbst(root->left) && isbst(root->right)));
}
else 
 return 1;

}

int search(tree *root,int n)
{
if(root)
{
 if(root->data==n)
  return 1;
 else
  return (search(root->left,n)||search(root->right,n));
}
else
 return 0;
}

int sum(tree *root)
{
if(root)
{
return (root->data+sum(root->left)+sum(root->right));
}
else 
{
}
}


int max(tree *root)
{
if(root->right)
return max(root->right);
else
return (root->data);
}


int maxsumsubstrand(tree *root)
{
if(root)
{ if((root->data+maxsumsubstrand(root->left))>(root->data+maxsumsubstrand(root->right)))
  return (root->data+maxsumsubstrand(root->left));
 else
  return (root->data+maxsumsubstrand(root->right));
}
else 
  return 0;

}


void mirror(tree *root)
{
int temp;
if(root)
{
if(root->data>root->left->data||root->data<root->right->data)
{
printf("%d=> ",root->data);
temp=root->left->data;
root->left->data=root->right->data;
root->right->data=temp;
mirror(root->left);
mirror(root->right);
}
}
}
























