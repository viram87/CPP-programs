#include <iostream>
using namespace std;

int main()
{


    float n1, n2;

    cout << "input first numbers :";
    cin >> n1 ;

    cout << "input second number :";
    cin >> n2;


    char op;
    cout << "input an operator :";
    cin >> op;
 
    switch (op)
    {
    case '+'/* constant-expression */:
        cout << n1 + n2;
        break;

     case '-'/* constant-expression */:
        cout << n1 - n2;
        break;
    case '*'/* constant-expression */:
        cout << n1 * n2;
        break;
    case '/'/* constant-expression */:
        cout << n1 / n2;
        break;

    
    
    default:
        break;
    }

    return 0;

}