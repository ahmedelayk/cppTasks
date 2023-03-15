#include <iostream>
#include <Windows.h>
using namespace std;
void SetCursorPosition(char x, char y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}
int main()
{

    // magic box
    //SetCursorPosition(50, 2);
    int boxSize, col , row;
    cout << "Enter size of matrix: ";
    for(int j = 0;j<2;j++){
        cin >> boxSize;
        if(boxSize!= 1 && boxSize%2 != 0){
            col = (boxSize+1)/2;
            row = 1;
            for(int i =1;i<= boxSize*boxSize; i++){
                SetCursorPosition(col *3, row*(3*j+1));
                cout << i;
                if(i % boxSize !=0){
                    col--;
                    row--;
                }else {
                    row++;
                }
                if(row < 1){
                    row = boxSize;
                }else if(row > boxSize){
                    row = 1;
                }
                if(col < 1){
                    col = boxSize;
                }else if (col > boxSize){
                    col = 1;
                }
            }
        }else {
            cout << "Please Enter odd number.";
        }
        SetCursorPosition(2, 18);
    }
    cout << endl << endl;

/*
    // grading system
    cout << "Grading System"<<endl<<"______________"<<endl;
    int degree;
    cout << "Enter your degree: ";
    cin >> degree;
    if(degree <= 100 && degree >=0){
        if (degree <= 100 && degree >=85){
            cout << "A" << endl;
        }else if(degree < 85 && degree >=75){
            cout << "B" << endl;
        }else if(degree < 75 && degree >=60){
            cout << "C";
        }else {
            cout << "F" << endl;
        }
    }else {
        cout << "Please Enter Valid Degree."<< endl;
    }
*/
/*
    // rest/urant pricing
    char meal, answer;
    cout << "Resturant Pricing"<<endl<<"______________"<<endl;
    cout << "a for chicken."<<endl<<"b for meat"<<endl<<"c for seafood"<<endl<<"d if vegiterian"<<endl<<"e for exit"<<endl;
    do{
        cout << "Enter your favourite meal to get price: ";
        cin >> meal;
        switch(meal){
            case 'a':
            case 'A':
                cout << "The price for chicken is $ 25" << endl;
                break;
            case 'b':
            case 'B':
                cout << "The price for meat is $ 35" << endl;
                break;
            case 'c':
            case 'C':
                cout << "The price for seafood is $ 50" << endl;
                break;
            case 'd':
            case 'D':
                cout << "The price for vigan is $ 15" << endl;
                break;
            case 'e':
            case 'E':
                cout << "thank you to be here." << endl;
                answer = 'n';
                break;
            default:
                cout << "Enter valid character."<<endl;
        }
        if (answer != 'n'){
            cout << "Want more? y for yes and n for No: ";
            cin >> answer;
        }
    }while(answer == 'y' || answer == 'Y'|| answer == 'yes');
*/
/*
    int num, sum = 0;
    do{
        cout << "Enter number: ";
        cin >> num;
        sum += num;
    }while(num!=0 && sum <= 100);
    cout << endl << "Sum is: " << sum << endl;
*/
    return 0;
}
