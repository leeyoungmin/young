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
	cout << "학생 이름" << endl;
	cin >> m_sName;
	cout << "학생 학년" << endl;
	cin >> m_nGrade;
	cout << "학생 전번" << endl;
	cin >> m_sNum;
}