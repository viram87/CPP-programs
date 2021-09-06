//print all prime numbers till n 

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        int j;
        for (j = 2; j < i; j++) 
        {

            if (i % j == 0)
            {

                break;
            }
        }

        if (j == i)
        {
            cout << i << endl;
        }
    }
}