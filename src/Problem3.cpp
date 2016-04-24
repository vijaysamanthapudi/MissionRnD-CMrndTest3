/*
Given a Tree which consists of operands and operators ,Solve the Tree and return the result
The tree will have special nodes of type enode which will have 3 fields
data => String of 5 chars .which can be either a operator or operand 
If its a operator its values will be one of the 3 following strings "+" , "-" , "*".
If its a operand its values will be any number from -9999 to 99999 in its respective string format;
Left and Right pointers will point to either NULL or another enode
Only the leaf nodes will have operand values .

Example 1:
    +
   / \
  4   5 
The Result expression is : 4+5 ,Ans is 9

Example 2:
        *
       / \
      -   5
     / \
    7   2

The Result expression is : (7-2) * 5  ,Ans is 25

Example 3:
       +
     /   \
    *     -  
   / \   / \
  7   2  4  *
           / \
          2   1
  
The Result expression is : (7*2) + (4-(2*1)) =>14+2 =>16 ,Ans is 16 

Constraints : 
Total number of enodes will be <=20 for 50% of Test cases
Data value will only have "0"<=data<="99999" values for 50% of cases .
Data value for operators will have sign as first character and \0 as next character .

Input :
Root node of a Tree of type enode
Output :
Return Final answer or -1 for Null inputs

Note :
->Dont Create an Extra Array/String ,or else your solution would receive 20%-40% Cut in the Marks you got .

Difficulty : Medium
*/
#include <stdlib.h>;
#include <stdio.h>
#include<string.h>
//data can be accessed using root->data;
struct enode{
	char data[6];
	struct enode *left;
	struct enode *right;
};
void root_postfix(struct enode *root, char *postfix, int *len);
/*
Helper Functions are optional to write 
*/
//Helper Functions Start
int isOperator(char *data){
	return 0;
}
int isOperand(char *data){
	return 0;
	
}
int getOperand(char *data){
	int num = 0; 

	for (int i = 0; data[i]; ++i)
		num = num * 10 + data[i] - '0';

	return num;
}
//Helper Functions end
int solve_tree(struct enode *root){
	if (root == NULL)
	{
		return -1;
	}
	char postfix[15];
	int len = 0;
	//root_postfix(root, postfix,&len);
	return 0;

}

//void root_postfix(struct enode *root, char *postfix,int *len)
//{
//	root_postfix(root->right, postfix, len);
//	strcpy(postfix, root->data);
//	root_postfix(root->left, postfix, len);
//}

