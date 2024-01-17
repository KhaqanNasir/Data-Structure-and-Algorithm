#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
struct node *head=0,*temp;
void deleteDuplicate(){
	while(temp->link!=0){
		if(temp->data==temp->link->data){
			struct node *prev;
			prev=temp->link;
            temp->link=prev->link;
            delete prev;
		}
		temp=temp->link;
	}
}
void insertFirst(){
	int x;
	cout<<"Enter value to insert\n";
	cin>>x;
	struct node *n=new node();
	n->data=x;
	n->link=head;
	head=n;
}
void insertLast(){
	int x;
	cout<<"Enter value to insert\n";
	cin>>x;
	struct node *n = new node();
	n->data=x;
	n->link=0;
	temp=head;
	while(temp->link!=0){
		temp=temp->link;
	}
	temp->link=n;
}
void display(){
	cout<<"Your list is ";
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" -> ";
		temp=temp->link;
	}
	cout<<"NULL";
	cout<<endl;
}
void deleteFirst(){
	temp=head;
	head=head->link;
	delete temp;
	cout<<"Deleted value successfully\n";
} 
void deleteLast(){
	if(head==0){
		cout<<"List is empty\n";
	}
	else{
			struct node *prevnode;
	temp=head;
	while(temp->link!=0){
		prevnode=temp;
		temp=temp->link;
	}
	if(temp==head){
		head=0;
	}
	else{
		prevnode->link=0;
	}

	delete temp;
	cout<<"Value deleted successfully\n";
	}

}
void insertSpecificPosition(){
	int b,i=1;
	cout<<"Enter pos do u want to insert ";
	cin>>b;
	temp=head;
	while(i<b){
		temp=temp->link;
		i++;
	}
	struct node *n=new node();
	cout<<"Enter data you want to insert ";
	int x;
	cin>>x;
	n->data=x;
	n->link=temp->link;
	temp->link=n;
}
void deleteSpecificPosition(){
	cout<<"Enter position do u want to delete ";
	int j,i=1;
	cin>>j;
	struct node *prev;
	temp=head;
	while(i<j-1){
		temp=temp->link;
		i++;
	}
     prev=temp->link;
     temp->link=prev->link;
     delete prev;
     cout<<"Value successfully deleted\n";
}
void reverse(){
	if(head==0){
		cout<<"Linked List is empty\n";
	}
	else{
	struct node *prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->link;
		currentnode->link=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
 }
cout<<"Your array is successfully reversed\n";
}
void sorting() {
    if (head == 0) {
        cout << "Linked List is empty\n";
    } else {
        struct node *sort, *temp1, *temp2;
        sort = head;
        while (sort->link != 0) {
            temp1 = sort;
            temp2 = sort->link;
            while (temp2 != 0) {
                if ((temp1->data) > (temp2->data)) {
                    int tempData = temp1->data;
                    temp1->data = temp2->data;
                    temp2->data = tempData;
                }
                temp1 = temp1->link;
                temp2 = temp2->link;
            }
            sort = sort->link;
        }
        cout << "Successfully Sorted the LinkedList\n";
    }
}

int main(){	
	cout<<"----------------------------";
	cout<<"\nEnter 1 for insert at first";
	cout<<"\nEnter 2 for insert at last";
	cout<<"\nEnter 3 for display";
	cout<<"\nEnter 4 for delete at first";
	cout<<"\nEnter 5 for delete at last";
	cout<<"\nEnter 6 for insert at specific position";
	cout<<"\nEnter 7 for delete at specific position";
	cout<<"\nEnter 8 for Sorting";
	cout<<"\nEnter 9 for Reverse the LinkedList";
	cout<<"\nEnter 0 for exit";
	cout<<"\n--------------------------\n";
	again:
	int i;
	cout<<"Enter your choice\n";
	cin>>i;
	switch(i){
		case 1:{
			insertFirst();
			goto again;
			break;
		}
		case 2:{
			insertLast();
			goto again;
			break;
		}
		case 3:{
			display();
			goto again;
			break;
		}
		case 4:{
			deleteFirst();
			goto again;
			break;
		}
		case 5:{
			deleteLast();
			goto again;
			break;
		}
		case 6:{
			insertSpecificPosition();
			goto again;
			break;
		}
			case 7:{
			deleteSpecificPosition();
			goto again;
			break;
		}
		case 8:{
			sorting();
			goto again;
			break;
		}
		case 9:{
			reverse();
			goto again;
			break;
		}
		default:{
			cout<<"inavlid choice.................";
			break;
		}
	}
	
	return 0;
}
