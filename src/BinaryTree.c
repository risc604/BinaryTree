/*
 * BinaryTree.c
 *
 *  Created on: 2017年12月8日
 *      Author: tomcat
 */

#include <stddef.h>
#include <stdio.h>
//#include <stdlib.h>



typedef struct node
{
	struct node 		*left, *right;
			int		data;
} node;


struct node* NewNode(int data)
{
	struct node *node = (node*)malloc(sizeof(node));
	node->data = data;
	node->left = node->right = NULL;

	return(node);
}


struct node* insert(struct node *node, int data)
{
	if(node == NULL)
	{
		return(NewNode(data));
	}
	else
	{
		if(data <= node->data)
		{
			node->left = inert(node->left, data);
		}
		else if(data > node->data)
		{
			node->right = intert(node->right, data);
		}
		return(node);
	}
}






int main(void)
{
	return 0;
}

