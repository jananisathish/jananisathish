#include<iostream>
using namespace std;

class phone
{
	string p_name;
	string p_size;
	string p_storage;
	
	public:
		phone(string name,string size,string storage)
		{
		p_name = name;
		p_size = size;
		p_storage = storage;
	}
		
		void makecall()
		{
		cout<<"making call using "<<p_name<<endl;
}
		void receivingcall()
		{
		cout<<"receiving call using "<<p_name<<endl;
		}
};

int main()
{
	phone phone1("android","100mp","280gb");
	phone1.makecall();
	phone1.receivingcall();
	
	phone phone2("Iphone","1000mp","500gb");
	phone2.makecall();
	phone2.receivingcall();
	
	return 0;
}
