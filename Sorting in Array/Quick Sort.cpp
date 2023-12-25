#include<iostream>
using namespace std;
int partition(int array[],int lb,int ub){
	int pivot=array[lb];
	int start=lb;
	int end=ub;
	while(start<end){
		while(array[start]<=pivot){
			start++;
		}
		while(array[end]>pivot){
			end--;
		}
		if(start<end){
			int swap=array[start];
			array[start]=array[end];
			array[end]=swap;
		}
	}
	int swap=array[lb];
	array[lb]=array[end];
	array[end]=swap;
	return end;	
}
void QuickSort(int array[],int lb,int ub){
	if(lb<ub){
		int loc=partition(array,lb,ub);
		QuickSort(array,lb,loc-1);
		QuickSort(array,loc+1,ub);
	}
}
int main(){
	int array[9]={7,6,10,5,9,2,1,15,7};
	cout<<"Array before QUICK SORT \n";
	for(int i=0;i<9;i++){
		cout<<array[i]<<" ";
	}
	QuickSort(array,0,8);
	cout<<"\nArray after QUICK SORT \n";
	for(int i=0;i<9;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
