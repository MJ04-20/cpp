#include <iostream>

using namespace std;
int main()
{
    string ab="dsjnads";
    string abc;
    cout<<ab;
    
    cout<< "\nenter\n";
    cin >> abc;
    cout << abc;
    cout <<"\n2nd index ="<<abc[1];
    abc=abc+"  " +abc;
    cout <<"\nnew = "<<abc;
    abc.append("  meow");

    cout <<"\nnew = "<<abc;

// substr
string sub=abc.substr(3,2);
cout<<"\nsub\n";
cout << sub;
}