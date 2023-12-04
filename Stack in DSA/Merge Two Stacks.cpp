#include<iostream>
#define N 5
using namespace std;
int stack1[N],stack2[N],stack3[N+N];
int top1=-1,top2=-1,top3=-1;
void push1(){
	if(top1==N-1){
		cout<<"Stack 1 is Full ";
	}
	else{
		int i;
		cout<<"Enter Value: ";
		cin>>i;
		top1++;
		stack1[top1]=i;
	}
}
void pop1(){
	if(top1==-1){
		cout<<"Stack 1 is Empty ";
	}
	else{
		cout<<"Deleted Value is "<<stack1[top1];
		top1--;
	}
}
void display1(){
	if(top1==-1){
		cout<<"Stack 1 is Empty ";
	}
	else{
	     cout<<"Stack is ";
		 for(int i=top1;i>=0;i--){
		 	cout<<stack1[i]<<" ";
		 }	
	}
}
void push2(){
	if(top2==N-1){
		cout<<"Stack 2 is Full ";
	}
	else{
		int i;
		cout<<"Enter Value: ";
		cin>>i;
		top2++;
		stack2[top2]=i;
	}
}
void pop2(){
	if(top2==-1){
		cout<<"Stack 2 is Empty ";
	}
	else{
		cout<<"Deleted Value is "<<stack2[top2];
		top2--;
	}
}
void display2(){
	if(top2==-1){
		cout<<"Stack 2 is Empty ";
	}
	else{
	     cout<<"Stack is ";
		 for(int i=top2;i>=0;i--){
		 	cout<<stack2[i]<<" ";
		 }	
	}
}
void merge(){
	if(top1==-1&&top2==-1){
		cout<<"Empty ";
	}
	else{
		int count=0;
		for(int i=top1;i>=0;i--){
			stack3[count]=stack1[i];
			count++;
		}
		for(int i=top2;i>=0;i--){
			stack3[count]=stack2[i];
			count++;
		}
		cout<<"Merge stack is ";
		for(int i=0;i<count;i++){
			cout<<stack3[i]<<" ";
		}
		for(int i=0;i<count-1;i++){
			for(int j=0;j<count-1-i;j++){
				if(stack3[j]>stack3[j+1]){
					int temp=stack3[j];
					stack3[j]=stack3[j+1];
					stack3[j+1]=temp;
				}
			}
		}
		cout<<"\nMerge stack after sort is ";
		for(int i=0;i<count;i++){
			cout<<stack3[i]<<" ";
		}
	}
}
int main(){
	cout<<"------------------------------";
	cout<<"\nEnter 1 Push operation for stack 1 ";
	cout<<"\nEnter 2 Pop operation for stack 1";
	cout<<"\nEnter 3 Display Operation for stack1";
	cout<<"\nEnter 4 Push operation for stack 2 ";
	cout<<"\nEnter 5 Pop operation for stack 2";
	cout<<"\nEnter 6 Display Operation for stack 2";
	cout<<"\nEnter 7 for merge the Stack";
	cout<<"\n------------------------------";
	again:
		cout<<"\nEnter your choice : ";
		int choice;
		cin>>choice;
		switch(choice){
			case 1:{
				push1();
				goto again;
			}
			case 2:{
				pop1();
				goto again;
			}
			case 3:{
				display1();
				goto again;
			}
			case 4:{
				push2();
				goto again;
			}
			case 5:{
				pop2();
				goto again;
			}
			case 6:{
				display2();
				goto again;
			}
			case 7:{
				merge();
				goto again;
			}
			default:{
				cout<<"I N V A L I D   C H O I C E ............";
				break;
			}
		}
	return 0;
}
