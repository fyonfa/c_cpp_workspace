#include <iostream>
using namespace std;

class Student //name, roll, marks
{
    private:
        //Declaring private variables:
        string name;
        int roll;
        int mathMarks, phyMarks, chemMarks;
    public:
        //declaring constructor, default, it will assign 0 to all the arguments.
        Student(int roll, string name, int math, int phy, int che)
        {
            this->roll = roll;
            this->name = name;
            mathMarks = math;
            phyMarks = phy;
            chemMarks = che;
        }
        //Return the total of the marks
        int total()
        {
            return mathMarks+phyMarks+chemMarks;
        }
        //return A, B or C depending of the grade of the student´s grade
        char grade()
        {
            float average = total()/3;
            if(average > 60)
                return 'A';
            else if(average >=40 && average <60)
                return 'B';
            else 
                return 'C';
        }
};

int main()
{
    int roll;
    string name;
    int m, p, c;
    cout<<"Enter Roll number of a Student: ";
    cin >> roll;
    cout<<"Enter Name of a Student: ";
    cin>>name;
    cout<<"Enter marks in 3 subjects: ";
    cin>>m>>p>>c;
    Student s(roll, name, m, p, c);
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;
}