#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int input, a, b, c, e, r;
	float f, g, h, i, j, k, z;

start:
	input = 0;
	a = 0;
	b = 0;
	c = 0;
	e = 0;
	r = 0;
	f = 0.0;
	g = 0.0;
	h = 0.0;
	i = 0.0;
	j = 0.0;
	k = 0.0;
	z = 0.0;

	cout << "What would you like to do?" << endl << "1. Add" << endl << "2. Subtract" << endl << "3. Multiply" << endl << "4. Divide" << endl << "5. Exponential Multiplication" << endl << "6. Fractile Multiplication" << endl;
	cin >> input;
	switch (input) {
	case 1:
		goto add;
		break;
	case 2:
		goto sub;
		break;
	case 3:
		goto mult;
		break;
	case 4:
		goto div;
		break;
	case 5:
		goto exp;
		break;
	case 6:
		goto frac;
		break;
	default:
		cout << "Invalid input, please try again." << endl;
		goto start;
		break;
	}
add:
	cout << "Please enter the first number." << endl;
	cin >> a;
	cout << "Please enter the second number." << endl;
	cin >> b;
	c = a + b;
	cout << "The sum of the two numbers is: " << c << endl;
	goto end;
sub:
	cout << "Please enter the first number." << endl;
	cin >> a;
	cout << "Please enter the number to subtract from the previous number." << endl;
	cin >> b;
	c = a - b;
	cout << "The difference between the two nunbers is: " << c << endl;
	goto end;
mult:
	cout << "Please enter the first number." << endl;
	cin >> a;
	cout << "Please enter the second number." << endl;
	cin >> b;
	c = a * b;
	cout << "The product of the two numbers is: " << c << endl;
	goto end;
div:
	cout << "Please enter the number to divide from." << endl;
	cin >> a;
	cout << "Please enter the number to divide by." << endl;
	cin >> b;
	if (b == 0) {
		cout << "You cannot divide by zero!" << endl;
		goto div;
	}
	c = a / b;
	r = a % b;
	cout << "The answer is: " << c << ", with a remainder of " << r << endl;
	goto end;
exp:
	cout << "Enter the base number." << endl;
	cin >> a;
	cout << "Enter the exponent to raise it to." << endl;
	cin >> e;
	b = a * a;
	--e;
	--e;
	while (e > 0) {
		b = b * a;
		--e;
	}
	cout << "The answer is: " << b << endl;
	goto end;
end:
	cout << "Perform another operation? 1 = Yes, 2 = No." << endl;
	cin >> a;
	switch (a) {
	case 1:
		goto start;
		break;
	case 2:
		goto stop;
		break;
	default:
		cout << "Invalid input, please try again." << endl;
		goto end;
		break;
	}
// The below section is still bugged. Decimals not displaying correctly. Needs to display to 2 decimal points.
frac:
	cout << "Enter the numerator of the first fraction." << endl;
	cin >> f;
	cout << "Enter the denominator of the first fraction." << endl;
	cin >> g;
	cout << "Enter the numerator of the second fraction." << endl;
	cin >> h;
	cout << "Enter the denominator of the second fraction." << endl;
	cin >> i;
	if (g == 0 || i == 0) {
		cout << "A fraction cannot have a zero denominator!" << endl;
		goto start;
	}
	j = f / g;
	k = h / i;
	z = j * k;
	cout << "The answer is: " << setprecision(2) << z << endl;
	goto end;
stop:
	cout << "Thank you for testing!" << endl;
	system("pause");
}