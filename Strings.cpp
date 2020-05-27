#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a,b; // a = abcd  b = ef
    cin >> a >> b;

    cout << a.length() << " " << b.length() << endl;

    cout << a + b << endl;

    char c;
    c = a[0]; // c=a
    a[0] = b[0]; // a=e
    b[0] = c;

    cout << a << " " << b<< endl;


    return 0;
}
