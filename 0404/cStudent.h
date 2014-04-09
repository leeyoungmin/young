#pragma once
#include "cHuman.h"

class cStudent : public cHuman
{
public:
	int m_nGrade;
public:
	cStudent(void);
	~cStudent(void);

	virtual void Input();
	virtual void Print();


};
