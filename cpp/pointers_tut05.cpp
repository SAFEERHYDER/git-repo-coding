/* Pointers with functions
Pointers can be passed to functions, 
allowing the function to modify the actual content of the argument used to call the function.
*/

#include <iostream>
using namespace std;

void increment (int *ptr)
{
    
    (*ptr)++;

}

int main()
{

    int a = 10;
    increment(&a);
    cout << a;

}
