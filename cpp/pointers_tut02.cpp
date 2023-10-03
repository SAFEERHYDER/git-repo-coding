// Pointer to Pointer
/*A pointer can also point to another pointer, known as double pointer.*/

#include <iostream>

using namespace std;

int main(){
    int a = 10;         
    int *ptr_a = &a;     
    int **ptr_ptr_a = &ptr_a;

    cout << "the addres of the single pointer is " << ptr_a << endl;
    cout << "the addres of the double pointer is " << ptr_ptr_a;


}