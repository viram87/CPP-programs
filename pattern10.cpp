#include<iostream>
using namespace std;

int main() {

     int n;
    cin >> n;
    for (int i = 1; i <= n ; i++ ) {

        //for spaces
        for (int k = n; k > i; k--){
            cout << "  ";
            }

        //for first half (half triangle)
        int a = i;

        for (int j = 1; j <= i; j++)
        {
            cout << a-- << " ";
            }

        //for second half triagle
        for (int j = 2; j <= i; j++){
                cout << j << " ";
            }

                cout << endl;
    }


}

 
//          1 
//        2 1 2
//      3 2 1 2 3
//    4 3 2 1 2 3 4
//  5 4 3 2 1 2 3 4 5