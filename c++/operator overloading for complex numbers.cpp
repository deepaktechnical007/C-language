#include<iostream>
using namespace std;

class Complex{
    private:
        float real, imag;
    public:
        Complex(float r = 0, float i = 0){
            real = r;
            imag = i;
        }
        
        Complex operator + (Complex const &obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        Complex operator - (Complex const &obj){
            Complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }

        friend ostream& operator << (ostream& os, const Complex& num);
        friend istream& operator >> (istream& is, Complex& num);
};

ostream& operator << (ostream& os, const Complex& num){
    os << num.real;
    if(num.imag < 0)
        os << " - " << -num.imag << "i";
    else
        os << " + " << num.imag << "i";
    return os;
}

istream& operator >> (istream& is, Complex& num){
    cout << "Enter Real Part: ";
    is >> num.real;
    cout << "Enter Imaginary Part: ";
    is >> num.imag;
    return is;
}

int main(){
    Complex num1, num2;
    cout << "Enter First Complex Number: " << endl;
    cin >> num1;
    cout << "Enter Second Complex Number: " << endl;
    cin >> num2;

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    return 0;
}

