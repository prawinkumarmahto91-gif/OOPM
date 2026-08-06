#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array:";
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

    int start=0,end=n-1;
    while(start<=end){
        if(arr[end]!=0){
            if(arr[start]==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                start++;
            }
        }
        else
        end--;
    }
for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    } 
}