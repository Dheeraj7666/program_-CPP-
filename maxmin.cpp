#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
int getmax(int num[],int n){
        int max= INT_MIN;
        for(int i = 0;i<n;i++){
            if(num[i]>max){
                max=num[i];
            }
        }
        return max;
      }
      int getmin(int num[],int n){
        int max= INT_MAX;
        for(int i = 0;i<n;i++){
            if(num[i]<max){
                max=num[i];
            }
        }
        return max;
      }
int main(){
    int size , num[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"max value is :"<<getmax(num,size)<<endl;
    cout<<"max value is :"<<getmin(num,size);
    return 0;
}
