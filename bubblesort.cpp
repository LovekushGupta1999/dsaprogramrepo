#include<iostream>
using namespace std;

int bubble_sort(int arr[],int n){
    for(int i =0; i<n-1; ++i){
        int count=0;
        for(int j=0 ;j<n-1-i; ++j){
            if(arr[j]>arr[j+1]){
                count++;
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
      if(count==0){
        break;
      }
}   for(int i=0; i<n; ++i){
    cout<<arr[i]<<" ";
}
  return 0;
}
int main(){
    int arr[]={2,3,4,0,7};
    int size = sizeof arr/sizeof(arr[0]);
     for(int i=0; i<size; ++i){
    cout<<arr[i]<<" ";
}
    cout<<endl<<"array after sorting"<<endl;
    bubble_sort(arr, size);
}