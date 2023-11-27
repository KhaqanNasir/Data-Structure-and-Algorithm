#include<iostream>
#define N 5
using namespace std;
int stack1[N],stack2[N];
int top1=-1,top2=-1;
int count=0;  // used for minimun iteration on stack 2
void push1(int x){
	if(top1==N-1){
		cout<<"OVERFLOW!!!!";
	}
	else{
		top1++;
		stack1[top1]=x;
	}
}
int pop1(){
	return stack1[top1--];
}
void push2(int x){
	if(top2==N-1){
		cout<<"OVERFLOW!!!!";
	}
	else{
		top2++;
		stack2[top2]=x;
	}
}
int pop2(){
	return stack2[top2--];
}
void enqueue(){
	cout<<"Enter value to insert in Queue ";
	int x;
	cin>>x;
	push1(x);
	count++;
}
void dequeue(){
	if(top1==-1 && top2==-1){
		cout<<"Queue is Empty ";
	}
	else{
		for(int i=0;i<count;i++){
			int a=pop1();
			push2(a);
		}
		cout<<"Deleted Value is "<<pop2();
		count--;
		for(int i=0;i<count;i++){
			int b=pop2();
			push1(b);
		}	
	}
}
void display(){
	if(top1==-1){
		cout<<"Queue is Empty ";
	}
	else{
		cout<<"Queue is : ";
		for(int i=0;i<=top1;i++){
			cout<<stack1[i]<<" ";
		}
	}
}
void peek(){
	if(top1==-1){
		cout<<"Queue is Empty ";
	}
	else{
		cout<<"Top Element is "<<stack1[top1];
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
			enqueue();
			goto again;
		}
		case 2:{
			dequeue();
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
