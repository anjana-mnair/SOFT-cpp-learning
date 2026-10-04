#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a>b) cout << "largest is: " << a;
    else if(b>a) cout << "largest is: " << b;
    else cout << "Both are equal";
    
    return 0;
}