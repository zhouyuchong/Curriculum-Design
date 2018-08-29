#include "hstudent.h"
#include "fstream"
class Dormitory:public StuInfor
{
private:
	int BedNum;
	int DomNum;
	int SearchDomNum;
	double balance;
public:
	Dormitory()
	{DomNum=102;BedNum=1;balance=100.0;}
	void SetDomNum(int bed,int dom)
	{
		DomNum=dom;
		BedNum=bed;
	}
	int getDomNum()
	{return DomNum;}
	int getBedNum()
	{return BedNum;}
	void setSerchDom(int n)
	{SearchDomNum=n;}
	int getSerchDom()
	{return SearchDomNum;}
	double getBalance()
	{return balance;}
};


