#include <iostream>
using namespace std;
int main()
{
    int  num1, num2;
    cout << "Enter a first number:" << endl;
    cin >> num1;
    cout << "Enter a second number:" << endl;
    cin >> num2;

    if (num1 > 0 and num2 > 0) {
        cout << "Evrething good" << endl;
        int c = 1 / 2 * num1 * num2;
        cout << c << endl;
    }
    else {
        cout << "Problem :(" << endl;
    }

    return 0;
} êâ³ 