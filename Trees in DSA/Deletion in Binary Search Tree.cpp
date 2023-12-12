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
struct node *MIN(struct node *root){
	if(root==NULL){
		cout<<"no node found ";
	}
	while(root->left!=NULL){
		root=root->left;
	}
	cout<<root->data;
	return root;
}
struct node *delete_BST(struct node *root,int value){
	if(root==NULL){
		return root;
	}
	if(value < root->data){
		root->left=delete_BST(root->left,value);
	}
	else if(value > root->data){
		root->right=delete_BST(root->right,value);
	}
	else{
		if(root->right==NULL){
			struct node *n;;
			n=root->left;
			delete root;
			return n;
		}
		if(root->left==NULL){
			struct node *n;;
			n=root->right;
			delete root;
			return n;
		}
		struct node *n;
		n=MIN(root->right);
		root->data=n->data;
		root->right=delete_BST(root->right,n->data);
	}
	cout<<"Value Deleted ";
	return root;
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
	cout<<"\n Minimum value in tree is : ";
	MIN(root);
	cout<<"\n Enter Value to delete : ";
	int i;
	cin>>i;
	delete_BST(root,i); 
	cout<<"\n Tree After Deletion ";
	inorder(root);
	return 0;
}
