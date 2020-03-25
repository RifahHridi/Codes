#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    float Quiz,midterm,finalexamination,finalmark;

    cout<<"Enter Quiz= ";
    cin>>Quiz;
    cout<<"Enter midterm= ";
    cin>>midterm;
    cout<<"Enter finalexamination= ";
    cin>>finalexamination;
    finalmark=100;
    finalmark=(0.2*Quiz)+(0.3*midterm)+(0.5*finalexamination) ;



    if(mark>100)
    {
        cout<<"invalid mark";
    }
    else if(mark<0){
        cout<<"invalid mark";
    }
    else if(mark>=75){
        cout<<"A";
    }
    else if(mark>=65){
        cout<<"B";
    }
    else if(mark>=50){
        cout<<"C";
    }
    else if(mark>=40){
        cout<<"D";
    }


    else {
        cout<<"fail";
        cout<<"Best of luck for next time";
    }

    getch();



}
