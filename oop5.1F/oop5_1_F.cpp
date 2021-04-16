#include "Long_private.h"
#include "Long_public.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string t;
	do {
		try {
			cout << " Log in: ";  getline(cin,t);
			////////////////// Public //////////////////////
			Long_public p1(t), p2(t);
			cout << " pair (a,b) - ?"; cin >> p1;
			cout << " ( a , b )";
			cout << p1;

			cout << " pair (c,d) - ?"; cin >> p2;
			cout << " ( c , d )";
			cout << p2;

			Pair x = p1 + p2;
			cout << "(a, b) + (c, d) = (a + c), (b + d)";
			cout << x;

			Long_public y = p1 * p2;
			cout << "(a, b) * (c, d) = (a * c), (b * d)";
			cout << y;

			Long_public z = p1 - p2;
			cout << "(a, b) - (c, d) = (a - c), (b - d)";
			cout << z;
		}
		catch (string s)
		{
			cout << s << endl;
			cout << " Рахуй сам " << endl;
		}
		
	} while (t != "123");

	////////////////// Private //////////////////////
	Long_private pair1, pair2;
	cout << " pair (a,b) - ?"; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - ?"; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Long_private a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;

	Long_private b = pair1 * pair2;
	cout << "(a, b) * (c, d) = (a * c), (b * d)";
	cout << b;

	Long_private c = pair1 - pair2;
	cout << "(a, b) - (c, d) = (a - c), (b - d)";
	cout << c;

	try { Pair t(-10, 4); }
	catch (MyException q) { cout << " Error [0] " << q.What() << endl; }

	try { Pair u(10, 4); }
	catch (exception& w) { cout << " Error [1] &  " << w.what() << endl; }

	try { Pair i(4, -10); }
	catch (bad_exception& e) { cout << " Error [2] & " << e.what() << " Second pair <= -10 " << endl; }

	try { Pair o(1, 10); }
	catch (bad_exception* r) { cout << " Error [3] * " << r->what() << " Second pair >= 10 " << endl; }

	return 0;
}