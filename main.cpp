#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter a first number:";
    cin >> num1;
    cout<<"enter a second:";
    cin >> num2;
    int sum=num1 + num2;
    cout << "sum:"<< sum << endl;
    int sub=num1 - num2;
    cout << "subtraction:"<< sub << endl;
    int mul=num1 * num2;
    cout << "multiplication:"<< mul <<endl;
    int div=num1 / num2;
    cout << "division:"<< div <<endl;
    int modulus=num1 % num2;
    cout << "modulus:"<< modulus << endl;
return 0; 
} 

 