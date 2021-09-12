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
        cout << "A+B=" << a + b << "\nA-B=" << a - b << "\nAverage=" << (abs(a)+abs(b))/2;
    return 0;
}