/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int Secondlar(vector<int>& arr) {
    int first = INT_MIN;
    int second = INT_MIN;

    for(int x : arr){
        if(x > first){
            second = first;
            first = x;
        }
        else if(x > second && x != first){
            second = x;
        }
    }
    return second;
}

int main(){
    vector<int> arr = {10, 20, 5, 8, 25};

    cout << Secondlar(arr);

    return 0;
}*/




#include <iostream>
using namespace std;
int main(){
int arr[]={6,8,3,9,15};
int n=sizeof (arr)/sizeof(arr);
int largest = INT_MIN;
int secondlargest=INT_MIN;

int smallest=INT_MIN;
int secondsmallest=INT_MIN;



//second largest

for (int i=0;i<n;i++){
    if (arr[i]>largest){
    secondlargest=largest;
    largest = arr[i];

    }
    else if(arr[i]> secondlargest && arr[i] != largest){
        secondlargest =arr[i];
    }

    //second smallest
    if(arr[i]<smallest){
        secondsmallest= smallest;
        smallest= arr[i];

    }
    else if (arr[i]<secondsmallest && arr[i] !=smallest){
        secondsmallest=arr[i];
    }
}
cout<<"Second largest =" <<  secondlargest << endl;
cout<<"Second smallest=" <<  secondsmallest << endl;
return 0;
}