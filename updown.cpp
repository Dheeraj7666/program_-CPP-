#include<iostream>
#include<math.h>
using namespace std;
void print(int arr1[],int si){
    for(int i =0;i<si;i++){
    cout<<arr1[i]<<" ";
}cout<<endl;
}
void asscending(int arr[],int size){
    int temp = 0;
    for(int i = 0,j=1;j<size;j++){
        if(arr[i] >arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }else if (arr[i] == 0){
            i++;
        }
    }
    }
int main(){
    int arr[]={1,1,0,0,0,1,1,1};
    asscending(arr,8);
    print(arr,8);
    return 0;
}