#include<bits/stdc++.h>
using namespace std;

int main(){

    /*

    a*b*c
    a+b+c
    (a+b)*c
    (a*b)+c
    a+(b*c)
    a*(b+c)


    */

    int a, b, c; cin>>a>>b>>c;

    if(a*b*c >= a+b+c and a*b*c >= (a+b)*c and a*b*c >= (a*b)+c and a*b*c >= a+(b*c) and a*b*c >= a*(b+c))
        cout<<a*b*c;
    else if(a+b+c >= a*b*c and a+b+c >= (a+b)*c and a+b+c >= (a*b)+c and a+b+c >= a+(b*c) and a+b+c >= a*(b+c))
        cout<<a+b+c;
    else if((a+b)*c >= a*b*c and (a+b)*c >= a+b+c and (a+b)*c >= (a*b)+c and (a+b)*c >= a+(b*c) and (a+b)*c >= a*(b+c))
        cout<<(a+b)*c;
    else if((a*b)+c >= a*b*c and (a*b)+c >= a+b+c and (a*b)+c >= (a+b)*c and (a+b)*c >= (a*b)+c and (a*b)+c >= a*(b+c))
        cout<<(a*b)+c;
    else if(a+(b*c) >= a*b*c and a+(b*c) >= a+b+c and a+(b*c) >= (a+b)*c and a+(b*c) >= (a*b)+c and a+(b*c) >= a*(b+c))
        cout<<a+(b*c);
    else
        cout<<a*(b+c);

}