// This program demonstrates the use of pointers in C++
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a = 10;
    int *aptr;
    aptr= &a;
    
    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<&a<<endl;
    return 0;
}