/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // defining variables
    int l1, l2, w1, w2, area1, area2;
    
    // ask the user what the lengths and widths are
    cout << "What is the length of the first rectangle?: ";
    cin >> l1;
    cout << "What is the width of the first rectangle?: ";
    cin >> w1;
    cout << "What is the length of the second rectangle?: ";
    cin >> l2;
    cout << "What is the width of the second rectangle?: ";
    cin >> w2;
    
    // calculating areas of rectangles
    area1 = l1 * w1;
    area2 = l2 * w2;
    
    // if statements
    if (area1 > area2)
    {
        cout << "Rectangle 1 is the largest.";
    }
    else if (area1 == area2)
    {
        cout << "Rectangle 1 and 2 have an equal area.";
    }
    else if (area1 < area2)
    {
        cout << "Rectangle 2 is the largest";
    }
    

    return 0;
}
