#include<iostream>
using namespace std;
int main()
{
 int i,a[15],n,min,max;
 cout<<"NAME : Deepak Babu "<<endl;
 cout<<"Roll No. : 2102147 "<<endl;
 cout<<"Date : 02-02-2023 "<<endl;
 cout<<"Title : FIND MIN-MAX ELEMENT IN THE LIST "<<endl; 
 cout<<"enter total elements in the array :"<<endl;
 cin>>n;
 cout<<"enter the array elements : "<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 max=a[0],min=a[0];
 for(i=1;i<n;i++)
 {
 if(max<a[i])
 max=a[i];
 else if(min>a[i])
 min=a[i];
 }
cout<<"Maximun number is = "<<max<<endl;
cout<<"Minimum number is = "<<min<<endl;
 return 0;
}
