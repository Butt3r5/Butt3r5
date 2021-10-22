
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
//What is given
    const double total_people = 16500;
    const double one_or_more = .15;
    const double citrus_flavored = .58;
    
//Calculating total of one or more 
    double total_oom;
    total_oom = total_people * one_or_more;
//Calculating total of citrus citrus flavored
    double total_citrus;
    total_citrus = total_oom * citrus_flavored;
//Calculating total of the rest of people
    double total_rest;
    total_rest = (1-one_or_more)*total_people;
    
//Output
    cout<<"The approximate number of customers in\n";
    cout<<"the survey who purchase one or more \nenergy drinkes per week: " << total_oom;
    cout<<"\nThe approximate number of customers in\n";
    cout<<"the survey who prefer citrus-flavored\n";
    cout<<"energy drinks: " << total_citrus;
    cout<<"\nThe approximate number of customers in\n";
    cout<<"the survey who purchase any other drink\n";
    cout<<"but energy drinks per week: " << total_rest;

    return 0;
}
