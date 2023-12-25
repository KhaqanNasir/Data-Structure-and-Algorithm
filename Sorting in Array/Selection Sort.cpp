#include<iostream>
using namespace std;
int main(){
	int array[6]={7,1,8,2,0,3};
	cout<<"Array before SELECTION SORT\n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	for(int i=0;i<6-1;i++){
		int min=i;
		for(int j=i+1;j<6;j++){
			if(array[j]<array[min]){
				min=j;
			}
		}
		if(min!=i){
			int swap=array[min];
			array[min]=array[i];
			array[i]=swap;
		}
	}
		cout<<"\nArray after SELECTION SORT\n";
	for(int i=0;i<6;i++){
		cout<<array[i]<<" ";
	}
	
	return 0;
}
