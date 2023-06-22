#include <iostream>
using namespace std;
int binarysearch1(int arr[],int size,int key){
    int start=0,end=size-1, mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main(){
    int arr[7]={1,2,3,3,3,5,10};
    int num =binarysearch1(arr,7,3);
    cout<<"The index is"<<num;
    //cout<<"The index of number is "<<master;
    return 0;
}
