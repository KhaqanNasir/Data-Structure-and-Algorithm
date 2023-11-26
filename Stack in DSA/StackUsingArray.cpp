#include<iostream>
#define N 5
using namespace std;
int stack[N];
int top=-1;
void push(){
	if(top==N-1){
		cout<<"Stack is overFlow";
	}
	else{
		int i;
	cout<<"Enter the value to store in stack ";
	cin>>i;
	top++;
	stack[top]=i;
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack is underFlow "<<endl;
	}
	else{
		int temp=stack[top];
		top--;
		cout<<"\nDeleted value from stack is "<<temp<<endl;
	}
}
void peek(){
	if(top==-1){ 
		cout<<"Stack is underFlow "<<endl;
	}
	else{
		int temp1=stack[top];
		cout<<"\nTop value stack is "<<temp1<<endl;
	}	
}
void display(){
	cout<<"Values in stack is ";
	for(int i =top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
}
int main(){
	cout<<"----------------------------------------";
	cout<<"\nEnter 1 for push the value in stack\n";
	cout<<"Enter 2 for delete the value in stack\n";
	cout<<"Enter 3 for display top value in stack\n";
	cout<<"Enter 4 for display the values in stack\n";
	cout<<"Enter other number for exit\n";
	cout<<"----------------------------------------\n";
	back:
	cout<<"Enter your choice\n";
	int x;
	cin>>x;
	switch(x){
		case 1:{
			push();
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
