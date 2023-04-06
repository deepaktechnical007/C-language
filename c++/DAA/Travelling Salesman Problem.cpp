#include<iostream>
using namespace std;
int arr[10][10],visited[10],n,cost=0;
void input(){
     int i,j;
     cout<<"enter the no of cities : ";
     cin>>n;
     cout<<"enter the cost matrix : ";
     for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	   cin>>arr[i][j];
	   visited[i]=0;
	}
     }
}
int least(int c){
    int i,nc=999;
    int min=999,kmin;
    for(i=0;i<n;i++){
       if((arr[c][i]!=0)&&(visited[i]==0)){
	  if(arr[c][i]+arr[i][c]<min){
	    min=arr[i][0]+arr[c][i];
	    kmin=arr[c][i];
	    nc=i;
	  }
       }
    }
    if(min!=999){
      cost+=kmin;
    }
    return nc;
}
void min(int city){
     int i,ncity;
     visited[city]=1;
     cout<<city+1<<" --> ";
     ncity=least(city);
     if(ncity==999){
       ncity=0;
       cout<<ncity+1;
       cost+=arr[city][ncity];
       return;
     }
     min(ncity);
}
int main(){
     cout<<"Name : Deepak Babu"<<endl<<"URN : 2102147"<<endl;
     cout<<"Date : 27/03/2023"<<endl<<"Topic : Travelling Salesman Problem"<<endl;
     input();
     cout<<endl<<"The path is : ";
     min(0);
     cout<<endl<<"minimum cost is : "<<cost<<endl;
     return 0;
}
