#include<iostream>
using namespace std;
int patternSearch(char text[],int n,char pattern[],int m)
{
 int i=0,j=0;
 for(i=0;i<=(n-m);i++)
 {
 while ((j<=m-1)&&(pattern[j]==text[i+j])){
 j++;
 }
 if (j==m){
 cout<<"Pattern occur at: "<<i<<endl;
 return 0;
 }
 }
 cout<<"Pattern not found in the text !"<<endl;
 return 0;
}
int main(){
 cout<<"NAME: Deepak Babu"<<endl;
 cout<<"ROLL NO: 2102147"<<endl;
 cout<<"DATE: 02-02-2023"<<endl;
 cout<<"TOPIC: MATCHING PATTERN"<<endl;
 char text[10], pattern[10];
 int i , n ,m;
 cout<<"Enter the number of alphabet in the text: ";
 cin>>n;
 cout<<"Enter the text: "<<endl;
 for(i=0;i<n;i++){
 cin>>text[i];
 }
 cout<<"Enter the number of alphabets in pattern: "<<endl;
 cin>>m;
 cout<<"Enter the pattern: "<<endl;
 for(i=0;i<m;i++){
 cin>>pattern[i];
 }
 patternSearch(text, n, pattern, m);
 return 0;
}

