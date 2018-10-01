#include "chapter2.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i{ 0 }, &r{ i };			//初始值为引用时，auto的类型为引用对象的值
	auto a{ r };

	const int ci{ i }, &cr{ ci };	//auto忽略顶层const，保留底层const
	auto b{ ci };					//顶层const被忽略
	auto c{ cr };					//顶层const被忽略
	auto d{ &i };
	auto e{ &ci };					//底层const被保留
	const auto f{ ci };				//明确指出auto类型是const

	auto &g{ ci };
//	auto &h{ 42 };					//auto不会自动推断出const类型
	auto const &j{ 42 };			//const auto &j{ 42 };

	auto k{ ci }, &l{ i };
	auto &m{ ci }, *p{ &ci };
//	auto &n{ i }, *p2{ &ci };		//在声明符列表中，“auto”必须始终推导为同一类型

	const int &cir{ ci }, *cip{ &ci };
	decltype(ci) x{ 0 };
	decltype(cir) y{ x };
//	decltype(cir) z;				//必须初始化
	decltype(cir + 0) z1;
//	decltype(*cip) z3;				//必须初始化
//	decltype((ci)) z4;				//必须初始化

	cin >> interrupt;

	return 0;
}