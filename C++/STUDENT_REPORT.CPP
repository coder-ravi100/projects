#include <iostream>
// #include<mysql.h>
// #include<mysql_error.h>
#include <windows.h>
#include <sstream>
using namespace std;

const char *HOST = "localhost";
const char *USER = "root";
const char *PW = "your password";
const char *DB = "mydb";

class student
{
private:
    string Name;
    int RollNo;
    char Grade;
    float Avg;

public:
    student(string name, int rollno, char grade, float avg)
    {
        Name = name;
        RollNo = rollno;
        Grade = grade;
        Avg = avg;
    }
    SetData(string Name, int RollNo, char Grade, float Avg)
    {
        this->Name = Name;
        this->RollNo = RollNo;
        this->Grade = Grade;
        this->Avg = Avg;
    }
    GetData()
    {
        cout << "===Student Information===" << endl;
        cout << "Student Name :" << Name;
        cout << "Student Roll Number :" << RollNo;
        cout << "Student Grade :" << Grade;
        cout << "Student Average :" << Avg;
    }
};
int main()
{
    student s;
    student s1;
    s1.SetData("Ravi", 101, "A", 98.89);
    s1.GetData();
    return 0;
}