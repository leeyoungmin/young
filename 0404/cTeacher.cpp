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
	cout << "������ �̸�" << endl;
	cin >> m_sName;
	cout << "������ ����" << endl;
	cin >> m_sSubobject;
	cout << "������ ����" << endl;
	cin >> m_sNum;
}