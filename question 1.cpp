#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float num1;
    float num2;
    cout<<"enter the number 1"<< endl;
    cin >> num1;
    cout <<"enter the number 2" << endl;
    cin >> num2;
    //performing arithmetic operations with decimal precision 3
    cout <<fixed<< setprecision(3);
    cout <<"sum of both numbers = "<< num1+num2 << endl;
    cout <<"product of both numbers = "<< num1*num2 <<endl;
    cout <<"difference of both numbers = " << num1-num2<<endl;
    cout <<"qoutient = " << num1/num2<<endl;
    //now casting from float to int
    cout <<"sum after casting = "<< (int)num1+(int)num2<<endl;
    cout <<"product after casting = "<< (int)num1*(int)num2<<endl;
    cout<< "difference after casting = " << (int)num1-(int)num2<<endl;
    cout <<"quotient after casting = " << (int)num1/(int)num2<<endl;
    return 0;
}
