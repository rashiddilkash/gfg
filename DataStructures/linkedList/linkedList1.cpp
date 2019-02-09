#include <bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node *next;
};

void printList(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data;
		temp = temp->next;
	}
}

int main(int argc, char const *argv[])
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	head = new Node;
	second = new Node;
	third = new Node;
	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);
	return 0;
}