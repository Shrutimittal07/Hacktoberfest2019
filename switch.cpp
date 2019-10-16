#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);
long long convertDecimalToBinary(int);
int convertBinarytoOctal(long long);
long long convertOctalToBinary(int);
int octalToDecimal(int octalNumber);
int decimalToOctal(int decimalNumber);

int main() {
    int option;
    while(1){
    cout<<"\nChoose any one--"<<endl;
    cout<<"1.Binary to Decimal"<<endl;
    cout<<"2.Binary to Octal"<<endl;
    cout<<"3.Decimal to Binary"<<endl;
    cout<<"4.decimal to Octal"<<endl;
    cout<<"5.Octal to Binary"<<endl;
    cout<<"6.Octal to Decimal"<<endl;
    cout<<"7.Exit"<<endl;
    cin>>option;
        switch(option){
            case 1:
                int n1;
                cout << "Enter a binary number: ";
                cin >> n1;
                cout << n1 << " in binary = " << convertBinaryToDecimal(n1) << " in decimal."<< endl;
                break;
            case 2:
                int n2;
                cout << "Enter a binary number: ";
                cin >> n2;
                cout << n2 << " in binary = " << convertBinarytoOctal(n2) << " in octal."<< endl;
                break;
            case 3:
                int n3;
                cout << "Enter a decimal number: ";
                cin >> n3;
                cout << n3 << " in decimal = " << convertDecimalToBinary(n3) << " in binary." << endl ;
                break;
                
            case 4:
                int n4;
                cout << "Enter a decimal number: ";
                cin >> n4;
                cout << n4 << " in decimal = " << decimalToOctal(n4) << " in octal."<<endl;
                break;
                
            case 5:
                int n5;
                cout << "Enter an octal number: ";
                cin >> n5;
                cout << n5 << " in octal = " << convertOctalToBinary(n5) << " in binary."<< endl ;
                break;
                
            case 6:
                int n6;
                cout << "Enter an octal number: ";
                cin >> n6;
                cout << n6 << " in octal = " << octalToDecimal(n6) << " in decimal."<<endl;
                break;
                
            case 7:
                exit(0);
        }
    }
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}
long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}

