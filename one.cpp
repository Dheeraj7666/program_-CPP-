#include<iostream>
#include<math.h>
using namespace std;
void asscending(int arr[],int size){
    for(int i=0;i<size;i++){
    if(arr[i]<arr[i+1]){
    }
    else{
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }}
    
}
void print(int arr1[],int si){
    for(int i =0;i<si;i++){
    cout<<arr1[i]<<" ";
}cout<<endl;
}
int main(){
    int arr[8]={0,1,0,0,0,1,0,1};
    asscending(arr,8);
    print(arr,8);
    return 0;
}