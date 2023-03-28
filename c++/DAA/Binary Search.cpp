#include<iostream>
using namespace std;
int main()
{
 int i,k,n,a[20],first,last,mid;
 cout<<"NAME : Deepak Babu "<<endl;
 cout<<"Roll No. : 2102147 "<<endl;
 cout<<" Date : 02-02-2023 "<<endl;
 cout<<" Title : BINARY SEARCH "<<endl; 
 cout<<"enter total number of elements in the list : ";
 cin>>n;
 cout<<"Enter the element (in Ascending Order) "<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"enter the required element to be search : ";
 cin>>k;
 first=0;
 mid=(first+last)/2;
 last=n-1;
 while (first <= last)
 {
 if(k==a[mid])
 {
 cout<<"Required element is found at location "<< mid+1 << endl;
 return 0;
 }
 else if (k<a[mid])
 last=mid-1;
 else
 first=mid+1;
 mid=(first+last)/2;
 
 }
 if(first>last)
 cout<<"Required element is not found in the list ";
 return 0;
 }
