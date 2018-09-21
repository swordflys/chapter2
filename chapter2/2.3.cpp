// chapter2.cpp: 定义应用程序的入口点。
//

#include "chapter2.h"

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::dec;

int main()
{
	long l = pow(2, 15);
	unsigned u = 10, u2 = 42, u3 = -32 + l, u4 = 0, u5 = 1, u6 = l- 32;

	
	cout << "unsigned" << sizeof(unsigned) << endl;
	cout << "int" << sizeof(int) << endl;
	cout << "long" << sizeof(long) << endl;
	cout << "long long" << sizeof(long long) << endl;

	if (u > 0)
	{
		u--;
		cout << u << endl;
	}

	cout << u2 - u << endl;

	cout << u - u2 << "\t" << u3 << "\t" << u6 << "\t" << u4 - u5 << endl;//-32+2^32

	cout  
//		<< hex
		<< "unsigned -1" << "\t" << (unsigned)-1 << endl
		<< "unsigned 2^32" << "\t" << (unsigned)l << endl
		<< "int 2^31" << "\t" << (int)l << endl
		<< "long 2^31" << "\t" << (long)l << endl
		<< "long long 2^31" << "\t" << (long long)l << endl
		<< "unsigned (2^32 - 1)" << "\t" << (unsigned)(l - 1) << endl
		<< "unsigned (2^32 + 1)" << "\t" << (unsigned)(l + 1) << endl
		<< "unsigned (1 + 2^32)" << "\t" << (unsigned)(1 + l) << endl
		<< "unsigned (-1 + 2^32)" << "\t" << (unsigned)(-1 + l) << endl;


	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;


	unsigned p = 50;
	int q = 50;
	for (unsigned i = 100; i != 0; i--,p--,q--) {
		cout << dec << p << '\t' << q << '\t';
		cout << hex << p << '\t' << q << endl;
	}

	long long ll = pow(2, 33);
	cout << ll;
	return 0;
}
