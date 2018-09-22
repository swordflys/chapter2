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
	long long l = pow(2, 31);
	unsigned u = 10, u2 = 42, u3 = -32 + l, u4 = 0, u5 = 1, u6 = l- 32;
	for (unsigned i = 33; i != 0; i--)
	{
		long l = pow(2, i);
		long long ll = pow(2, i);
		cout << hex << l-1 << '\t' << dec << l-1 << '\t';
		cout << hex << ll - 1 << '\t' << dec << ll - 1 << endl;
	}
	cout << dec;
	cout << "unsigned" << sizeof(unsigned) << endl;
	cout << "int" << sizeof(int) << endl;
	cout << "long" << sizeof(long) << endl;
	cout << "long long" << sizeof(long long) << endl;

	cout << u2 - u << endl;

	cout << u - u2 << "\t" << u3 << "\t" << u6 << "\t" << u4 - u5 << endl;//-32+2^32

	cout  
//		<< hex
		<< "unsigned -1" << "\t" << (unsigned)-1 << '\t' << hex << (unsigned)- 1 << dec << endl
		<< "unsigned 2^32" << "\t" << (unsigned)l << '\t' << hex << (unsigned)l << dec << endl
		<< "int 2^32" << "\t" << (int)l << '\t' << hex << (int)l << dec << endl
		<< "long 2^32" << "\t" << (long)l << '\t' << hex << (long)l << dec << endl
		<< "long long 2^31" << "\t" << (long long)l << '\t' << hex << (long long)l << dec << endl
		<< "unsigned (2^32 - 1)" << "\t" << (unsigned)(l - 1) << '\t' << hex << (unsigned)(l - 1) << dec << dec << endl
		<< "unsigned (2^32 + 1)" << "\t" << (unsigned)(l + 1) << '\t' << hex << (unsigned)(l + 1) << dec << endl
		<< "unsigned (1 + 2^32)" << "\t" << (unsigned)(1 + l) << '\t' << hex << (unsigned)(1 + l) << dec << endl
		<< "unsigned (-1 + 2^32)" << "\t" << (unsigned)(-1 + l) << '\t' << hex << (unsigned)(-1 + l) << dec << endl;


	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;


	unsigned p = 5;
	int q = 5;
	for (unsigned i = 10; i != 0; i--,p--,q--) {
		cout << dec << p << '\t' << '\t' << q << '\t' << '\t';
		cout << hex << p << '\t' << '\t' << q << endl;
	}

	long long ll = pow(2, 33);
	cout << ll;

	cin >> ll;
	return 0;
}
