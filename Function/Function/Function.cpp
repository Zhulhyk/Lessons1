
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c;
		cout << "Enter first value(a) for function:" << endl;
		cin >> a;
		cout << "Enter second value(b) for function:" << endl;
		cin >> b;
		cout << "Enter thrid value(c) for function:" << endl;
		cin >> c;
		

			double discriminant = (b * b) - (4 * a * c);
			if (discriminant > 0) {
				double root1 = (-b + sqrt(discriminant)) / (2 * a);
				double root2 = (-b - sqrt(discriminant)) / (2 * a);
				cout << "x1 = " << root1 << "x2 = " << root2 << endl;
			}
			else if (discriminant == 0) {
				double root = -b / (2 * a);
				cout << "x1 =" << root << endl;
			}
			else {
				cout << "The equation has no real roots :(" << endl;
			}


}

