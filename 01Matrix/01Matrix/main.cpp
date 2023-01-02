//
//  main.cpp
//  01Matrix
//
//  Created by Đinh Bảo Châu Thi on 1/1/23.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> res;
        int di[4]={-1,0,0,1};
        int dj[4]={0,-1,1,0};
        for (int i=0; i< mat.size(); ++i){
            for (int j=0; i< mat[i].size(); ++j)
                if (mat[i][j] ==0 )
                    res[i][j]=0;
                else
                    for (int t=0; t<4; ++t){
                        if (res[i][j] !=0 )
                            res[i][j]=min( res[i][j], res[i+di[t]][j+dj[t]] +1);
                        else
                            res[i][j]= res[i+di[t]][j+dj[t]] +1;
                    }
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    vector <vector <int>> mat;
    int n,m; cin>>n>>m;
    for (int i=0; i<m; ++i)
        for (int j=0; j<n;++j){
            int x; cin>>x;
            mat[i].push_back(x);
        }
    
    Solution p;

    for (auto a:p.updateMatrix(mat) ){
        for (auto b: a)
            cout <<b<<" ";
        cout <<endl;
    }
}
