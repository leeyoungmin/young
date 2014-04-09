#include "StdAfx.h"
#include "cTeacher.h"

cTeacher::cTeacher(void)
{
}

cTeacher::~cTeacher(void)
{
}

void cTeacher::print()
{
	cout << m_sName << '\t' << m_sNum << '\t' << m_sSubobject << endl;
}

void cTeacher::input()
{
	cout << "¼±»ý´Ô ÀÌ¸§" << endl;
	cin >> m_sName;
	cout << "¼±»ý´Ô °ú¸ñ" << endl;
	cin >> m_sSubobject;
	cout << "¼±»ý´Ô Àü¹ø" << endl;
	cin >> m_sNum;
}