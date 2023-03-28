#include<iostream>
using namespace std;
int main()
{
 int i,k,n,a[20];
 cout<<"NAME : Deepak Babu "<<endl;
 cout<<"Roll No. : 2102147 "<<endl;
 cout<<" Date : 29-03-2023 "<<endl;
 cout<<" Title : Linear Search "<<endl; 
 cout<<"enter total number of elements in the list : ";
 cin>>n;
 cout<<"Enter the element "<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"enter the required element to be search : ";
 cin>>k;
 for(i=0;i<n;i++)
 {
 if (k==a[i])
 {
 i++;
 cout<<"Required element is found at location "<< i << endl;
 return 0;
 }
 }
 if (i==n)
 cout<<"Required element is not found in the list ";
 return 0;
 }
