/*
Given a Binary Tree of N Nodes, which have unique values in the range of 
[0,N](Inclusive)  with one value(Node) missing in that sequence.
Return that missing value .

Example 1 : N=5 
   3
  / \
 4   1
    / \
   5   0
Missing Value is 2 ,Sequence is [0,1,2,3,4,5]

Example 2 : N=8
      2
     / \
    4   5
   / \ / \
  3  1 6  8
 /
0
Missing Value is 7 ,Sequence is [0,1,2,3,4,5,6,7,8]

Constaints : 
-10000<=N<=10000 [N will not be equal to 0]



Input :
Struct node Root Address
Output :
Return Missing Value .
Return -1 for NULL Inputs 

Note:
Dont Create an Extra Array/String ,or else your solution would receive 30% Cut in the Marks you got for this
question .

Difficulty : Easy
*/
void miss(struct node *root, int *x);
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};


int get_missing_value(struct node *root,int n){
	if (root == NULL)
	{
		return -1;
	}
	int x = (n*(n+1))/2;
	miss(root, &x);
	return x;
}

void miss(struct node *root, int *x)
{
	if (root == NULL)
	{
		return;
	}
	miss(root->left, x);
	if (root->data != 0 && root->data != -999)
	{
		*x = (*x) - root->data;
	}
	
	miss(root->right, x);
}
