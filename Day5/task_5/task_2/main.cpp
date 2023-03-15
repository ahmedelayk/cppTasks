#include <iostream>
using namespace std;
// get power of number
int pow(int, int);
int main()
{
    int num,power;
    cout<<"this program calculate value of number raised to power\nEnter the number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>power;
    cout<<"the value of "<<num<<" raised to power "<<power<<" = "<<pow(num, power);
    return 0;
}

int pow(int number, int power){
    int val=1;
    for(int i=0;i<power;i++){
        val *= number;
    }
    return val;
}
