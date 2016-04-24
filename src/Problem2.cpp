/*
Given a Sorted Doubly Linked List and a Binary Search Tree , Check if they are identical or not .
The DLL will have nodes of type node_dll
Note :
A DLL can be represented as a BST in many forms ,And if a dll and any one of the forms is given as input you
need to return 1 otherwise 0. 

->Dont Create an Extra Array ,or else your solution would receive 20% Cut in the Marks you got .

Examples :

Example 0:
DLL:1->5->8
BST(All 3 return 1):
    5         8      1
   / \       /        \
  1   8     5          5
           /            \
          1              8
Returns 1
    8
   / \
  5   1
Returns 0
Example 1:
DLL : 1->5
BST : 
5
 \
 10
Returns 0

Example 2:
DLL:1->3->5-9->11
BST:
    5
   / \
  1   11
   \  /      
    3 9

Returns 1

Example 3:
DLL: 1->5->7->10->12->15->20
BST:
        10
        /\
       5  15
      /\  / \
     1  7 12 20
Returns 1

Note 2 :
Unequal Length BST and DLL should return 0;
Return -1 for NULL inputs

Difficulty : Medium +
*/
#include <stdlib.h>
#include <stdio.h>
void is_equal(struct node_dll *head, struct node *root, int *x);
void is_equal(struct node_dll **head, struct node *root, int *x);
struct node_dll{
	int data;
	struct node_dll *next;
	struct node_dll *prev;
};
struct node{
	int data;
	struct node *left;
	struct node *right;
};

int is_identical(struct node_dll *head, struct node *root){
	
	/*int sum =0;
	sum = sum_linked(head);
	equal(root, &sum);
	if (sum == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	if (head == NULL  && root == NULL)
	{
		return -1;
	}
	int x = 1;
	is_equal(&head, root, &x);
	return x;
}

void is_equal(struct node_dll **head, struct node *root, int *x)
{
	if (root == NULL)
	{
		return;
	}
	is_equal(head, root->left, x);
	*x = *x && ((*head)->data == root->data);
	(*head) = (*head)->next;
	is_equal(head, root->right, x);

}

//void  equal( struct node *root,int *sum)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	equal(root->left,sum);
//	*sum = (*sum) - root->data;
//	equal(root->right, sum);
//}
//
//int sum_linked(struct node_dll *head)
//{
//	int x=0;
//	while (head)
//	{
//		x += head->data;
//		head = head->next;
//	}
//	return x;
//}