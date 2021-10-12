#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key){

    for (int i = 0; i < n; i++ ){
        if(arr[i] == key){
            return i; 

        }
    }

    return -1;
     
}

int main() {
    int n;
    cout << "enter number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "enter elements one by one " << endl;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "enter the key you want to search: " << endl;
    cin >> key;

    cout << "key find at index no."  << linearSearch(arr, n, key);

    return 0;

}