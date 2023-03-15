#include <iostream>
using namespace std;
int main(){
  int y = 0;
  cout<< ++y + y++ <<endl;
  int x = 0;
  cout<< x++ + ++x;

  return 0;
}