#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {

    long n , r;
    cout << "enter value of n and r :";
    cin >> n >> r;

    long ans = fact(n) / (fact(r) * fact(n - r));

    cout << ans;

    return 0;
}