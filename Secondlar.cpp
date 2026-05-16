#include<iostream>
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
}