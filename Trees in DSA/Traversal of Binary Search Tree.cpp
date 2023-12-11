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
void inorder(struct node *root){
	if(root==0){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(struct node *root){
	if(root==0){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root){
	if(root==0){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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
	cout<<"\nInorder Traversal of BST : ";
	inorder(root);
	cout<<"\nPreorder Traversal of BST : ";
	preorder(root);
	cout<<"\nPostorder Traversal of BST : ";
	postorder(root);

	return 0;
	
}
