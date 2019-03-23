#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left,*right;
};

node* newNode(int val){
	node* Node = new node();
	Node->data=val;
	Node->left=NULL;
	Node->right=NULL;
	return Node;
}

int height(node* root){
	if (root==NULL)
	{
		return 0;	
	}
	else{
		int lheight = height(root->left);
		int rheight = height(root->right);

		if (lheight>rheight)
		{
			return (lheight+1);
		}
		else
			return rheight+1;
	}
}

void printGivenLevel(node *root,int level){
	if (root==NULL)
	{
		return;
	}
	if (level==1)
	{
		cout << root->data << " ";
	}
	else if (level>1)
	{
		printGivenLevel(root->left,level-1);
		printGivenLevel(root->right,level-1);
	}
}

void printLevelOrder(node *root){
	int h = height(root);
	for (int i = 0; i < h; ++i)
	{
		printGivenLevel(root,i+1);
	}
	cout << endl;
}


int main(int argc, char const *argv[])
{
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Level order traversal of Binary tree is \n";
	printLevelOrder(root);
	return 0;
}