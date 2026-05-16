#include <iostream>
using namespace std;
int removeduplicates(int arr[], int n){
    int i=0;
    for (int j=0;j<n;j++){

    if(arr[i]!=arr[j]){
    i++;
    arr[i]=arr[j];
    }
}

return i+1;
}

int main(){
    int arr[]={1,9,5,6,1,8};
    int n=6;
    int newlength =removeduplicates(arr,n);
    cout<< "Array after removing duplicates:";
    for (int i=0;i<newlength;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
