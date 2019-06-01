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

int main () {

        int d=0;int casenum=0;
    while (true){
                char array[1000005];
              
                int x,y,z;


                if (d>0){cin.get();}
                array[0]='\n';
                cin.get(array,1000005);
                if (strlen(array)==0){
                    break;
                }

               int t;
                cin>>t;
                cout<<"Case "<<++casenum<<":"<<endl;
                while (t--){
                     int flag=1;
                     scanf("%d%d",&x ,&y);
                     if (x>y)swap(x,y);
    for (int i=x;i<y;i++){
        if (array[i]!=array[i+1]){flag=0; break;}
        
    }
    
    flag ? cout<<"yes":cout<<"no";}                                  

    d++;
    
    }
    
} 
