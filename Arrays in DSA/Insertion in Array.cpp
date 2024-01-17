#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int array[size+1];
	int x=sizeof(array)/sizeof(array[0]);
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<size;i++){
		cout<<"Enter "<<i+1<<" Value: ";
		cin>>array[i];
	}
	cout<<"My array is\n";
		for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	int pos,val;
	cout<<"\nEnter the position to insert the value ";
	cin>>pos;
	cout<<"\nEnter new value \n";
	cin>>val;
	array[x]=array[pos-1];
	array[pos-1]=val;
	cout<<"New Array is\n";
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<"\nThe deleted value is "<<array[x];
	return 0;
	
}
