#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
struct node *front=0,*rear=0;
void enque(){
	int value;
	cout<<"Enter value to add in QUEUE ";
	cin>>value;
	struct node *n=new node();
	n->data=value;
	n->link=0;
	if(rear==0){
		front=rear=n;
	}
	else{
		rear->link=n;
		rear=n;
	}
	cout<<"Value successfully add ";
	
}
void deque(){
	if(front==0 && rear==0){
		cout<<"UNDER FLOW!!!!";
	}
	else if(front==rear){
		cout<<front->data;
		front=rear=0;
	}
	else{
		cout<<front->data;
		front=front->link;
	}
}
void display(){
	if(front==0 && rear==0){
		cout<<"UNDER FLOW!!!!";
	}
	else{
	struct node *temp;
	temp=front;
	cout<<"Your QUEUE is ";
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
  }
}
void peek(){
	if(front==0 && rear==0){
		cout<<"UNDER FLOW!!!!";
	}
	else{
		cout<<front->data;
	}
}
int main(){
	cout<<"------------------------------";
	cout<<"\nEnter 1 for ENQUE Operation";
	cout<<"\nEnter 2 for DEQUE Operation";
	cout<<"\nEnter 3 for DISPLAY Operation";
	cout<<"\nEnter 4 for PEEK Operation";
	cout<<"\n------------------------------";
	again:
	cout<<"\nEnter your choice ";
	int choice;
	cin>>choice;
	switch(choice){
		case 1:{
			enque();
			goto again;
		}
		case 2:{
			deque();
			goto again;
		}
		case 3:{
			display();
			goto again;
		}
		case 4:{
			peek();
			goto again;
		}
		default:{
			cout<<"\nI N V A L I D     C H O I C E !!!!";
			break;
		}
	}	

	
	return 0;
}
