#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *insert_BST(struct node *root,int value){
	if(root==0){
		struct node *n = new node();
		n->data=value;
		n->left=0;
		n->right=0;
		return n;
	}
	if(value < root->data){
		root->left=insert_BST(root->left,value);
	}
	else{
		root->right=insert_BST(root->right,value);
	}
	return root;
}
void MIN(struct node *root){
	if(root==0){
		cout<<"\nNo Node to find Minimum";
	}
	while(root->left!=0){
		root=root->left;
	}
	cout<<"\nMinimum Value of BST is : ";
	cout<<root->data;
}
void MAX(struct node *root){
	if(root==0){
		cout<<"\nNo Node to find Maximum";
	}
	while(root->right!=0){
		root=root->right;
	}
    cout<<"\nMaximum Value of BST is : ";
	cout<<root->data;
}
int main(){
	cout<<"Enter Values for Binary Search Tree\n";
	struct node *root=0;
	int x;
	while(x!=-1){
		cout<<"Enter Value to insert (-1 for no node) ";
		cin>>x;
		if(x==-1){
			break;
		}
		root=insert_BST(root,x);
	}	
	MIN(root);
	MAX(root);
	

	return 0;
	
}
