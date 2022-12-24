// ref: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>

using namespace std;

int main()
{
    
    int val=5;
    int* ptr;
    
    ptr = &val; // assign the memory address of val to pointer ptr
    
    cout << "address of var : " << &val << endl;
    cout << "address of ptr : " << ptr << endl;
    cout << "value of ptr : " << *ptr << endl;
    
    // modification
    *ptr = 7;
    cout << "value of val : " << val << endl;
    cout << "address of var : " << &val << endl;
    cout << "address of ptr : " << ptr << endl;
     cout << "value of ptr : " << *ptr << endl;
    
    return 0;
}
