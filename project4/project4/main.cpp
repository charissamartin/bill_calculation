// Project 4-2
// Charissa Martin
// Mobile Service Provider
#include <iostream>
using namespace std;
int main ()
{
    int data_usage;
    
    double A = 39.99;
    double B = 59.99;
    double C = 69.99;
    double D = 10.00;
    
    char package;
    
    cout << "There are three data packages available:\n";
    cout << "Package A: For $39.99 per month, 4GB of data are provided. Additional data costs $10 per gigabyte. \n";
    cout << "Package B: For $59.99 per month, 8GB of data are provided. Additional data costs $10 per gigabyte.\n";
    cout << "Package C: For $69.99 per month, unlimited data is provided.\n";
    cout << "To calculate your bill, please enter your current data package: A, B, or C. \n";
    cin >> package;
    
    while(!(package ='A'||package ='B'||package ='C'))
    {
        
        cout << "Package must be A, B, or C\n";
        
        cout << "To calculate your bill, please enter your current data package: A, B, or C. \n";
        
        cin >> package;
    }
    
    
    cout << "How many GB of data was used in the last billing cycle? ";
    cin >> data_usage;
    
    
    float planCharges;
    float extraCharges = 0;
    
    switch(package)
    {
        case 'A':
            planCharges = A;
            if( data_usage > 4 )
            {
                extraCharges = D * (data_usage - 4);
            }
            
            break;
        case 'B':
            planCharges = B;
            if( data_usage > 8 )
            {
                extraCharges = D * (data_usage - 8);
            }
            break;
        case 'C':
            planCharges = C;
            break;
        default:
            cout<<"That is not a valid option. Please choose A, B, or C."<<endl;
            
    }
    
    float totalBill = planCharges + extraCharges;
    cout << "Your Bill : $" << totalBill;
    return 0;
}



