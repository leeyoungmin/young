#include "StdAfx.h"
#include "cStudent.h"

cStudent::cStudent(void)
{
}

cStudent::~cStudent(void)
{
}

void cStudent::print()
{
	cout << m_sName << '\t' << m_sNum << '\t' << m_nGrade << endl;
}

void cStudent::Input()
{
	cout << "�л� �̸�" << endl;
	cin >> m_sName;
	cout << "�л� �г�" << endl;
	cin >> m_nGrade;
	cout << "�л� ����" << endl;
	cin >> m_sNum;
}