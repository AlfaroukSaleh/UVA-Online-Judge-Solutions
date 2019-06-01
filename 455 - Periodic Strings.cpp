#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include<string.h>
#include<list>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  }
   
int main () {
    
    int n; cin>>n;int d=0;
    while (n--){
char s[100];   cin>>s; 
int size = strlen(s);
    sort(s,s+size);
    set<char> sett;
    for (int i=0;i<strlen(s);i++){
        sett.insert(s[i]);
    }
    auto itr=sett.begin();
    
    
    int cnt=0;    if (sett.size()==1){if (d!=0)cout<<"\n"; cout<<"1";if (n>=1)cout<<"\n"; d++; continue;}
    int min=1000;
   while (itr!=sett.end())
   {int z=count (s,s+size,*itr++); 
   if (min>z) min=z;
   cnt+=z;
   
    }
    int c=gcd(size,min);
   
    cnt=cnt/c; 
    if (d!=0)cout<<"\n";
       cout<<cnt<<endl;
    d++;}

}
