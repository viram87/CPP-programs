#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout << "how many elements you want to enter :";
    cin >> n;

    cout << "enter your elements : " << endl;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n ; i++){

        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "maximum element is "  << maxNo << "  " <<endl << "minimum element is " << minNo << endl;
    return 0;
}