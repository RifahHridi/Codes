// Programmer Name: Ashraful Alam shihab
// dated: 25 of April 2019
// Lab practical 6
// Question 03


#include<iostream>
using namespace std;
int main()

{
	
	int quantity,production;
	double totalammount,sum;
	char NextItem='Y';
	
	cout<<" product price:"<<endl;
	cout<<" 1. product 1 = $2.98 "<<endl;
	cout<<" 2. product 2 = $4.50 "<<endl;
	cout<<" 3. product 3 = $9.98 "<<endl;
	cout<<" 4. product 4 = $4.49 "<<endl;
	cout<<" 5. product 5 = $6.87 "<<endl;
	
    while (NextItem=='Y'  || NextItem=='y')
    {
	   
	    cout<<"Enter product Number :";
	    		cin>>production;
		
		cout<<" Enter how many product :";
		cin>>quantity;
		
		switch(production)
		{
				
			case 1:  totalammount= 2.98 * quantity;break;
			
			case 2:  totalammount= 4.50 * quantity;break;
			
			case 3:  totalammount= 9.98 * quantity;break;
			
			case 4:  totalammount= 4.49 * quantity;break;
			
			case 5:  totalammount= 6.87 * quantity;break;
			
		}
		
		sum=sum+totalammount;
		cout<<" Do you want to continue ? (Y/N) ";
		cin>>NextItem;
		
	}
	
	
	cout<<" Total Value is : $ "<<sum<<endl;
	
	return 0;
	
}
