#include<iostream>
using namespace std;

int insert_sort(int a[],int n){
    for(int i =1; i<n; ++i){
       int j=i-1;
   
      int current= a[i];
       while((a[j]>current)&& j>=0){
          
           a[j+1]=a[j];
            j--;
          
       }
    
       a[j+1]=current;
       
    }
     for(int i=0; i<n; ++i){
    cout<<a[i]<<" ";
     }
  return 0;
}
int main(){
    int arr[]={2,5,4,0,1};
    int size = sizeof arr/sizeof(arr[0]);
   
     for(int i=0; i<size; ++i){
    cout<<arr[i]<<" ";
}
    cout<<endl<<"array after sorting"<<endl;
    insert_sort(arr, size);
}