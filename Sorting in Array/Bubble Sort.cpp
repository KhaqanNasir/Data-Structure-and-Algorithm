#include<iostream>
using namespace std;
int main(){
	int array[6]={7,2,8,1,39,0};
	cout<<"Array before BUBBLE Sort\n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<6-1;i++){
		for(int j=0;j<6-1-i;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	cout<<"Array after BUBBLE Sort\n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
