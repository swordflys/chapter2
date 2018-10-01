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

	int const ic{ 456 };	//等同于const int
	int const *icptr{ &ic };	//等同于const int *
	int const *icptr1{ ++icptr };	//等同于const int *

	int i{ 789 };
	int *const iptr{ &i };	//是否等同于引用？？
	int &iref{ i };
//	int *const icptr3{ ++icptr2 };	顶层const，指针icptr2是常量
	cout << i << '\t' << *iptr << '\t' << iref << endl;
	cout << &i << '\t' << iptr << '\t' << &iref << endl << endl;

//	int const &icref{ ci };	等同于const int &
	const int &ciref{ ci };
	int & const icref = i ;	//使用了记时错误: 忽略引用上的限定符
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

//函数体内定义constexpr
const int* interconstexpr( )
{
	const int interref{ 666 };
	cout << &interref << '\t';
    const int *ref{&interref};
	return ref;

};