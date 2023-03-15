#include <iostream>
using namespace std;
#define STD 4
#define SUB 5
int main()
{
    cout <<"Task 1" <<endl;
// advanced grading system with courses
    float marks[STD][SUB];
    float totals[STD] = {0};
    int maxgrade = 0, i, j, std_hg_id;
    //  fill data and print total grade of every student
    cout << "fill marks for 4 students per 5 courses: "<<endl;
    for(i = 0;i<STD;i++){
        for(j = 0;j<SUB;j++){
            cin>>marks[i][j];
            totals[i]+= marks[i][j];
        }
        cout<<"total grade of Student "<<i+1<<" : "<<totals[i]<<endl;
    }
    //get highest grade student
    for(i=0;i<STD;i++){
        if(totals[i]>maxgrade)
            maxgrade = totals[i];
            std_hg_id = i +1;
    }
    cout << endl << "student with highest grade : "<< std_hg_id <<endl;
    // print average for every subject
    float subAvg[SUB] = {0};
    for(i = 0;i<SUB;i++){
        for(j = 0;j<STD;j++){
            subAvg[i]+= marks[j][i];
        }
        subAvg[i] /= STD;
        cout<<"Avg of Subject "<<i+1<<" : "<<subAvg[i]<<endl;
    }

    cout <<"#################################"<<endl<<"Task 2" <<endl;
 //simple calculator
    int n, sum = 0, mul =1;
    char op;
    cout << "enter size of numbers : ";
    cin >> n;
    float num[n];
    for(i=0;i<n;i++){
        cout<<"enter number "<<i+1<<" : ";
        cin>>num[i];
    }
    loop:
    cout << "which operation ? s for sum and m for mul and r for sort."<<endl<<"operation : ";
    cin>>op;
    switch(op){
        case 's':
        case 'S':
            for(i=0;i<n;i++){
                sum += num[i];
            }
            cout << "Sum : "<<sum<<endl;
            break;
        case 'm':
        case 'M':
            for(i=0;i<n;i++){
                mul *= num[i];
            }
            cout << "Multiplication : "<<mul<<endl;
            break;
        case 'r':
        case 'R':

            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(num[i] > num[j]){
                        int temp = num[i];
                        num[i] = num[j];
                        num[j] = temp;
                    }
                }
            }
            cout << "sorted Array: "<<endl;
            for(i=0;i<n;i++){
                cout << num[i] << "\t";
            }
            break;
        default:
            cout << "Please enter valid character."<<endl;
            goto loop;
    }

    return 0;
}
