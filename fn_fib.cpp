#include<iostream>
using namespace std;

void fib(int n) {

    long a = 0;
    long b = 1;
    long next;

    for (int i =1; i <= n; i++)
    {
        cout << a << endl;
        next = a + b;
        a = b;
        b = next; 
    }

    return;
}



int main() {

    int n;
    cin >> n;
    fib(n);

    return 0;
} 