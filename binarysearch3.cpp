// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binary(int arr[],int n){
    int s = 0,e=n;
    int mid=(s+e)/2;
    
    
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid +1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;

    }
    return s;
}
int main(){
    int arr[6]={1,2,3,899,89,2};
    int num = binary(arr,6);
    cout<<"maximum value is :"<<num;
    return 0;
}