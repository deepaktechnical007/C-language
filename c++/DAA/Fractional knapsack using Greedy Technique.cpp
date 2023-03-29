#include<iostream>
using namespace std;
void knapsack(int W,int wt[],int pf[],int n){
 float pwratio[10],fract[10],weight,profit;
 cout<<"p/w ratio in decreasing order : ";
 for(int i=0;i<n;i++){
pwratio[i]=pf[i]/wt[i];
cout<<pwratio[i]<<" ";
 }
 for(int i=0;i<n;i++){
 fract[i]=0;
 }
 weight=0;profit=0;
 for(int i=0;i<n;i++){
if(weight+wt[i]<=W){
 weight=weight+wt[i];
 fract[i]=1;
 profit=profit+pf[i];
}
else{
 fract[i]=(W-weight)/wt[i];
 profit=(pf[i]*fract[i])+profit;
 weight=(wt[i]*fract[i])+weight;
}
if(weight==W){
 break;
}
 }
 cout<<endl<<"max profit possible is :"<<profit<<endl;
 cout<<"fraction of items used : "<<endl;
 for(int i=0;i<n;i++){
 cout<<fract[i]<<" of "<<i+1<<endl;
 }
}
int main(){
 
 cout<<"Name : Deepak Babu" <<endl;
 cout<<"ROLL NO.: 2102150"<<endl;
 cout<<"Date : 02-02-2023 "<<endl;
 cout<<"Title: Fraction Knapsack by Greedy Approach"<<endl;
 int wt[10],pf[10],n,i,W;
 cout<<"enter the no. of items : ";
 cin>>n;
 cout<<"enter weights of each item ";
 for(i=0;i<n;i++){
 cin>>wt[i];
 }
 cout<<"enter profit of each item ";
 for(i=0;i<n;i++){
 cin>>pf[i];
 }
 cout<<"enter the total capacity : ";
 cin>>W;
 knapsack(W,wt,pf,n);
 return 0;
}

