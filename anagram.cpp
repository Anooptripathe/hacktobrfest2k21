#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;      
while(t--){
string str1,str2;  
cin>>str1;
cin>>str2;
int p[26],q[26];             
for(int i=0;i<26;i++){
 p[i]=q[i]=0;
 }
 for(int i=0;i<str1.length();i++){  
                                                                                                                                        
                                                                                                                                                                       
 p[str1[i]-97]++;
 }
 for(int i=0;i<str2.length();i++){    
 q[str2[i]-97]++;}
 int outp=0;
 for(int i=0;i<26;i++){
 outp+= abs(p[i]-q[i]);            
 }                                             
 cout<<outp<<endl;
 }
 return 0;
 }
