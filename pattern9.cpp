#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <=n;i++){
        for (int j = 1; j < n-i+1; j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            cout << k << " ";
        }

        cout << endl;
        }
}

//     1 
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5