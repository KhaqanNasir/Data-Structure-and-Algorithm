#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
struct node *head=0,*temp;
void addnode(){
	cout<<"Enter how many nodes you want to store ";
	int size;
	cin>>size;
	for(int i=1;i<=size;i++){
	struct node *n = new node();
	int x;
	cout<<"Enter "<<i<<" node data in linked list ";
	cin>>x;
	n->data=x;
	n->link=0;
	if(head==0){
		head=temp=n;
	}
	else{
		temp->link=n;
		temp=n;
	}
}
	cout<<"Value successfully added\n";
}
void display(){
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" -> ";
		temp=temp->link;
	}
	cout<<"Null";
}
void search(){
	int i;
	cout<<"Enter value to search\n";
	cin>>i;
	temp=head;
	while(temp!=0){
		if(temp->data==i){
			cout<<"value found..\n";
			return;
		}
		temp=temp->link;
	}
    cout<<"Value not found\n"<<endl;		
}


int main(){
	
	cout<<"-------------------------------";
	cout<<"\nEnter 1 for add node";
	cout<<"\nEnter 2 for display nodes";
	cout<<"\nEnter 3 for search";
	cout<<"\nEnter 0 for exit\n";
	cout<<"-------------------------------\n";
	again:
	int i;
	cout<<"Enter your choice ";
	cin>>i;
	switch(i){
		case 1:{
			addnode();
			string j;
			cout<<"\nEnter (yes/no) for further execution\n";
			cin>>j;
			if(j=="yes"){
				goto again;
			}
			else{
				break;
			}
		}
		case 2:{
			display();
			string j;
			cout<<"\nEnter (yes/no) for further execution\n";
			cin>>j;
			if(j=="yes"){
				goto again;
			}
			else{
				break;
			}
		}
		case 3:{
			search();
			string j;
			cout<<"\nEnter (yes/no) for further execution\n";
			cin>>j;
			if(j=="yes"){
				goto again;
			}
			else{
				break;
			}
		}
	
		default:{
			cout<<"inavlid choice.................";
			break;
		}
	}
	return 0;
}
