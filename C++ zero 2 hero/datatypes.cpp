#include <iostream>
using namespace std;

int main() {
    int a = 123;
    cout << a << endl;

    char b = 'v';  // Use single quotes for char
    //only single character is allowed in quotes, 'ab' is invalid
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2f;  // It's good practice to use 'f' suffix for float literals
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(d);
    cout << "Size of d is " << size << " bytes" << endl;

    return 0;
}
