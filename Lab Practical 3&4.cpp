
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    
    
    
        cout<< "Question 1: \n\n";
        double milkProduced, cartonsRequired;
    
    const double cartonSize = 3.78;
    const double productionCost = 0.38;
    const double cartonProfit = 0.27;
    
    cout << "How much milk did you produce? ";
    cin >> milkProduced;
    
    cartonsRequired = milkProduced / cartonSize;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "That is going to require " << static_cast<int>(cartonsRequired) << " cartons" << endl;
    cout << "Total Cost to Produce: $" << cartonsRequired * productionCost << endl;
    cout << "Total Profit: $" << cartonsRequired * cartonProfit << endl;
    
    
    
            cout<< "\n\nQuestion 2: \n\n";
    
    int cube, square;
    float squareroot;
    cout<<"No\tSquare\tCube\tSquare Root"<<endl;
    
    for(int i = 0;i <= 20;i++)
    {
        square = i * i;
        cube = i * i *i;
        squareroot = sqrt((double)i);
            cout.setf(ios::fixed,ios::floatfield);
            cout.precision(2);
        cout<<i<<"\t"<<square<<"\t"<<cube<<"\t"<<squareroot<<endl;      
    }          
    
    
    cout<< "\n\nQuestion 3: \n\n";
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE_OF_INCOME = 0.10;
    const double SCHOOL_PERCENTAGE_OF_INCOME = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE_OF_INCOME = 0.25;
    const double PARENTS_CO_CONTRIBUTION_AMOUNT = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursWorked;
    
    cout << "What was the hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TAX_RATE;
    clothesAmount = netIncome * CLOTHES_PERCENTAGE_OF_INCOME;
    schoolAmount = netIncome * SCHOOL_PERCENTAGE_OF_INCOME;
    netIncome -= (clothesAmount + schoolAmount); // Calculate what is now left
    bondsAmount = netIncome * SAVINGS_BONDS_PERCENTAGE_OF_INCOME;
    parentsBondsAmount = bondsAmount * PARENTS_CO_CONTRIBUTION_AMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;

    return 0;
}
