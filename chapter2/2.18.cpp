
#include "chapter2.h"

using std::cin;
using std::cout;
using std::endl;

int main ( )
{
	int a(123);
	int &r(a);
    int *p(&a);

	int &r1(a);
	int &r2(r);
	int &r3(*p);

	int *p1(&a);
	int *p2(&r);
	int *p3(p);

	int *&r4(p2);
	int *&r5(&a);

	cout << a << " " << p1 << " " << r1 << " " << r2 << " " << p2 << " " << p3 << endl;

	cin >> r1;

}