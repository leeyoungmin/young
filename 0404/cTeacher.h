#pragma once
#include "cHuman.h"

class cTeacher : public cHuman
{
public:
	string m_sSubobject;
public:
	cTeacher(void);
	~cTeacher(void);

	virtual void Input();
	virtual void Print();
};
