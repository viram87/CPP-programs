#include<iostream>
#include<bits/stdc++.h>

int binaryToDecimal(int n) {

    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;

    }

    return ans;
}

int octalToDecimal(int n){

    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;

    }
    return ans;
}



using namespace std;

int main() {

    int n;
    cin >> n;


    cout << binaryToDecimal(n) << endl;
    cout << octalToDecimal(n) << endl;


}