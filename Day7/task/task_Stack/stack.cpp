#include <iostream>
using namespace std;
class Stack{
  int * ptrarr;
  int top;
  int size;
  static int counter;
  public:
    Stack(){
      size = 10;
      ptrarr = new int[size];
      top = 0;
      counter++;
      cout<<"I am the default constructor\n";
    }
    Stack(int size){
      this->size = size;
      top = 0;
      ptrarr = new int[size];
      counter++;
      cout<<"I am the overloaded constructor\n";
    }
    void push(int num){
      if(isFull()){
        cout<<"Stack is full";
      }else{
        ptrarr[top] = num;
        top++;
      }
    }
    int pop(){
      int val;
      if(isEmpty()){
        cout<<"Stack is empty\n";
        return 0;
      }else{
        val = ptrarr[top-1];
        top--;
        return val; 
      }
    }
    bool isFull(){
      if(top == size) // Error Here
        return true;
      else
        return false;
    }
    bool isEmpty(){
      if(top == 0)
        return true;
      else
        return false;
    }
    static int getCounter(){
      return counter;
    }
    void printStack(){
      cout<<"Elements of Stack: ";
      for (int i = 0; i < top; i++)
      {
        cout<<ptrarr[i]<<"   ";
      }
      cout<<"\n";
    }
    ~Stack(){
      delete[] ptrarr;
    }
};
int Stack::counter = 0;

int main(){
  Stack s(6);
  Stack s2(10);
  Stack s3(10);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  // s.pop();
  s.printStack();
  // cout<<s.pop()<<"\n";
  // cout<<s.pop()<<"\n";
  if(s.isEmpty()){
    cout<<"Empty"<<"\n";
  }else{
    cout<<"Not Empty"<<"\n";
  }
  if(s.isFull()){
    cout<<"Full"<<"\n";
  }else{
    cout<<"Not Full"<<"\n";
  }
  cout<<"Number of objects created from class Stack: "<< Stack::getCounter()<<"\n";
  return 0;
}


