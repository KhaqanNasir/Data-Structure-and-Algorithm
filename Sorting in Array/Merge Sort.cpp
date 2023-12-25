#include<iostream>
using namespace std;
void merge(int array[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=0;  
    int b[10];
    while(i<=mid && j<=ub){
        if(array[i]<array[j]){
            b[k]=array[i];
            i++;
            k++;
        }
        else{
            b[k]=array[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k]=array[i];
        i++;
        k++;
    }
    while(j<=ub){
        b[k]=array[j];
        j++;
        k++;
    }
    for (k=0;k<ub-lb+1;k++) {
        array[lb + k] = b[k];  // Adjust index to copy elements from b to array
    }
}

void MergeSort(int array[],int lb,int ub) {
    if(lb<ub){
        int mid=(lb+ub)/2;
        MergeSort(array,lb,mid);
        MergeSort(array,mid+1,ub);
        merge(array,lb,mid,ub);
    }
}

int main(){
    int array[10]={8,3,5,9,10,1,7,4,6,2};
    cout<<"Array before MERGE SORT\n";
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    MergeSort(array,0,9);
    cout<<"\nArray after MERGE SORT\n";
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

