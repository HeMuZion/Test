#include "Singleton_other.h"

Singleton_other* Singleton_other::GetInstance()
{
	//데이터 영역에 먼저 올라간다.
	static Singleton_other pInstance;

	//이 함수는 접근 가능
	return &plnstance;
}