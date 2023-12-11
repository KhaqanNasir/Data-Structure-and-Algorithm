#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *insert_BST(struct node *root,int value){
	if(root==NULL){
		struct node *n = new node();
		n->data=value;
		n->left=NULL;
		n->right=NULL;
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
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
struct node *search(struct node *root,int value){
	if(root==NULL){
		return NULL;
	}
	if(root->data==value){
		return root;
	}
	else if(value < root->data){
		return search(root->left,value);
	}
	else{
		return search(root->right,value);
			}
}
int main(){
	struct node *root=NULL;
	int x;
	while(x!=-1){
		cout<<"Enter Value to insert (-1 for no node) ";
		cin>>x;
		if(x==-1){
			break;
		}
		root=insert_BST(root,x);
	}
	cout<<"\n Tree display in inorder : ";
	inorder(root);
	cout<<"\n Enter Value to Search ";
	int i;
	cin>>i;
	struct node *temp = search(root,i);
	if(temp==NULL){
		cout<<i<<" not found in BST ";
	}
	else{
		cout<<i<<" found in BST ";
	}
	return 0;
}
