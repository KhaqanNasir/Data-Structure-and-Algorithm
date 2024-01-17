#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=0,*temp;
void addnode(){
	struct node *n=new node();
	int x;
	cout<<"Enter the value u want to store in linkedlist ";
	cin>>x;
	n->data=x;
	n->next=0;
	n->prev=0;
	if(head==0){
		head=temp=n;
	}
	else{
		temp->next=n;
		n->prev=temp;
		temp=n;
	}
	cout<<"Value successfully added";
}
void display(){
	struct node *temp1=head;
	cout<<"your list is ";
	while(temp1!=0){
		cout<<temp1->data<<" -> ";
		temp1=temp1->next;
	}
	cout<<"NULL";
}
void insertBeg(){
	struct node *n= new node();
	int x;
	cout<<"Enter value to store in the beginning ";
	cin>>x;
	n->data=x;
	n->next=0;
	n->prev=0;
	if(head==0){
		head=temp=n;
	}
	else{
		n->next=head;
		head->prev=n;
		head=n;
	}
	cout<<"Successfully value add at first";
}
void insertLast(){
	struct node *n= new node();
	int x;
	cout<<"Enter value to store at the last ";
	cin>>x;
	n->data=x;
	n->next=0;
	n->prev=0;
	if(head==0){
		head=temp=n;
	}
	else{
		temp->next=n;
		n->prev=temp;
		temp=n;
	}
	cout<<"Successfully value add at Last";
}
void insertPos(){
	int pos;
	cout<<"Enter position to insert linkedList ";
	cin>>pos;
	if(pos<1){
		cout<<"Invalid position";
	}
	else if(pos==1){
		insertBeg();
	}
	else{
		struct node *n=new node();
		int i,q=1;
		cout<<"Enter value to store ";
		cin>>i;
		struct node *temp2;
		temp2=head;
		while(q<pos-1){
			temp2=temp2->next;
			q++;
		}
		n->data=i;
		n->prev=temp2;
		n->next=temp2->next;
		temp2->next=n;
		temp2->next->prev=n;
		cout<<"Value successfully insert";
	}
}
void deleteBeg(){
	if(head==0){
		cout<<"LinkedList is empty";
	}
	else{
		struct node *temp3;
		temp3=head;
	    head=head->next;
	    head->prev=0;
	    delete temp3;
	    cout<<"Value successfully deleted ";
	}
}
void deleteLast(){
	if(head==0){
		cout<<"LinkedList is empty";
	}
	else{
		struct node *temp4;
		temp4=head;
		while(temp4->next!=0){
			temp4=temp4->next;
		}
		temp4->prev->next=0;
		delete temp4;
		cout<<"Successfully deleted";
		
	}
}
void deletePos(){
	int pos,i=1;
	cout<<"Enter position to delete value ";
	cin>>pos;
	if(pos<1){
		cout<<"List is empty ";
	}
	else if(pos==1){
		deleteBeg();
	}
	else{
		struct node *temp5;
		temp5=head;
		while(i<pos){
			temp5=temp5->next;
			i++;
		}
		 temp5->prev->next=temp5->next;
		 temp5->next->prev=temp5->prev;
		 delete temp5;
		 cout<<"Value successfully deleted";
	}
}
void reverse(){
	if(head==0){
		cout<<"List is empty";
	}
	else{
	while(temp!=0){
		cout<<temp->data<<" -> ";
		temp=temp->prev;
	}
	cout<<"Null";
}
}
void search(){
	int k;
	cout<<"Enter value to search is linked list ";
	cin>>k;
	struct node *temp6;
	temp6=head;
	while(temp6!=0){
		if(temp6->data==k){
			cout<<"Value found";
			return;
		}
		temp6=temp6->next;
	}
	cout<<"Value not found";
}
void sorting(){
	if(head==0){
		cout<<"List is empty";
	}
	else{
		struct node *sort,*sort1,*sort2;
		sort=head;
		while(sort!=0){
			sort1=sort;
			sort2=sort->next;
			while(sort2!=0){
				if((sort1->data)>(sort2->data)){
					int data=sort1->data;
					sort1->data=sort2->data;
					sort2->data=data;
				}
				sort1=sort1->next;
				sort2=sort2->next;
			}
			
			sort=sort->next;
		}
		cout<<"List is sorted";
	}
}
int main(){
	cout<<"--------------------------------------";
	cout<<"\nEnter 1 for add node";
	cout<<"\nEnter 2 for display nodes";
	cout<<"\nEnter 3 for add node at beginning";
	cout<<"\nEnter 4 for add node at Last";
	cout<<"\nEnter 5 for add node at Specific Position";
	cout<<"\nEnter 6 for delete beginning";
	cout<<"\nEnter 7 for delete Last";
	cout<<"\nEnter 8 for delete node at Specific Position";
	cout<<"\nEnter 9 for reverse linked list";
	cout<<"\nEnter 10 for Search linked list";
	cout<<"\nEnter 11 for Sort the linked list";
	cout<<"\nEnter other number for exit";
	cout<<"\n--------------------------------------";
	again:
		int i;
		cout<<"\nEnter your choice ";
		cin>>i;
		switch(i){
			case 1:{
				addnode();
				goto again;
			}
			case 2:{
				display();
				goto again;
			}
			case 3:{
				insertBeg();
				goto again;
		}
		case 4:{
				insertLast();
				goto again;
		}
		case 5:{
				insertPos();
				goto again;
		}
		case 6:{
				deleteBeg();
				goto again;
		}
		case 7:{
				deleteLast();
				goto again;
		}
		case 8:{
				deletePos();
				goto again;
		}
		case 9:{
				reverse();
				goto again;
			}
			case 10:{
				search();
				goto again;
			}
			case 11:{
				sorting();
				goto again;
			}
			
			default:{
				cout<<"Invalid choice--------------------";
				break;
			}
		}
		return 0;
}
