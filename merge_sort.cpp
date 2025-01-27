#include<iostream>
using namespace std;

void Merge(int arr[], int st,int mid ,int end){
    int i=st;
    int j=mid+1;
    int k=st;
    int b[end+1];
    while(i<=mid && j<=end){
        if(arr[j]<arr[i])
        b[k]=arr[j];
        j++;
        k++;
    }
    while(i<=mid){
        b[k]=arr[i];
        k++;
        i++;
    }
    while (j<=end)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    
}



void Merge_sort(int arr[], int st, int end){
    if(st>end){
        int mid= (st+end)/2;
        Merge_sort(arr, st, mid);
        Merge_sort(arr, mid+1, end);
        Merge(arr,st,mid,end);
     for(int i=st; i<=end;++i){
        cout<<arr[i]<<" ";
    }
    }
    
    cout<<endl;

}

 void printArray(int arr[], int n){
    for(int i=0; i<n; ++i)
        cout<<arr[i];
    }

int main(){
    int arr[]={2,3,4,0,7};
    int size = sizeof arr/sizeof(arr[0]);
    printArray(arr,size);
    cout<<endl<<"array after sorting"<<endl;
    int st=0;
    int end=size-1;
    Merge_sort(arr, st,end);
    // printArray(arr,size);


}