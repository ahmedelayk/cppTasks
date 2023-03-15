#include <iostream>
using namespace std;
class Complex{
    float real;
    float imag;
    public:
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
            if(this->imag > 0 && this->real > 0)
                cout<<this->real<<"+"<<this->imag<<"i\n";
            else if(this->imag <0 && this->real !=0)
                cout<<this->real<<this->imag<<"i\n";
            else if(this->real == 0)
                cout<<this->imag<<"i\n";
            else if(this->imag == 0)
                cout<<this->real<<"\n";

        }
};
Complex add(Complex, Complex);
Complex sub(Complex, Complex);
int main()
{
    Complex c1, c2, c3, res ;
    c1.setReal(7);
    c1.setImag(5);
    c2.setReal(1);
    c2.setImag(6);
    res = sub(c1, c2);
    res.print();
    c3 = c1.Sum(c2);
    c3.print();
    return 0;
}
Complex add(Complex x, Complex y){
    Complex result;
    result.setReal(x.getReal() + y.getReal());
    result.setImag(x.getImag() + y.getImag());
    return result;
}
Complex sub(Complex x, Complex y){
    Complex result;
    result.setReal(x.getReal() - y.getReal());
    result.setImag(x.getImag() - y.getImag());
    return result;
}
