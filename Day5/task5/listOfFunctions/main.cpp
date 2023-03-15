#include <iostream>
#include <climits>
#include <windows.h>
using namespace std;
// 1
void fillArray(int[], int);
// 2
void printSortedArray(int[], int);
// 3
void addToArray(int[], int, int);
// 4
float getAvgArray(int[], int);
// 5
void reverseArray(int[], int);
// 6
int minNum(int[], int);
// 7
int maxNum(int[], int);
// print an array
void printArr(int[], int);
#define SIZE 4
int main()
{
    int ar[SIZE] = {8, 3, 17, 5};
    int inp;
    do{
        system("cls");
        cout<<"Enter [1] for fill array\n"<<"Enter [2] for print sorted array\n"<<"Enter [3] for add number to array\n"<<
        "Enter [4] for get average for array\n"<<"Enter [5] for reverse array\n"<<
        "Enter [6] for get min number from array\n"<<"Enter [7] for for get max number from array\n"<<"Enter [0] for exit.\n"<<
        "please enter number between 0 and 7: ";
        cin>>inp;
        if(inp>=0 && inp<=7){
            switch(inp){
                case 1:
                    fillArray(ar, SIZE);
                    cout<<"Filled successfully.\n";
                    break;
                case 2:
                    printSortedArray(ar, SIZE);
                    break;
                case 3:
                    int indx, num;
                    cout<<"index of the number: ";
                    cin>>indx;
                    cout<<"number: ";
                    cin>>num;
                    addToArray(ar, indx, num);
                    break;
                case 4:
                    cout<<"Average of the array: "<<getAvgArray(ar, SIZE)<<"\n";
                    break;
                case 5:
                    cout<<"Reversed array: ";
                    reverseArray(ar, SIZE);
                    break;
                case 6:
                    cout<<"The min. number: "<<minNum(ar, SIZE)<<endl;
                    break;
                case 7:
                    cout<<"The max. number: "<<maxNum(ar, SIZE)<<endl;
                    break;
                case 0:
                    break;
                default:
                    cout<<"Please enter a valid number."<<endl;

            }
        }else
            cout<<"Please enter a valid number.\n";
        if(inp!=0){
            cout<<"wait for 3 seconds";
            Sleep(3000);
        }
    }while(inp!=0);
    return 0;
}
void fillArray(int arr[], int _size){
    cout<<"Enter array numbers: ";
    for(int i=0;i<_size;i++){
        cin>>arr[i];
    }
}
void printSortedArray(int arr[], int _size){
    for(int i=0;i<_size;i++){
        for(int j=i+1;j<_size;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i=0;i<_size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void addToArray(int arr[],int idx, int num){
    if(idx>=1 && idx<SIZE){
        arr[idx-1] = num;
        cout<<"added.\n";
    }else
        cout<<"Enter a valid index\n";
}
float getAvgArray(int arr[], int _size){
    int sum=0;
    float avg;
    for(int i=0;i<_size;i++){
        sum += arr[i];
    }
    avg = (float)sum/_size;
    return avg;
}
void reverseArray(int arr[], int _size){
    for(int i=_size-1;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int minNum(int arr[], int _size){
    int mi = INT_MAX;
     for(int i=0;i<_size;i++){
        if(arr[i]<mi){
            mi = arr[i];
        }
    }
    return mi;
}
int maxNum(int arr[], int _size){
    int ma = INT_MIN;
     for(int i=0;i<_size;i++){
        if(arr[i]>ma){
            ma = arr[i];
        }
    }
    return ma;
}
void printArr(int arr[], int _size){
    cout<<"Array : ";
    for(int i=0;i<_size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
