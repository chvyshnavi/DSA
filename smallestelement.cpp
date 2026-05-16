#include <iostream>
using namespace std;

int main(){
    int arr[]= {10,5,7,4,3,2};
    int n= sizeof(arr) / sizeof (arr[0]);
    int smallest =arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]<smallest)
        {
            smallest = arr[i];

        }
    }
    cout<< "Smallest element is:"<<smallest;
return 0;
}










