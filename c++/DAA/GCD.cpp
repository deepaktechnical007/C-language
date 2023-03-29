#include<iostream>
using namespace std;
int main()
{
 int a,b,i,gcd;
 cout<<"NAME : Deepak Babu "<<endl;
 cout<<"Roll No. : 2102147 "<<endl;
 cout<<" Date : 02-02-2023 "<<endl;
 cout<<" Title : GCD OF TWO NUMBER "<<endl; 
 cout << "enter two integer :"<<endl;
 cin>>a; cin>>b;
 for(i=1;i<=a && i<=b ;i++)
 {
 if (a%i==0 && b%i==0)
 gcd=i; }
 cout<<"GCD of two numbers :"<<gcd<<endl;
return 0;
}
