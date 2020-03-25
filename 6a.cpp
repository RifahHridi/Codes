//Rifah Mashiat
//ID:110056911
//question 1

#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include<iomanip>
using std::setprecision;
int main()
{
for( int i = 1; i <= 10; i++ )

{
for( int j = 1; j <= 10; j++)

cout << (j <= i ? "*" : " " ) ;
}
 cout << endl;

//for pause



//b)



for( int i = 10; i >= 1; i-- )
{
for( int j = 1; j <= 10; j++)

cout << (j <= i ? "*" : " " ) ;
}
cout << endl;





//c)



for( int i = 10; i > 0; i-- )
{
for( int j = 10; j > 0; j--)

cout << (j <= i ? "*" : " " ) ;
}
 cout << endl;




//d)





for( int i = 1; i <= 10; i++ )
{
for( int j = 10; j >= 1; j--)

cout << (j <= i ? "*" : " " ) ;
}
 cout << endl;


//Question 2


   int NoItem, sum;


    int TotalItem=0;


    float priceofItem,TotalAmount;


    char NextItem ='Y';




    while (NextItem=='Y' || NextItem=='y')


{


    cout<<"Enter the price of Item : ";


    cin>>priceofItem;


    cout<<"Enter the Number Of Item : ";


    cin>>NoItem;


cout<<"Do you want to continue, (Y/N)? : "    ;


    cin>>NextItem;


    sum= NoItem * priceofItem;


    TotalItem= TotalItem + NoItem;


    TotalAmount=TotalAmount + sum;


    cout<<endl;








}







    cout<<"The number of items purchased is: "<<TotalItem<<endl;


    cout<<"The total amount that the customer has to pay is : RM"<<TotalAmount<<endl;














//Question 3
 int product;
 int quantity;
 double total = 0.0;
 cout<<"Enter pairs of item number numbers and quantities"
 <<"(-1 to end): ";
 cin>>product;
 cout<<fixed<<setprecision(2);
 while(product!=-1)
 {
 cin>>quantity;
 switch(product){
 case 1:
 total+=quantity*2.98;
 break;
 case 2:
 total+=quantity*4.50;
 break;
 case 3:
 total+=quantity*9.98;
 break;
 case 4:
 total+=quantity*4.49;
 break;
 case 5:
 total+=quantity*6.87;
 break;
 default:
 cout<<"Invalid product code: "<<product
 <<"\n Quantity: "<<quantity<<'\n';
 break;
 }

 cout<<"Enter pairs of item number numbers and quantities"
 <<"(-1 to end): ";

 cin>>product;
 }
 cout<<"The total retail value was: "<<total<<endl;



 int num, flag;

	for(int i=1; i<=5; i++)

		cout << "Enter your number: ";
		cin >> num;

		if(num)
		{
			for(int j=1; j<=num; j++)
			{
				cout << "*";
			}
		}

		cout << endl  << endl;
 return 0;










}
