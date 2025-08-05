//Increment the Array Pointer
// This program demonstrates how to use pointers to access elements of an array in C++
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    
    int *ptr=arr;
    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    
   
    return 0;
}