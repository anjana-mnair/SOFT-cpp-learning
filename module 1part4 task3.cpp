#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"enter the marks: ";
    cin>>marks;
    if (marks<0||marks>100)
        cout<<"invalid";
    
       else if (marks>=40)
         cout<<"pass";
     else
         cout<<"fail";
    
    return 0;
}
