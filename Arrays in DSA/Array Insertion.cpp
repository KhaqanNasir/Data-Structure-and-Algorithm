#include<iostream>
using namespace std;
int main(){
	int size,pos,num;
	int array[50];
	cout<<"enter the size of array\n";
	cin>>size;
	cout<<"enter the element of array\n";
	for(int i=0;i<size;i++){
		cin>>array[i];
		cout<<endl;
	}
	cout<<"enter the position to insert number\n";
	cin>>pos;
	cout<<"enter the number to insert on the poition\n";
	cin>>num;
	for(int x=size-1;x>=pos-1;x--){
		array[x+1]=array[x];
	}
	array[pos-1]=num;
	size++;
	for(int j=0;j<size;j++){
		cout<<array[j]<<endl;
	}	
	return 0;
}

