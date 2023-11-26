#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
struct node *top=0;
void push(){
	struct node *n=new node();
	int x;
	cout<<"\nEnter value to store in stack";
	cin>>x;
	n->data=x;
	n->link=top;
	top=n;
}
void pop(){
	if(top==0){
		cout<<"\nStack is underFlow";
	}
	else{
		struct node *temp=new node();
		temp=top;
		top=top->link;
		delete temp;
	}
}
void peek(){
	if(top==0){
		cout<<"\nStack is underFlow";
	}
	else{
		struct node *temp1=new node();
		temp1=top;
		cout<<"\nThe top value is "<<temp1->data;
	}
}
void display(){
	if(top==0){
		cout<<"\nStack is underFlow\n";
	}
	else{
		cout<<"\nYour stack is ";
		struct node *temp2=new node();
		temp2=top;
		while(temp2!=0){
			cout<<temp2->data<<" -> ";
			temp2=temp2->link;
		}
		cout<<"Null\n";
	}
}
int main(){
	cout<<"----------------------------------------";
	cout<<"\nEnter 1 for push the value in stack\n";
	cout<<"Enter 2 for delete the value in stack\n";
	cout<<"Enter 3 for display top value in stack\n";
	cout<<"Enter 4 for display the all values in stack\n";
	cout<<"Enter other number for exit\n";
	cout<<"----------------------------------------\n";
	back:
	cout<<"Enter your choice\n";
	int x;
	cin>>x;
	switch(x){
		case 1:
	{
			cout<<"Enter how many value do u want to store in stack ";
			int size;
			cin>>size;
			for(int i=1;i<=size;i++){
				cout<<"enter "<<i<<" value ";
				push();
			}
			goto back;
		}
		case 2:{
			pop();
			goto back;
		}
		case 3:{
			peek();
			goto back;
		}
		case 4:{
			display();
			goto back;
		}
		default:{
			cout<<"Invalid choice...........";
			break;
		}
	}
	
	return 0;
}
