#include "chapter2.h"

using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::dec;

int main(void)
{
	typedef char * charptr;
	char ch{ 'b' };
	char ch2{ 'c' };
	const charptr const_charptr{ &ch };	//����const
//	const_charptr = &ch2;	
	*const_charptr = ch2;
	const char *constchar_ptr{ &ch };	//�ײ�const
	constchar_ptr = &ch2;
//	*constchar_ptr = ch2;
	const charptr *constcharptrptr{ &const_charptr };
	cout << dec << ch << '\t' << *const_charptr << '\t' << **constcharptrptr << endl;
	cout << dec << &ch << '\t' << const_charptr << '\t' << &const_charptr << '\t' << constcharptrptr << endl;

	typedef int * intptr;
	int i{ 666 };
	const intptr constintptr{ &i };
	const intptr *constintptrptr{ &constintptr };
	cout << dec << i << '\t' << *constintptr << '\t' << **constintptrptr << endl;
	cout << dec << &i << '\t' << constintptr << '\t' << &constintptr << '\t' << constintptrptr << endl;

	Sales_data val1, val2;
//	auto item{ val1 + val2 };	//δ����ṹ��Sales_data�ġ�+������



	cin >> interrupt;
	return 0;
}