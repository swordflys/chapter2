#include "chapter2.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i{ 0 }, &r{ i };			//��ʼֵΪ����ʱ��auto������Ϊ���ö����ֵ
	auto a{ r };

	const int ci{ i }, &cr{ ci };	//auto���Զ���const�������ײ�const
	auto b{ ci };					//����const������
	auto c{ cr };					//����const������
	auto d{ &i };
	auto e{ &ci };					//�ײ�const������
	const auto f{ ci };				//��ȷָ��auto������const

	auto &g{ ci };
//	auto &h{ 42 };					//auto�����Զ��ƶϳ�const����
	auto const &j{ 42 };			//const auto &j{ 42 };

	auto k{ ci }, &l{ i };
	auto &m{ ci }, *p{ &ci };
//	auto &n{ i }, *p2{ &ci };		//���������б��У���auto������ʼ���Ƶ�Ϊͬһ����

	const int &cir{ ci }, *cip{ &ci };
	decltype(ci) x{ 0 };
	decltype(cir) y{ x };
//	decltype(cir) z;				//�����ʼ��
	decltype(cir + 0) z1;
//	decltype(*cip) z3;				//�����ʼ��
//	decltype((ci)) z4;				//�����ʼ��

	cin >> interrupt;

	return 0;
}