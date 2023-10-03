/*Pointers Arithmatic
Pointers can be incremented or decremented to point to different memory locations*/

#include<iostream>
using namespace std;

int main()
{
    int array_a [] = {1, 2, 3};
    int *a_pointer = array_a;   // no ampersand sign 

    cout << *a_pointer << endl;
    a_pointer++;
    cout << *a_pointer << endl;
    a_pointer++;
    cout << *a_pointer << endl;
 

}