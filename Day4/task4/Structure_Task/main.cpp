#include <iostream>
#include <windows.h>
using namespace std;
void SetCursorPosition(char x, char y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}
struct address {
    string city;
    int streetNo, buildNo;
};
struct employee {
    string name;
    int age, code, tax;
    address emp_add;
};
#define EMP 3
int main(){
// Employees task
    cout <<"Structure tasks: "<<endl<< "task [1] "<<"------------------------"<<endl;
    POINT p;
    int wherey();
    int wherex();
    employee emp1, emps[EMP];
    cout << "Enter your name: ";
    cin >> emp1.name;
    cout << "Enter your age: ";
    cin >> emp1.age;
    cout << "Enter your code: ";
    cin >> emp1.code;
    cout << "Enter your city: ";
    cin >> emp1.emp_add.city;
    cout << "Enter your street number: ";
    cin >> emp1.emp_add.streetNo;
    cout << "Enter your building number: ";
    cin >> emp1.emp_add.buildNo;

    cout<<"Your name is "<<emp1.name<<", age: "<<emp1.age<<", code: "<<emp1.code<<", city: "
        <<emp1.emp_add.city<<", street No.: "<<emp1.emp_add.streetNo<<", Building No.: "<<emp1.emp_add.buildNo<<endl;
    cout <<"task [2] "<<"------------------------"<<endl;
    for(int i=0;i<EMP;i++){
        cout << "Enter employee no."<<i+1<<" name: ";
        cin >> emps[i].name;
        cout << "Enter employee no."<<i+1<<" age: ";
        cin >> emps[i].age;
        cout << "Enter employee no."<<i+1<<" code: ";
        cin >> emps[i].code;
        cout << "Enter employee no."<<i+1<<" city: ";
        cin >> emps[i].emp_add.city;
        cout << "Enter employee no."<<i+1<<" street number: ";
        cin >> emps[i].emp_add.streetNo;
        cout << "Enter employee no."<<i+1<<" building number: ";
        cin >> emps[i].emp_add.buildNo;
    }
    for(int i=0;i<EMP;i++){
        cout<<"employee no." <<i+1<<" >> name : "<<emps[i].name<<", age: "<<emps[i].age<<", code: "<<emps[i].code<<", city: "
            <<emps[i].emp_add.city<<", street No.: "<<emps[i].emp_add.streetNo<<", Building No.: "<<emps[i].emp_add.buildNo<<endl;
    }
    system("cls");
    cout<< "task [3] "<<"------------------------"<<endl;
    // take index of employee from user.
    int empIndex;
    cout<<"enter index of employee : ";
    SetCursorPosition(0, 3);
    cout << "name: ";
    SetCursorPosition(15, 3);
    cout << "age: ";
    SetCursorPosition(40, 3);
    cout << "code: ";
    SetCursorPosition(0, 6);
    cout << "city: ";
    SetCursorPosition(15, 6);
    cout << "street number: ";
    SetCursorPosition(40, 6);
    cout << "building number: ";
    SetCursorPosition(26, 1);
    cin>>empIndex;
    SetCursorPosition(5, 3);
    cin >> emps[empIndex-1].name;
    SetCursorPosition(19, 3);
    cin >> emps[empIndex-1].age;
    SetCursorPosition(45, 3);
    cin >> emps[empIndex-1].code;
    SetCursorPosition(5, 6);
    cin >> emps[empIndex-1].emp_add.city;
    SetCursorPosition(29, 6);
    cin >> emps[empIndex-1].emp_add.streetNo;
    SetCursorPosition(56, 6);
    cin >> emps[empIndex-1].emp_add.buildNo;

    cout<<endl<<"employee no." <<empIndex<<" >> name: "<<emps[empIndex-1].name<<", age: "<<emps[empIndex-1].age<<", code: "<<emps[empIndex-1].code<<", city: "
        <<emps[empIndex-1].emp_add.city<<", street No.: "<<emps[empIndex-1].emp_add.streetNo<<", Building No.: "<<emps[empIndex-1].emp_add.buildNo<<endl;
    return 0;
}
