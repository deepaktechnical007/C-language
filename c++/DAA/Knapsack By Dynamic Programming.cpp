#include<iostream>
using namespace std;
int max(int a,int b){
     if(a>b)
       return a;
     else
      return b;
}

int knapsack(int W,int n,int wt[],int pf[]){
     int i,j,p[10][10];
     for(i=0;i<=n;i++){
	for(j=0;j<=W;j++){
	   if(i==0||j==0)
	     p[i][j]=0;
	   else if(wt[i-1]<=j){
	     p[i][j]=max(p[(i-1)][j],(pf[i-1]+p[(i-1)][(j-wt[i-1])]));
	   }
	   else{
	     p[i][j]=p[i-1][j];
	   }
	}
     }
     for(i=0;i<=n;i++){
	for(j=0;j<=W;j++){
	   cout<<p[i][j]<<"  ";
	}
	cout<<endl;
     }
     cout<<"total profit  : "<<p[n][W];
}
int main(){
	    cout<<"Name : Deepak Babu "<<endl<<"URN : 2102147"<<endl;
	    cout<<"Date : 28/02/2023"<<endl<<"Topic : Knapsack By Dynamic Programming";
	    int wt[10],pf[10],i,n,W;
	    cout<<endl<<"enter  n : ";
	    cin>>n;
	    cout<<"enter the weights and profits "<<endl;
	    for(i=0;i<n;i++){
	       cin>>wt[i];
	       cin>>pf[i];
	    }
	    cout<<"enter the W : ";
	    cin>>W;
	    knapsack(W,n,wt,pf);
	    return 0;
}
