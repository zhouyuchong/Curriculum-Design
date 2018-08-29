class Account
{
private:
	int zhanghu;
	char keyw[11];
public:
	void setkeyw(CString key)
	{strcpy(keyw,key);}
	char *getkeyw()
	{return keyw;}
};
