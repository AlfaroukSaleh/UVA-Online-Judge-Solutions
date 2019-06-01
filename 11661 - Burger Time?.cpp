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
    int l;
    cin>>l;
    
    
    while (l!=0){
        int flag=0;
        char arr[l];
        cin>>arr;
        int mindist=l;
        int lastr=-l,lastd=-l;

       
        for (int i=0;i<l;i++){
                        
            if (arr[i]=='Z'){ mindist=0;
            break;}
            else {
                
                
               
                if (arr[i]=='R'){ 
                    mindist= min(mindist,i-lastd); 
                    lastr=i;
                    
                }
                else if (arr[i]=='D'){
                   
                    mindist=min(mindist,i-lastr);
                    lastd=i;
                   

                }
                
            }
        
        }
        
        
        cout<<mindist<<endl;
        
        
        
        
      
        cin>>l;
    }
    
    
}
