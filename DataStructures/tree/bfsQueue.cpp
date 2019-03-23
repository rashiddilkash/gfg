#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left,*right;
};

Node *newNode(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void BFSQueue(Node* root){
	Node *temp = root;
	queue<Node *> q;
	while(temp!=NULL){
		cout << temp->data << " ";
		if (temp->left)
		{
			q.push(temp->left);
		}
		if (temp->right)
		{
			q.push(temp->right);
		}
		temp = q.front();
		q.pop();
		
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	Node *root== newNode(NULL);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout << "BFS of Given tree using queue is : ";
	BFSQueue(root);
	return 0;
}