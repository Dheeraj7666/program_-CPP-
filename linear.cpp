#include<iostream>
#include<math.h>
using namespace std;
int linear(int num[],int si,int k){
    for(int i =0;i<si;i++){
        if(num[i]==k){
            cout<<"found";
            return 0;
        }
        
    }
    cout<<" not found";
    return 0;
}
int main(){
    int key;
    cout<<"Enter the key word you want to search in array";
    cin>>key;
    cout<<"Enter the size of array";
    int size;
    cin>>size;
    int num[size];
    for(int i =0;i<size;i++){
    cout<<"Enter the"<<i<<"array :";
    cin>>num[i];}
    linear(num,size,key);
    // if(li==0){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"Not found";
    // }
    return 0;
}