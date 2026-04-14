#include<iostream>
#include"singleton.h"


using std::cout;
using std::endl;

int main()
{
	//Singleton::GetInstance()->m_A = 10;
	//cout << Singleton::GetInstance()->m_A = 10) << endl;

	cout << (Singleton::GetInstance()->m_A = 10) << endl;

	return 0;
}