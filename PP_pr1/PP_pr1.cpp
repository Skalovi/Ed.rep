#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Number A: ";
        cin >> a;
    cout << "Number B: ";
        cin >> b; 
        cout << "A+B = " << a + b << "\nA-B = " << a - b << "\nAverage = " << (abs(a)+abs(b))/2 << "\nA*B=" << a * b << "\nA/B=" << 1.0 * a / b;
    return 0;
}