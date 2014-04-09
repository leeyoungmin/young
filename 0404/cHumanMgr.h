#pragma once
#define HUMMANMAX 10
#include "cHuman.h"
enum MENU
{
	MENU_CREAT-S = 0,
	MENU_CREAT-T = 0,
	MENU_DELETE ,
	MENU_PRINT ,
	MENU_SAVE ,
	MENU_LODE
};
class cHumanMgr
{
private:
	cHuman* m_pHuman[HUMMANMAX];
	int m_nCnt;
public:
	cHumanMgr(void);
	~cHumanMgr(void);

	void Setup();
	void Mune();


	void Setup();
	void Updata();
	
private:
	void CreateStudent();
	void CreateTeacher();
	void Delete();
	void Clear();
	void Print();
};
