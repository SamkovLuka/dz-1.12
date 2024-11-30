#include <iostream>
#include "Drib.h"
#include "Complex.h"
using namespace std;

int main()
{
//zavd1

    Drib d1(1, 2);
    Drib d2(3, 4);

    Drib sum = d1 + d2;

    cout << "First fraction: ";
    d1.Show();

    cout << "Second fraction: ";
    d2.Show();

    cout << "Sum: ";
    sum.Show();



//zavd2

Complex c1, c2;
cout << "Enter the first complex number:" << endl;
cin >> c1;
cout << "Enter the second complex number:" << endl;
cin >> c2;
Complex sum = c1 + c2;
Complex diff = c1 - c2;
Complex prod = c1 * c2;
Complex quot;

try {
    quot = c1 / c2;
}
catch (const runtime_error& e) {
    cerr << e.what() << endl;
}

cout << "\nResults:" << endl;
cout << "c1: " << c1 << endl;
cout << "c2: " << c2 << endl;
cout << "Sum: " << sum << endl;
cout << "Difference: " << diff << endl;
cout << "Product: " << prod << endl;
if (c2.real != 0 || c2.imag != 0) {
    cout << "Quotient: " << quot << endl;
}

}


