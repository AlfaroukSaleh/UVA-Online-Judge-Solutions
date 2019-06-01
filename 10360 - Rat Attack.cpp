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

int array1 [1024][1024];

int main (){
    int s; cin>>s; int a,b,c;
    while (s--){
        int max=-1; int x=0,y=0;

        int d; cin>>d;
        int n;cin>>n;
        while (n--){
            cin>>a>>b>>c;
            for (int i=a-d;i<=a+d;i++){
                if (i<=0||i>=1024) continue;
            for (int j=b-d;j<=b+d;j++){
                                if (j<=0||j>=1024) continue;
                array1[i][j]+=c;
                
            }
            
            }
            
            
            }
        
        for (int i=0;i<1024;i++){
                for (int j=0;j<1024;j++){
                    if (max<array1[i][j]){
                        max=array1[i][j];
                        x=i;
                        y=j;
                    }
                
                }
            }
        
        cout<<x<<" "<<y<<" "<<max<<endl;
         for (int i=0;i<1024;i++){
                for (int j=0;j<1024;j++){
                    array1 [i][j]=0;
                
                }
            }
            
            
        }
        
        
        
        
       

    }
