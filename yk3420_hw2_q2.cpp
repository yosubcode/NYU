#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIMES   = 10;
const int NICKELS = 5;
const int PENNIES = 1;

int main(){

    int dollars, cents;
    int totalAmount, remainingAmount;
    int totalQuarter, totalDimes, totalNickels, totalPennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    // Convert dollars to cents and calculate the total amount in cents
    totalAmount     = (dollars*100) + cents;
    remainingAmount = totalAmount;

    // Calculate the maximum number of quarters and remaining amount
    totalQuarter    = totalAmount / QUARTER; 
    remainingAmount = totalAmount % QUARTER;

    // Calculate the maximum number of dimes and remaining amount
    totalDimes      = remainingAmount / DIMES;
    remainingAmount = remainingAmount % DIMES;

    // Calculate the maximum number of nickels and remaining amount
    totalNickels    = remainingAmount / NICKELS;
    remainingAmount = remainingAmount % NICKELS;

    // Calculate the maximum number of pennis and there will be no remaining amount left.
    totalPennies    = remainingAmount / PENNIES;

    cout<<dollars<<" dollars and "<<cents<<" cents are:\n";
    cout<<totalQuarter<<" quarters, "<<totalDimes<<" dimes, "<<totalNickels<<" nickels and "<<totalPennies<<" pennies "<<endl;

    return 0;
}
