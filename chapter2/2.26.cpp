#include "chapter2.h"

using std::cin;
using std::cout;
using std::endl;

const int *interconstexpr();

int main ( )
{
	const int ci{ 123 };
	const int *ciptr{ &ci };
	const int *ciptr1{ ++ciptr};
	cout << ci << '\t' << ciptr << '\t' << ciptr1 << endl;
	cout << &ci << '\t' << *ciptr << '\t' << *ciptr1 << endl << endl;

	int const ic{ 456 };	//��ͬ��const int
	int const *icptr{ &ic };	//��ͬ��const int *
	int const *icptr1{ ++icptr };	//��ͬ��const int *

	int i{ 789 };
	int *const iptr{ &i };	//�Ƿ��ͬ�����ã���
	int &iref{ i };
//	int *const icptr3{ ++icptr2 };	����const��ָ��icptr2�ǳ���
	cout << i << '\t' << *iptr << '\t' << iref << endl;
	cout << &i << '\t' << iptr << '\t' << &iref << endl << endl;

//	int const &icref{ ci };	��ͬ��const int &
	const int &ciref{ ci };
	int & const icref = i ;	//ʹ���˼�ʱ����: ���������ϵ��޶���
	cout << icref << '\t' << ciref << '\t' << &icref << '\t' << &ciref << '\t'<< endl <<endl;

	int cexpr0{ 0 };
	constexpr int cexpr1{ 0 };
//  const int cexpr2{ 222 };
	constexpr int cexpr2 = {0};
	const int *cexpr3 = interconstexpr();
	cout << cexpr3 << '\t' << endl;
	int *nullptr0{nullptr};
	int *nullptr1{ NULL };
	int *nullptr2{};
	int *nullptr3{ cexpr1 };
	int *nullptr4{ cexpr2 };
//	int *nullptr5{ cexpr3 };
	cout << cexpr3 << endl;

	cin >> interrupt;
	return 0;
}

//�������ڶ���constexpr
const int* interconstexpr( )
{
	const int interref{ 666 };
	cout << &interref << '\t';
    const int *ref{&interref};
	return ref;

};