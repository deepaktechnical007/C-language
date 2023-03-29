#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}
int partition(int arr[],int start,int end){
 int pindex=start;
 int pivot=arr[end];
 for(int i=start;i<end;i++)
 {
if(arr[i]<pivot)
{
 swap(&arr[i],&arr[pindex]);
 pindex++;
}
 }
 swap(&arr[end],&arr[pindex]);
 return (pindex);
}
void quicksort(int arr[],int start,int end){
 if(start<end){
 int pindex=partition(arr,start,end);
 quicksort(arr,start,pindex-1);
 quicksort(arr,pindex+1,end);
 }
}
int main(){
 int arr[50],n,i;
cout<<"NAME : Deepak Babu "<<endl;
 cout<<"Roll No. : 2102147 "<<endl;
 cout<<"Date : 02-02-2023 "<<endl;
 cout<<"Title : MERGE SORT"<<endl; 
 cout<<"enter the size of array :";
 cin>>n;
 cout<<"enter the array elements : "<<endl;
 for(i=0;i<n;i++){
 cin>>arr[i];
}
 quicksort(arr,0,n-1);
 cout<<"After mergesort : "<<endl;
 for(i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
 return 0;
}
