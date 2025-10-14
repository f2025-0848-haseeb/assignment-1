#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //declaring variables
    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;
    //input marks
    cout <<"enter marks of subject1"<<endl;
    cin >>subject1;
    cout<<"enter the marks of subject2"<<endl;
    cin>>subject2;
    cout<<"enter the marks of subject3"<<endl;
    cin>>subject3;
    cout<<"enter the marks of subject4"<<endl;
    cin>>subject4;
    cout<<"enter the marks of sunject5"<<endl;
    cin>>subject5;
    //calculating total
    float obtmarks = subject1+subject2+subject3+subject4+subject5;
    //cqlculating percentage
    float percentage = (obtmarks/500)*100;
    cout<<"your percentage =  "<<percentage<<endl;
    //assigning grade
    string grade;
    if (percentage>=90) {
        grade="A+";
        cout<<"you got  "<<grade << "  and you are passed"<<endl;
    }
    else if (percentage>=80) {
        grade="A";
        cout <<"you got  "<<grade<<"  and you are passed";
    }
    else if (percentage>=70) {
        grade="B";
        cout<<"you got  "<<grade<<"  and you are passed";
    }
    else if (percentage>=60){
        grade="C";
        cout<<"you got  "<<grade<<"  and you are passed";
    }
    else if (percentage>=50) {
        grade="D";
        cout <<"you got  "<<grade<<"  and you are passed";
    }
    else {
        grade="F";
        cout<<"you got  "<<grade<<"  and you are failed";
        //display report card
    }
    cout<<endl;
    cout <<"-------------------report card-------------------------"<<endl;
    cout <<left<<setw(20)<<"subject no.";
    cout<<left<<setw(20)<<"obtained marks";
    cout<<left<<setw(20)<<"total"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<left<<setw(20)<<"subject 1";
    cout<<left<<setw(20)<<subject1;
    cout<<left<<setw(20)<<"100"<<endl;
    cout<<left<<setw(20)<<"subject 2";
    cout<<left<<setw(20)<<subject2;
    cout<<left<<setw(20)<<"100"<<endl;
    cout<<left<<setw(20)<<"subject 3";
    cout<<left<<setw(20)<<subject3;
    cout<<left<<setw(20)<<"100"<<endl;
    cout<<left<<setw(20)<<"subject 4";
    cout<<left<<setw(20)<<subject4;
    cout<<left<<setw(20)<<"100"<<endl;
    cout<<left<<setw(20)<<"subject 5";
    cout<<left<<setw(20)<<subject5;
    cout<<left<<setw(20)<<"100"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<right<<setw(20)<<"total marks = 500";
    cout <<right<<setw(20)<<"Your percentage"<<percentage<<endl;
    cout<<right<<setw(30)<<"Your grade ="<<grade<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    if (percentage>50) {
        cout<<"congratulations.You have Passed";
    }else {
        cout<<"Unfortunately.You have Failed";
    }
    cout<<endl;
    cout<<"-------------------------------------------------------";
    return 0;
}