/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()

{
    // Declare Constants
    double N, L, Rate, AnnualRate, Payment;
    string new_name;
    
    // Define Constants
    cout << "What is the total amount of payments each month: ";
    cin >> N;
    cout << "What is the amount of the loan: ";
    cin >> L;
    cout << "What is the annual interest rate (Type the whole percent): ";
    cin >> AnnualRate;
    cout << "What is your name?: ";
    cin.ignore();
    getline(cin , new_name);
    
    // Calculate rate
    Rate = AnnualRate / 12;
    Rate /= 100;
    
    // Calculate payment
    double temp_const1, temp_const2;
    
    temp_const1 = (1 + Rate);
    temp_const2 = pow(temp_const1, N);
    Payment = ( (Rate * temp_const2) / (temp_const2 - 1) ) * L;
    
    
    // Calculate interest paid
    double interest_paid, temp_const3, temp_const4;
    temp_const3 = L / N;
    temp_const4 = Payment - temp_const3;
    interest_paid = temp_const4 * N;
    
    // Outputs
    cout << "\n========== Output ==========" << endl;
    
    Rate *= 100;
    

    
    cout << setprecision(2) << fixed;
    cout << "Loan Amount:              $" << setw(10) << L << endl;
    cout << "Monthly Interest Rate:     " << setw(10) << static_cast<int>(Rate) << endl;
    cout << "Number of Payments:        " << setw(10) << static_cast<int>(N) << endl;
    cout << "Monthly Payment:          $" << setw(10) << Payment << endl;
    
    double total_paid_back;
    total_paid_back = L + interest_paid;
    
    cout << "Amount Paid Back:         $" << setw(10) << total_paid_back << endl;
    cout << "Interest Paid:            $" << setw(10) << interest_paid << endl;
    
    cout << new_name << " paid a total interest in the amount of $" << interest_paid << " in " << static_cast<int>(N) << " months." << endl;
    return 0;
}

