#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
#define STD 5
int main()
{
    cout<<"task [1] "<<"------------------------"<<endl;
    int ch,i=0;
    char str[10];
    cout << "write characters:"<<endl;
    do{
        ch = getche();
        str[i] = ch;
        i++;
    }while(ch!='\r'&&strlen(str)<10);
    cout <<endl<<str<<endl;
    cout<<"task [2] "<<"------------------------"<<endl;
// print names of 5 students
    char fname[STD][10], lname[STD][10], fullname[STD][20];
    int maxlen=0, maxlenindex;
    for(int i=0;i<STD; i++){
        cout<< "first name for student no. "<<i+1<<" : ";
        cin >> fname[i];
        cout << "last name : ";
        cin >> lname[i];
    }
    for(int i=0;i<STD; i++){
        strcpy(fullname[i], fname[i]);
        strcat(fullname[i], " ");
        strcat(fullname[i], lname[i]);
        cout << "full name of student no. "<<i+1 << " : "<< fullname[i] << endl;
        if(strlen(fullname[i])>maxlen){
            maxlen = strlen(fullname[i]);
            maxlenindex = i;
        }
    }
    cout << "the name with bigger length is " << fullname[maxlenindex]<< endl;

    cout<<"task [3] "<<"------------------------"<<endl;
    string fName[STD], lName[STD], fullName[STD];
    maxlen=0, maxlenindex=0;
    for(int i=0;i<STD;i++){
        cout<< "first name for student no. "<<i+1<<" : ";
        cin >> fName[i];
        cout << "last name : ";
        cin >> lName[i];
    }
    for(int i=0;i<STD; i++){
        fullName[i] = fName[i]+" "+lName[i];
        cout<<"full name of student no. "<<i+1 << " : "<<fullName[i]<<endl;
        if(fullName[i].length()>maxlen){
            maxlen = fullName[i].length();
            maxlenindex = i;
        }
    }
    cout <<"the name with bigger length is "<<fullName[maxlenindex]<<endl;


    return 0;
}
