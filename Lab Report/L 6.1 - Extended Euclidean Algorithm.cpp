#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Extended euclid algorythm test \n\n";
    cout<<"Enter two positive number ax + by = gcd(a,b)  : ";
    cin>>a>>b;

    int value1=a, value2=b;

    int x = 0, y = 1, prevx = 1, prevy = 0;
    cout<<endl<<a<<" "<<b<<" "<<prevx<<" "<<prevy<<" "<<x<<" "<<y<<endl;
        while (b != 0)
        {
            int temp=b;
            int division=a/b;
            b=a%b;
            a=temp;

            temp = x;
            x = prevx - division * x;
            prevx = temp;

            temp = y;
            y = prevy - division * y;
            prevy = temp;
            cout<<endl<<a<<" "<<b<<" "<<prevx<<" "<<prevy<<" "<<x<<" "<<y<<endl;
        }

        cout<<"\nRoots  x : "<< prevx <<" y :"<< prevy<<endl;
        cout<<"\n"<<a<<" = "<<prevx<<"*"<<value1<<" + "<<prevy<<"*"<<value2<<endl<<endl;

        return 0;
}


