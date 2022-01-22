#include <iostream>
#include <math.h>
using namespace std;

void discriminant(int, int, int);

int main()
{
	float a, b, c;
	cout << "enter a, b, c\n";
	cin >> a >> b >> c;
	cout << "result:\n";
	discriminant(a, b, c);


	return 0;
}

void discriminant(int x, int y, int z) {
	float x0, x1, x2, d;
	d = y * y - 4 * x * z;
	if (d < 0) cout << "no result";
	else if (d == 0) {
		x0 = (-y) / (2 * x);
		cout << "x = " << x0 << endl;
	}
	else if (d > 0) {
		x1 = (-y + pow(d, 0.5)) / (2 * x);
		x2 = (-y - pow(d, 0.5)) / (2 * x);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}