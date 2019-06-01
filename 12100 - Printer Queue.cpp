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
    
    
    int w; cin>>w; 
    while (w--){
    int n; int inx; int old; int nw; int nwinx;int e=0;
    cin>>n>>inx;
    
    
    vector<int> array;queue <int> array2; int qq; int x;int y;int count =0;
    for (int i=0;i<n;i++)
    { cin>>x;
    array.push_back(x);
    array2.push(i);}
    
   
    int flag;
    int size=array.size();
    while (!array.empty()){//e++;
    for (int j=1;j<array.size();j++){
        auto itr = array.begin(); flag=0;
        
        if (array[0]<array[j]){
            y=array[0];
            array.erase(itr);
            array.push_back(y);
            array2.push(array2.front()); 
             array2.pop();
        flag=1;break;
        
        }
        
    }if (flag==0) {
        array.erase(array.begin());
        qq=array2.front();
        //q3.push(array2.front());
        if (array2.front()!=inx){count++;         array2.pop();}
        else {cout<<++count<<endl;break;}
        

        
        
        }
    
    }
    
  
    }
    
   
}
