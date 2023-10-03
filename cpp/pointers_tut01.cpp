// Dereferencing Pointers
/*Dereferencing a pointer means accessing the value stored in the memory location pointed by the pointer.*/

#include <iostream>

using namespace std;

int main(){
    int a;          
    a = 10;         
    int *ptr_a;     
    ptr_a = &a;     

    cout << "reading the value of a through pointer de-referencing " << endl;
    cout << "the value of the a is " << *ptr_a;


}