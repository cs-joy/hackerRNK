// ref: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

void update(int* a, int* b)
{
    int num = *a;
    *a += *b;
    *b = abs(num - *b);
}


void introductionOfPointer()
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
}

int main()
{
    int n1, n2;
    int *pn1 = &n1;
    int *pn2 = &n2;
    
    cin >> n1 >> n2;
    update(pn1, pn2);
    cout << n1 << " " <<n2;
    
    return 0;
}
