#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double marks;
    cout<<"Enter your name: ";
    cin >>name;
    cout<<"Enter your age: ";
    cin >>age;
    cout<<"Enter your marks out of 500 :";
    cin >>marks;
     double percentage=(marks/500)*100;
    cout<<"\n--- STUDENT PROFILE---"<<endl;
    cout<<"name: "<< name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"marks: "<<marks<<endl;
    cout<<"percentage:"<<percentage<<" % "<<endl;
    // Write C++ code here

    
    return 0;
}
