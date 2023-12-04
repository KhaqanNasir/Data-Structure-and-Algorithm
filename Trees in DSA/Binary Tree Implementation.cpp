#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(){
	struct node *n = new node();
	int x;
	cout<<"\nEnter data (-1 for no node) : ";
	cin>>x;
	if(x==-1){
		return 0;
	}
	n->data=x;
	cout<<"\nEnter left child of : "<<x;
	n->left=create();
	cout<<"\nEnter right child of : "<<x;
	n->right=create();
	return n;
}
int main(){
	struct node *root=0;
	root=create();
	return 0;
}
