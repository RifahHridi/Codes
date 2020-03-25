//Rifah Mashiat
//ID:110056911

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int quiz,midterm,Finalexamination,finalMark;
    char grade;
    cout<<"Program to calculate a grade"<<endl;
    cout<<"Enter your marks:"<<endl;
    cin>>quiz;
    cout<<endl;

    cout<<"Test:";
    cin>>midterm;
    cout<<endl;

    cout<<"Final Examination:";
    cin>>Finalexamination;
    cout<<endl;

    finalMark=100;
    finalMark= (0.2*quiz)+(0.3*midterm)+(0.5*Finalexamination);
    if( (finalMark>=70)&&(finalMark<=100)){
        cout<<"Congratulations,you are excellent in this course"<<endl;

    }
    else if((finalMark>=65)&&(finalMark<74)){
        cout<<"You pass the course,Good luck in the next level"<<endl;
    }

    else if((finalMark>=50)&&(finalMark<60)){
        cout<<"You pass the courses,but more exercise needed"<<endl;

    }
    else if((finalMark>=49)&&(finalMark<40)){
        cout<<"You pass the course but more exercises needed";
    }
    else if((finalMark>0)&&(finalMark<39)){
        cout<<"You have failed"<<endl;
    }



    cout<<"Program to calculate a grade of a student"<<endl;
    cout<<"Enter your marks"<<endl;
    cout<<"Quiz";
    cin>>quiz;
    cout<<endl;

    cout<<"Test";
    cin>>midterm;
    cout<<endl;

    cout<<"Final Examination";
    cin>>Finalexamination;
    cout<<endl;

    finalMark=100;

    finalMark=((0.2*quiz)+(0.3*midterm)+(0.5*Finalexamination));

    switch(grade)
    {
        case'A':
        cout<<"Congratulations,you are excellent in this course";
        break;
        case'B':
        cout<<"You pass the course,Good luck in the next level";
        break;
        case'C':
        cout<<"You pass the course,but more exercises are needed";
        break;
        case'D':
        cout<<"You pass the course but more exercises are needed";
        break;
        case'F':
        cout<<"You fail the course.Try again next semester";
        break;
        default:"Invalid option";
        break;


    }


    getch();
}
