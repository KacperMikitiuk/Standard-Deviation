#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double odchylenie, a=0, ai, s=0, x, y, w;
    double n;
    cout<<"Ile chcesz wpisac wartosci\n";
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            a+=x;
        }
        s=a/n;
         cout<<"Srednia arytmetyczna wynosi: "<<setprecision(10)<<s;
        cout<<"wpisz ponownie:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ai=(x-s)*(x-s);
            y+=ai;
        }
    cout<<" Z ktorego wzoru chcesz skorzystac:\n press 1 odchylenie=sqrt(suma(xi-s)/(n-1))\n ";
    cout<<"press 2 odchylenie=sqrt(suma(xi-s)/n)\n";
    cin>>w;
    if(w==1)
        {
            odchylenie=sqrt(y/(n-1));
    }
    else if(w==2)
        {
            odchylenie=sqrt(y/n);
        }
        cout<<"odchylenie standardowe wynosi: "<<setprecision(10)<<odchylenie<<endl;
            return 0;
}
