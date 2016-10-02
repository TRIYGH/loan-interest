// T. Robert Ward
// June 5, 2013

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "*****  LOAN INTEREST CALCULATOR  *****\n\n" << endl;

    double loanAmount, interestRate, monthlyPayment, monthlyInterestRate, interestPaid, cumulativeInterest, originalAmount;
    int numMonths;
    cumulativeInterest = 0;

    cout << "Enter in the loan amount: ";
    cin >> loanAmount;
    originalAmount = loanAmount;

    cout << "\nEnter in the interest rate:  0";
    cin >> interestRate;

    // calc it

    monthlyPayment = loanAmount / 20;
    monthlyInterestRate = interestRate / 12;
    numMonths = 0;

    // printout

        cout << "***************************************************\n";
        cout << " Balance     -\t( Payment    -\tMonthly Interest)\n";
    do
      {
        interestPaid = monthlyInterestRate * loanAmount;
        cumulativeInterest = cumulativeInterest + interestPaid;
        cout << setprecision(7) << "\t" << loanAmount << "\t\t" << monthlyPayment << "\t\t" << interestPaid << endl;
        loanAmount = loanAmount - ( monthlyPayment - interestPaid );
        numMonths = numMonths + 1;
      }while(loanAmount > 0);
    cout  << "\t" << loanAmount << endl;
    cout << "It took " << numMonths << " months to pay off.\n\n";
    cout << "The simple Annualized interest rate was: " << cumulativeInterest / originalAmount / (numMonths / 12) << endl;

    return 0;
}
