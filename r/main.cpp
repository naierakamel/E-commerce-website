#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    long long s=a*b*c*d;

    int x=s%100;
    if(x<10)
        cout <<0<<x;
    else
        cout <<x;
    return 0;
}
