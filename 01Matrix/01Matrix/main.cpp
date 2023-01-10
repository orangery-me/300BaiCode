//
//  main.cpp
//  01Matrix
//
//  Created by Đinh Bảo Châu Thi on 1/1/23.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int di[4]={-1,0,0,1};
        int dj[4]={0,-1,1,0};
        int n=mat.size();
        int m=mat[0].size();
        //vector <vector<int>> res;
        queue <pair<int,int>> q;
        
        for (int i=0; i< n; ++i){
            for (int j=0; i< m; ++j)
                // if value of a cell is 0 -> res=0 and push in queue
                if (mat[i][j] ==0 ){
                   // res[i][j]=0;
                    q.push({i,j});
                }
                else // mark as unvisted
                    mat[i][j]=-1;
        }
        
        while (! q.empty()){
            pair <int,int> top= q.front();
            q.pop();
            int x=top.first;
            int y=top.second;
            
            for (int i=0; i<4; ++i){
                int newx= x+di[i]; int newy= y+dj[i];
                
                if (newx <0 || newx ==n || newy <0 || newy ==m|| mat[ newx ][ newy ] !=-1)
                    continue;
                mat[ newx ][ newy ]= mat[x][y] +1;
            }
            
        }
        
        return mat;
        
    }
};

int main() {
    vector <vector <int>> mat;
    
    int n,m; cin>>n>>m;
    
    for (int i=0; i<n; ++i){
        vector <int> row;
    
        for (int j=0; j<m;++j){
            int x; cin>>x;
            row.push_back(x);
        }
        mat.push_back(row);
    }
    Solution p;
    
    for (auto it: p.updateMatrix(mat)){
        for (auto tm: it)
            cout <<tm<<" ";
        cout <<endl;
    }
  
}
