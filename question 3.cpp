#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"enter three numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    //check for if they are equal

    if (a==b && b==c && c==a) {
        cout <<"All the given numbers are equal"<<endl;
        return 0;
        //both numbers are equal so there is no need to check for smallest and largest number
    } else {
        cout <<"the given numbers are not equal"<<endl;
    }
    // checking for largest number
    if (a>b && a>c) {
        cout <<a<<"  is the largest number"<<endl;
    }else if (b>a && b>c) {
        cout <<b<<"  is the largest number"<<endl;
    }else {
        cout<<c<<"  is the largest number"<<endl;
    }
    // checking for smallest number
    if (a<b && a<c) {
        cout<<"smallest number=  "<<a<<endl;
    }else if ( b<a && b<c ) {
        cout <<"smallest number=  "<<b<<endl;
    }else {
        cout<<"smallest number=  "<<c<<endl;
    }
    return 0;
}