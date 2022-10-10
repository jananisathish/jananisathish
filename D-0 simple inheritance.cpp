#include<iostream>
using namespace std;
class banking
{
public:
	void credit()
	{
		cout<<"im going to credit 5000 rupees"<<endl;
	}
	void debit()
	{
		cout<<"im going ton debit 3000 rupees"<<endl;
	}
};
class money: public banking
{
	public:
		void canceltransaction()
		{
			cout<<"im going to cancel the transaction"<<endl;
		}
};

int main()
{
	money money1;
	money1.credit();
	money1.debit();
	}


