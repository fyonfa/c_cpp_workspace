#include<iostream>
using namespace std;
//main class
class Employee
{
    private:
        int eid;
        string name;
    public:

        Employee(int e, string n)
        {
            eid=e;
            name=n;
        }
        int getEmployeeID(){return eid;}
        string getName() {return name;}

};
//derived from Employee
class FulltimeEmployee:public Employee
{
    private:
        int salary;
    public:
        FulltimeEmployee(int e, string n, int sal):Employee(e,n)
        {
            salary=sal;
        }
        int getSaary(){return salary;}

};
//derived from employee
class ParttimeEmployee:public Employee
{
    private:
        int wage;
    public:
    ParttimeEmployee(int e, string n, int w):Employee(e,n)
    {
        wage = w;
    }
    int getWage(){ return wage;}

};

int main()
{
    ParttimeEmployee p1(1, "John", 300);
    FulltimeEmployee p2(2, "Raj", 5000);

    cout << "Salary of"<<p2.getName()<<" is"<<p2.getSaary()<<endl;
    cout<< "Daily wage of "<<p1.getName()<<" is"<<p1.getWage()<<endl;
}