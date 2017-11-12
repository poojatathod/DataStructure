#include "tree.h"
#include<stdio.h>
#include<stdlib.h>

void main()
{

struct tree *root=NULL;
root=create(100);
printf("\n");
root=insert(root,75);
root=insert(root,95);
root=insert(root,200);
root=insert(root,150);
root=insert(root,29);
root=insert(root,58);
root=insert(root,50);
preorder(root);
printf("\n");
postorder(root);
printf("\n");
inorder(root);
printf("\n");
printf("%d",isbst(root));
printf("\n");
printf("%d",search(root,300));
printf("\n");
printf("%d",sum(root));
printf("\n");
printf("%d",max(root));
printf("\n");
printf("%d\n",maxsumsubstrand(root));
mirror(root);
printf("\n");
}
