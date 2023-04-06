#include<iostream>
using namespace std;
int source,V,E,time,visited[20],G[20][20];
void DFS(int i){
     int j;
     visited[i]=1;
     cout<<i+1<<" --> ";
     for(j=0;j<V;j++){
	if((G[i][j]==1)&&(visited[j]==0)){
	  DFS(j);
	}
     }
}
int main(){
	    cout<<"Name : Deepak Babu || URN : 2102147"<<endl;
	    cout<<"Date : 28/03/2023        || Topic : Depth First Search "<<endl;
	    int i,j,V1,V2;
	    cout<<"enter the no. of edges : ";
	    cin>>E;
	    cout<<"enter the no. of vertices : ";
	    cin>>V;
	    for(i=0;i<V;i++){
		for(j=0;j<V;j++){
		   G[i][j]=0;
		}
	    }
	    cout<<"enter the edges(format: V1 V2): ";
	    for(i=0;i<E;i++){
		cin>>V1>>V2;
		G[V1-1][V2-1]=1;
	    }
	    for(i=0;i<V;i++){
		for(j=0;j<V;j++){
		    cout<<G[i][j]<<" ";
		}
		cout<<endl;
	    }
	    cout<<"enter the source : ";
	    cin>>source;
	    DFS(source-1);
	    return 0;
}
