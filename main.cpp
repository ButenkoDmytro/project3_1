#include <iostream>  
using namespace std;  
  
int main()  
{  
    int a = 1;  
    int b = 1;  
    int n;  
    cout << "Enter the number: ";  
    cin >> n;  
    while (a <= n)  
    {  
        b *= a++;  
    }  
    cout << "Factorial:" << b << endl;  
}