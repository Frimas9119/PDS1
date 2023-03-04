#include <iostream>
using namespace std;

void first();
void second();

int main()
{
	first();
	second();

}

void first() {

	bool q, p;
	cout << "q: ";
	cin >> q;
	cout << "p: ";
	cin >> p;

	cout << " AND " << endl;
	cout << (p && q) << endl;

	cout << " OR " << endl;
	cout << (p || q) << endl;

	cout << " XOR " << endl;
	cout << (p ^ q) << endl;

	cout << " p -> q " << endl;
	cout << (!p || q) << endl;

	cout << " q -> p " << endl;
	cout << (!q || p) << endl;

	cout << " p ~ q " << endl;
	cout << ((!p || q) && (!q || p)) << endl;

}

void second() {
	string a = "11100010";
	string b = "10101010";
	int n = a.length();

	string x = "", y = "", z = "";
	char c;
	bool a1, b1, c1;
	for (int i = 0; i < n; i++) {
		a1 = (a[i] == '1');
		b1 = (b[i] == '1');

		c1 = (a1||b1);
		c = c1 ? '1' : '0';
		x = x + c;
		c1 = (a1 && b1);
		c = c1 ? '1' : '0';
		y = y + c;
		c1 = (a1 != b1);
		c = c1 ? '1' : '0';
		z = z + c;
	}
	cout << "a =   " << a << endl;
	cout << "b =   " << b << endl;
	cout << "a||b= " << x << endl;
	cout << "a&&b= " << y << endl;
	cout << "a^b=  " << z << endl;
}