#include <bits/stdc++.h>
using namespace std;
int main(){
float a, b, c, x1, x2;
float x = (b*b) - (4*a*c);

    if(x <= 0)
        {
        x = x*(-1);
        cout<<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i y "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
        }
    else
        {
        x1 = (-b + sqrt(x)) / (2*a);
        x2 = (-b - sqrt(x)) / (2*a);

        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
        }
}
