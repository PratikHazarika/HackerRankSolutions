#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a{0}, b{0}, c{0};
    cin >> a >> b >> c;

    if ( 1 <= a <= 100 and 1 <= b <= 100 and 1 <= c <= 100 )  
    {
        cout << (a + b + c) << endl; 
    }
    return 0;
}