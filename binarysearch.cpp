#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0,end=size-1,mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid -1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[7]={1,6,7,8,9,88,89};
    int master=binarysearch(arr,7,89);
    cout<<"The index of number is "<<master;
}