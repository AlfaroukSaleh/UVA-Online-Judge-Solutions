
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

int main (){
   
    while (true){
    string s; int x=0,y=-1;
    
     getline (cin,s);
    if (s[0]==NULL) break; 
     while (y!=s.length()-1){   
         string sub;

     x=y+1;
    if (s.find(' ')>0&&s.find(' ')<10000){ y=s.find(' '); }
    else {y=s.length(); }
     s.replace(y,1,"/");
     reverse (&s[x],&s[y+1]);
    
    
     if (y==s.length()) break;
    }
     
     int z = s.find('/');
     while (z>=0&&z<10000){
         s.replace(z,1," ");
         z=s.find("/");
         
     }
     s.erase(0,1);
   cout<<s<<endl;
    
    }
}
