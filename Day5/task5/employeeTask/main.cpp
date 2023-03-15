#include <iostream>
#include <Windows.h>
using namespace std;
// structure for employee
struct employee {
    string name;
    int age, salary;
};
void displayEmployee(employee[], int);
void addEmployee(employee[], int);
void displayAllEmployees(employee[], int);
#define EMP 3
int main()
{
    employee employees[EMP]={{"ahmed",24,7000}, {"mohamed",28,9000}, {"hamada",32,11000}, };
    char op;
    do{
        system("cls");
        cout<<"What do you want?"<<endl<<"to display all employees, enter 1 "<<endl<<
        "to display employee with index, enter 2 "<<endl<<"to add employee, enter 3 "<<endl
        <<"for exit write e"<<endl<<"your choice: ";
        cin>>op;
        if(op=='1' || op=='2'|| op=='3' || op=='e'){
            switch(op){
                case '1':
                    displayAllEmployees(employees, EMP);
                    break;
                case '2':
                    int indx;
                    cout<<"Enter the index of the employee: ";
                    cin>>indx;
                    displayEmployee(employees, indx);
                    break;
                case '3':
                    cout<<"Enter the index of the employee: ";
                    cin>>indx;
                    addEmployee(employees, indx);
                    break;
                case 'e':
                    break;
                default:
                    cout<<"enter valid input."<<endl;
            }
        }else{
            cout<<"Please enter valid input\n";
        }

        if(op!='e'){
            cout<<"wait for 3 seconds";
            Sleep(3000);
        }
    }while(op!='e');
    return 0;
}

void displayEmployee(employee emps[], int idx){
    if(idx <= EMP && idx > 0){
    cout<<"Name is: "<<emps[idx-1].name<<", age: "<<emps[idx-1].age<<", salary: "<<emps[idx-1].salary<<endl;
    }else{
        cout<<"Enter a valid index\n";
    }
}
void addEmployee(employee emps[], int idx){
    if(idx <= EMP && idx > 0){
        cout << "Enter name: ";
        cin >> emps[idx-1].name;
        cout << "Enter age: ";
        cin >> emps[idx-1].age;
        cout << "Enter salary: ";
        cin >> emps[idx-1].salary;
    }else{
        cout<<"Enter a valid index\n";
    }
}
void displayAllEmployees(employee emps[], int _size){
    for(int i=0;i<_size;i++){
        cout<<"Employee No. "<<i+1<<": name: "<<emps[i].name<<", age: "<<emps[i].age<<", salary: "<<emps[i].salary<<endl;
    }
}
