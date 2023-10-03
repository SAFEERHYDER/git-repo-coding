/* Dynamic Memory Allocation
Pointers can be used for dynamic memory allocation using new and delete */

#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;         // allocate memory for the integar variable
    *ptr = 10;                  // assign the value to the allocated memory
    cout << *ptr << endl;       //  print the value  
    delete ptr;                 // free the allocated memory
    cout << *ptr;               // print the value again
}