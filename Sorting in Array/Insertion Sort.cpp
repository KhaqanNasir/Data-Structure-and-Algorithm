#include<iostream>
using namespace std;
int main(){
	int array[6]={8,6,3,0,10,1};
	
	cout<<"Array before INSERTION SORT \n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	for(int i=1;i<6;i++){
		int temp=array[i];
		int j=i-1;
		while(j>=0 && array[j]>temp){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}
	
	cout<<"Array after INSERTION SORT \n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	
	return 0;
}
