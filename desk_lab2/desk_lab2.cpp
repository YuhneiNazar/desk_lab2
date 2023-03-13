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
	cout << ("|p|     |q|     |r|     |p v (q -> r)|") << endl;
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
				cout << (result ? "|      1     |\t" : "|      0     |\t");
				cout << endl;
			}
		}
	}
}
