#include "StdAfx.h"
#include "cHumanMgr.h"
#define HUMMANMAX 10



cHumanMgr::cHumanMgr(void)
{
}

cHumanMgr::~cHumanMgr(void)
{
}

void cHumanMgr::CreateStudent()
{
	m_pHuman[m_nCnt] = new cStudent;
	m_pHuman[m_nCnt]->input();
	m_nCnt++;

 }

void cHumanMgr::CreateTeacher()
{
	m_pHuman[m_nCnt] = new cTeacher;
	m_pHuman[m_nCnt]->Input();
}

void cHumanMgr::Delete()
{
	for (int i=0; i<HUMMANMAX; ++i)
	{		
		m_pHuman[i]->print(i)
	
	}
}

void cHumanMgr::Print()
{

}

void cHumanMgr::Updata()
{
	while (true)
	{
		MENU();
	}
	
}

void cHumanMgr::Mune()
{
	
		cout << "=========================" << endl;
		cout << "1. �л��߰�" << endl;
		cout << "2. �����߰�" << endl;
		cout << "3. ����" << endl;
		cout << "4. ���" << endl;
		cout << "5. ����" << endl;
		cout << "6. �ε�" << endl;
		int input;
		cin>> input ;
	
}