#include <iostream>
#include <math.h>
using namespace std;


unsigned long long int Factorial(double x)
{
    if(x==1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x*Factorial(x-1);
    }
}

unsigned long long int SubFactorial(double x)
{
    long double sum = 0.0;
    for (double i = 0.0; i <= x; i++)
    {
        sum += (pow(-1.0,i) / Factorial(i));
    }
    return Factorial(x) * sum;
}

int rep = 15;

int main()
{
    cout.precision(200);
    for(int counter = 1; counter <= rep; counter++)
    {
        cout << SubFactorial(counter) << "\n";
    }
    return 0;
}
