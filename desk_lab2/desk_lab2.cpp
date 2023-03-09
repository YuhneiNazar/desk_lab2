#include <iostream>
#include <string>

using namespace std;

void fun();

int main()
{
	fun();

}

void fun() {
	bool p, q, r;
	int i;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter p: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	p = i == 1;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter q: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	q = i == 1;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter r: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	r = i == 1;

	cout << ("|p|     |q|     |r|     |f|") << endl;
	for (int h = 0; h < 2; h++) {
		p = (h == 0) ? false : true;
		for (int j = 0; j < 2; j++) {
			q = (j == 0) ? false : true;
			for (int k = 0; k < 2; k++) {
				r = (k == 0) ? false : true;
				bool result = p || (!q || r);
				cout << (p ? "|1|\t" : "|0|\t");
				cout << (q ? "|1|\t" : "|0|\t");
				cout << (r ? "|1|\t" : "|0|\t");
				cout << (result ? "|1|\t" : "|0|\t");
				cout << endl;
			}
		}
	}
}
