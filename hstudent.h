#include "fstream.h"
class StuInfor
{
protected:
	char xsxm[11];
	char xb[3];
	char xh[13];
	char xy[10];
	char keyword[11];
public:
	StuInfor()
	{
		strcpy(xsxm,"无名氏");
		strcpy(xb,"无");
		strcpy(xh,"100000000000");
		strcpy(xy,"重庆交通大学");
		strcpy(keyword,"000000");
	}
	void set(CString na,CString se,CString num,CString sch)
	{
		strcpy(xsxm,na);
		strcpy(xb,se);
		strcpy(xh,num);
		strcpy(xy,sch);
	}
	void setname(CString na)
	{strcpy(xsxm,na);}

	void setxb(CString se)
	{strcpy(xb,se);}

	void setxh(CString num)
	{strcpy(xh,num);}

	void setxy(CString sch)
	{strcpy(xy,sch);}

	void setkeyword(CString key)
	{strcpy(keyword,key);}

	char *getname()
	{return xsxm;}
	char *getxb()
	{return xb;}
	char *getxh()
	{return xh;}
	char *getxy()
	{return xy;}
	char *getmm()
	{return keyword;}
};

