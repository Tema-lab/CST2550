#include <iostream>

using namespace std;
int main() {
    double value = 2.4; // variable of type double
    double *p_Val = &value; // pointer to a double value

    cout << "Variable: " << value
         << " address: " << &value
         << " Pointer: " << p_Val << "\n"
         << "Dereference: " << *p_Val
         << " address: " << &p_Val << "\n";
    return 0;
}
