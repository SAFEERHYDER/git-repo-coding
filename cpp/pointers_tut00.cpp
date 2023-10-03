// Declaring and Initializing Pointers
/*A pointer is a variable that stores the address of another variable.
The variable type that a pointer points to must be declared at the time of pointer variable declaration.*/

#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int *ptr_a; // declare
    ptr_a = &a; // initialize

    cout << "the value of a is " << a;
    cout << " and it is stored at " << ptr_a;

    return 0;
}