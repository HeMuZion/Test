#pragma once
class Singleton_other
{
private:
	Singleton_other() = default;
	~Singleton_other() = default;

public:
	//	객체 얻기
	static Singleton_other* GetInstance();
	///////////////////////////////////////////////////////////////////

	// 데이터나 기능
	int m_A = 0;
};
