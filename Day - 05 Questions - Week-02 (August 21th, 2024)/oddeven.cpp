#include <iostream>
using namespace std;

string checkOddEven(int a)
{
    
    if (a % 2 == 0){
        return "Even";
    }
    return "Odd";
}

int main() 
{ 
    int num;
    cin >> num;
    cout << checkOddEven(num);
}