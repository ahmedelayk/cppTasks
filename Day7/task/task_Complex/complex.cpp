#include <iostream>
using namespace std;
class Complex{
  float real;
  float imag;
  public:
    Complex(){
      // cout<< "I am the default constructor\n";
    }
    Complex(float num){
      real = imag = num;
      // cout<< "I am the first overloaded constructor\n";
    }
    Complex(float real, float imag){
      this->real = real;
      this->imag = imag;
      // cout<< "I am the second overloaded constructor\n";
    }
    // Complex(float real = 0, float imag = 0){
    //   if(imag == 0){
    //     this->real = real;
    //     this->imag = real;
    //   }else{
    //     this->real = real;
    //     this->imag = imag;
    //   }
    //     cout<< "I am the overloaded constructor\n";
    // }
    void setReal(float real){
      this->real = real;
    }
    void setImag(float imag){
      this->imag = imag;
    }
    float getReal(){
      return real;
    }
    float getImag(){
      return imag;
    }
    Complex Sum(Complex num){
      Complex x;
      x.setReal(this->real + num.getReal());
      x.setImag(this->imag + num.getImag());
      return x;
    }
    void print(){
      if(this->imag > 0 && this->real > 0){
        if(imag != 1)
          cout<<this->real<<" + "<<this->imag<<"i\n";
        else
          cout<<this->real<<" + "<<"i\n";
      }
      else if(this->imag <0 && this->real !=0){
        if(imag != -1)
          cout<<this->real<<" "<<this->imag<<"i\n";
        else
          cout<<this->real<<" - "<<"i\n";
      }
      else if(this->real == 0)
        cout<<this->imag<<"i\n";
      else if(this->imag == 0)
        cout<<this->real<<"\n";
      }
};
// overloading functions
Complex add(Complex, Complex);
Complex add(Complex, float);
Complex add(float, Complex);
Complex add(Complex, Complex, Complex);
Complex sub(Complex, Complex);

int main()
{
  float r1,im1,rim2,r3,im3, x = 10;
  cout<<"Enter real no. for c1: ";
  cin>>r1;
  cout<<"Enter imag no. for c1: ";
  cin>>im1;
  cout<<"Enter real and im(equal) no. for c2: ";
  cin>>rim2;
  cout<<"Enter real no. for c3: ";
  cin>>r3;
  cout<<"Enter imag no. for c3: ";
  cin>>im3;
  // Complex c1(r1,im1), c2(rim2), c3, res1, res2, res3, res4 ;
  Complex c1(r1,im1), c2(rim2), c3, res ;
  c3.setReal(r3);
  c3.setImag(im3);
  cout << "c1 = ";
  c1.print();
  cout << "c2 = ";
  c2.print();
  cout << "c3 = ";
  c3.print();
  // adding float and complex numbers
  res = add(x, c1);
  cout<<x<<" + c1 = ";
  res.print();
  res = add(c2, x);
  cout<<"c2 + "<<x<<" = ";
  res.print();
  // add two complex numbers
  res = add(c1, c2);
  cout<<"c1 + c2 = ";
  res.print();
  // add three complex numbers
  res = add(c1, c2, c3);
  cout<<"c1 + c2 + c3 = ";
  res.print();
  return 0;
}
Complex add(Complex x, Complex y){
  Complex result;
  result.setReal(x.getReal() + y.getReal());
  result.setImag(x.getImag() + y.getImag());
  return result;
}
Complex add(Complex x, Complex y, Complex z){
  Complex result;
  result.setReal(x.getReal() + y.getReal()+ z.getReal());
  result.setImag(x.getImag() + y.getImag()+ z.getImag());
  return result;
}
Complex add(Complex x, float y){
  Complex result;
  result.setReal(x.getReal() + y);
  result.setImag(x.getImag());
  return result;
}
Complex add(float x, Complex y){
  Complex result;
  result.setReal(x + y.getReal());
  result.setImag(y.getImag());
  return result;
}
Complex sub(Complex x, Complex y){
  Complex result;
  result.setReal(x.getReal() - y.getReal());
  result.setImag(x.getImag() - y.getImag());
  return result;
}
