#pragma once

class cHuman
{
public:
	string m_sName;
	string m_sNum;
public:
	cHuman(void);
	virtual ~cHuman(void);

	virtual void Input();
	virtual void Print();//¿Á¡§¿«
};
