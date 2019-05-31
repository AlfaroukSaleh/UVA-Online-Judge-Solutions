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

    int array[10000];
    int x; int z;
    int sum;
    cin>>z;

   
    
    while (z){
        sum=0;
            int arrayb[10000]={0};

        cin>>x;
        
         for (int i =0;i<x;i++){
        cin>>array[i];
    }
        
        for (int i=0;i<x;i++){
            for (int j=0;j<i;j++){
                if (array[i]>=array[j]) arrayb[i]++;
                
            }
        }
        for (int i=1;i<x;i++){
            sum+=arrayb[i];
           
        }
        
    
        cout<<sum<<endl;
        --z;
    }
    
    
    return 0;
}
