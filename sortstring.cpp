#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void sortString(string &str){
    sort(str.begin(), str.end());
    cout << str;
}

int main() {

    string s = "EXAMPLES";
    sortString(s);
    return 0;
}