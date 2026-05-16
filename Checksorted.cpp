#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
    for (int i=0;i<n-1;i++)
    if(arr[i]>arr[i+1]){
        return false;
    }
    return true;


}
int main(){
    int n;
    cout<<"Enter size of the array";
    cin>>n;
    int arr[n];                                 // user input- main function  i mean the size of the array and elements are given by the user in the terminal // 
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(issorted(arr,n))
    cout<<"Array is sorted";
    else
    cout<<"Array is not sorted";
}


int main(){
    int arr[]={1,6,8,9,5};
    int n =5;                                // This main function the array is declared before only in the main function // 
    
  if(issorted(arr,n))
    cout<<"Array is sorted";
else
    cout<<"Array is not sorted";
}
