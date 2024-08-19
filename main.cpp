#include <iostream>
#include <cmath>
#include<algorithm>


using namespace std;

int main()
{
    double n , m  , k ;
    cin >> n >> m  >> k  ;
    double res = (n*m)/k ;
    long long q = res ;
    double bin = res - q ;
    if(bin>0)
    {
        cout << "double";
    }
    else if(q<=2147483647)
    {
        cout << "int";
    }
    else
    {
        cout << "long long";
    }

    return 0;
}
