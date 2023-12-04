#include<iostream>
#define N 5
using namespace std;
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
	int x;
	cout<<"Enter value to insert in QUEUE ";
	cin>>x;
	if(rear==N-1){
		cout<<"QUEUE is over flow ";
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
		cout<<"Value Successfully Added ";
	}
	else{
		rear++;
		queue[rear]=x;
		cout<<"Value Successfully Added ";
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		cout<<"QUEUE is under flow ";
	}
	else if(front==rear){
		cout<<"Deleted Value is "<<queue[front];
		front=rear=-1;
	}
	else{
	cout<<"Deleted Value is "<<queue[front];
	front++;	
	}
}
void display(){
	if(front==-1 && rear==-1){
		cout<<"QUEUE is under flow ";
	}
	else{
		cout<<"Queue is \n";
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" ";
		}
	}
}
void peek(){
		if(front==-1 && rear==-1){
		cout<<"QUEUE is under flow ";
	}
	else{
		cout<<"Front value in Queue is: "<<queue[front];
	}
}
int main(){
	cout<<"-------------------------------";
	cout<<"\nEnter 1 for ENQUEUE Operation";
	cout<<"\nEnter 2 for DEQUEUE Operation";
	cout<<"\nEnter 3 for PEEK Operation";
	cout<<"\nEnter 4 for DISPLAY Operation";
	cout<<"\n-------------------------------";
	again:
		cout<<"\nEnter your choice ";
		int choice;
		cin>>choice;
		switch(choice){
			case 1:{
				enqueue();
				goto again;
			}
			case 2:{
				dequeue();
				goto again;
			}
			case 3:{
				peek();
				goto again;
			}
			case 4:{
				display();
				goto again;
			}
			default:{
				cout<<"I N V A L I D     C H O I C E !!!!";
				break;
			}
		}
	return 0;
}
