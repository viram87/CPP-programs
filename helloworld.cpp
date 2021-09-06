#include <iostream>
using namespace std;

int main()
{

    int p;

    cin >> p;

    int i;

    for (i = 2; i < p; i++ ){   
        if(p % i == 0) {
            cout << "it is not prime" << endl;
            break;
        }
    }

    if(i == p ){
        cout << "it is a prime number " << endl;
    }
}