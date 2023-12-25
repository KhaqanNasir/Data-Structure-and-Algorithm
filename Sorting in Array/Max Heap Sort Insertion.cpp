#include<iostream>
using namespace std;
void insertMaxHeap(int array[],int n,int value){
	n=n+1;
	array[n]=value;
	int i=n;
	while(i>=1){
		int parent=(i-1)/2;
		if(array[parent]<array[i]){
			int swap=array[i];
			array[i]=array[parent];
			array[parent]=swap;
			i=parent;
		}
		else{
			return;
		}
	}
}
int main(){
	int array[9]={70,50,40,45,35,39,16,10,9};
	cout<<"Tree before INSERTION\n";
	for(int i=0;i<9;i++){
		cout<<array[i]<<" ";
	}
	cout<<"\nEnter Value to Insert ";
	int value;
	cin>>value;
	insertMaxHeap(array,9,value);
	cout<<"Tree after INSERTION\n";
	for(int i=0;i<=9;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
