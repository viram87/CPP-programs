#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    int cubesquare = 0;

    int temp = n;


    while ((n > 0))
    {
        int ld = n % 10;
        cubesquare +=  ld *ld * ld;
        n = n / 10; 
    }



   if(temp == cubesquare){
       cout << "it is amstrong number";
   }

   else{
       cout << "it is not armstrong number ";

   }
}