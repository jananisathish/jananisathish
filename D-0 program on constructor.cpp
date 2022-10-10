#include <iostream>
using namespace std;
class employee {
    int id;
    char name[20];
    double salary;
public:
    employee()
    {
        cout << "Enter the idno:";
        cin >> id;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the salary:";
        cin >> salary;
    }
 
    void display()
    {
        cout << endl << id << "\t" << name << "\t" << salary;
    }
};
int main()
{
    employee e; 
    e.display();
    return 0;
}

