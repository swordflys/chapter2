
#include "chapter2.h"

using std::cin;
using std::cout;
using std::endl;

int main ( )
{
	int a{ 123 };
	int &r{ a };
	int *p{ &a };
	int **pp{ &p };

	int &r1{ a };
	int &r2{ r };
	int &r3{ *p };

	int *p1{ &a };
	int *p2{ &r };
	int *p3{ p };

	int *&r4{ p2 };//int*型指针的引用
//	int &*r5(a);//指向int&型引用的指针
//	int &&r6(&a);

	int **pp1{ &p1 };
	int **pp2{ &p2 };
	int **pp3{ &p3 };

	cout << a << " " << r << " " << p << " " << endl
		<<r1 << " " << r2 << " " << r3 << " " << endl
		<< p1 << " " << p2 << " " << p3 << " " << endl
		<< *p1 << " " << *p2 << " " << *p3 << " " << endl
		<< r4 << " " << endl
		<< pp << " " << pp1 << " " << pp2 << " " << pp3 << " " << endl
		<< *pp << " " << *pp1 << " " << *pp2 << " " << *pp3 << " " << endl
		<< **pp << " " << **pp1 << " " << **pp2 << " " << **pp3 << " " << endl
		<< endl;

	cin >> r1;

}