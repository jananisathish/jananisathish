#include<iostream>

using namespace std;
class cafeConstruction   //created a class called CafeConstruction
{
	public:
	double l,b,h;        //declaring the variables l,b,h l=length,b=breadth,h=height;
	double TotalArea()
	{
		return l*b;
	}
	double TotalVolume()
	{
		return l*b*h;
	}
};
int main()
{
	cafeConstruction shop;     //Created an object
//assigning values 	
	shop.l=65.9;
	shop.b=34.5;
	shop.h=20.6;
	
	cout << "Area of cafe cofee shop = "<< shop.TotalArea() << endl;
	cout << "volume of cafe coffee shop = "<<shop.TotalVolume() << endl;
	
	return 0;
}
