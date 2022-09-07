#include<iostream>
using namespace std;

class student
{
	string s_name;
	int  s_rno;
	double s_mark;
	double s_average;
	
	public:
		phone(string name,int rno,double mark,double average)
		{
		s_name = name;
		s_rno = rno;
		s_mark = mark;
		s_average=average;
	}
		
		void mark()
		{
		cout<<"Total mark of student is  "<<s_mark<<endl;
}
		void average()
		{
		cout<<"Total average of student is "<<s_average<<endl;
		}
};

int main()
{
	student student1("vijay",1,66.67,33.1)
	student1.mark();
	student1.average();
	
	student student2("seenu",2,52.98,27.5);
	student2.mark();
	student2.average();
	
	return 0;
}
