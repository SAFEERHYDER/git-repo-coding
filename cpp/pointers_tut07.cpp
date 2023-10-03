/* Pointers with Objects and Classes
Pointers can also point to objects, and you can use pointers to call methods and access properties
*/

#include<iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
};

int main() {
    MyClass obj(10);
    MyClass *ptr = &obj;
    cout << ptr->x; // Outputs 10
}
