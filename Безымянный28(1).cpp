#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    double c;
    cin >> a >> b;
    c=b/100;
    for (int i = 0; i<5; i++){
        a*=(1+c);
    }
    cout <<a;
}
