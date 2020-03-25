//Rifah Mashiat
//ID:110056911



#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
    int number = 0;
    int a =1;
    int number1;
    int square;
    int cube;

    cout<< "Question 1: \n\n";
    for(number;number <= 10;number++)
        cout<<number<<" ";


        cout<< "\n\nQuestion 2: \n\n";
    while(a <= 10)
    {
     cout<<" Rifah "<<endl;
     a++;    }


     cout<<"Question 3"<<endl;
     int counter=2;
        int sum=0;
        do
		{
          cout<<counter<<endl;
          counter=counter+2;
          sum= sum + counter;

		  cout<<"\n\n";

		}


        while(counter<100);
        {
        	cout<<"Addition of All Positive Numbers Is:"<<sum<<endl;

		}

		cout<< "\n\nQuestion 4: \n\n";
     for(int i = 1;i <= 14;i++)
    {
        square = i * i;
        cout<<square<<" ";
    }


     cout<< "\n\nQuestion 5: \n\n";

    for(int i = 1;i <= 10;i++)
    {
        cube = i * i *i;
        cout<<i<<"\t"<<cube<<endl;
    }

    cout<< "\n\nQuestion 6: \n\n";

    int num[5] ;
    int sum1=0;

    for(int i=1; i<=5; i++)
    {
    	cout<<" Enter Number "<<i<<"=";
    	cin>>num[i];

    	sum1= sum1 + num[i];

	}
	cout<<" Sum of All Interger is :"<<sum1<<endl;

	   cout<< "\n\nQuestion 7: \n\n";
        int Number, max = 0, min = 40000;
        char choice;


        do{
        	cout<<"Enter a number: ";
        	cin>>Number;
        	if (Number > max)
        {
            max = Number;
        }
        if (Number < min)
        {
            min = Number;
        }
         	cout<<"Do you want to Continue(y/n)? ";
        	cin>>choice;
		}

        while(choice == 'y' || choice == 'Y');
		{
			cout<<"MAX: "<<max<<endl;
		cout<<"MIN: "<<min<<endl;
		}

		 cout<< "\n\nQuestion 8: \n\n";

	cout<<"a)";
                for(int i = 0; i <= 3;i++){
			    	cout<<"\n*";


			    	for(int o = 0; o <= 8;o++){
			    		cout<<"*";
					}
				}
		cout<<"\n\n";
		cout<<"b)\n";

    int space, rows = 5;

    for(int q = 1, k = 0; q <= rows; ++q, k = 0)
    {
        for(space = 1; space <= rows-q; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*q-1)
        {
            cout << "# ";
            ++k;
        }
        cout << endl;
    }

    cout<<"\n\n";
		cout<<"c)\n";
		int r = 5;

    for(int p = 1; p <= r; ++p)
    {
        for(int j = 1; j <= p; ++j)
        {
            cout << "@ ";
        }
        cout << "\n";
    }

        cout<<"\n\n";
		cout<<"d)\n";

		int n = 4,k,c,space2=1;
space2=n-1;
    for(k=1;k<=n;k++)
    {
        for(c=1;c<=space2;c++)
        {
            cout<<" ";
        }
        space2--;
        for(c=1;c<=2*k-1;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    space2=1;
    for(k=1;k<=n;k++)
    {
        for(c=1;c<=space2;c++)
        {
            cout<<" ";
        }
        space2++;
        for(c=1;c<=2*(n-k)-1;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




