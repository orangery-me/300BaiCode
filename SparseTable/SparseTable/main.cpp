//
//  main.cpp
//  SparseTable
//
//  Created by Đinh Bảo Châu Thi on 1/4/23.
//

#include <iostream>
#include <cmath>
using namespace std;

const int nmax=1000;
int n;
int a[nmax];
int m[nmax][nmax];

int query(int l, int r){
    
    int len= r-l+1;
    int j=log(len)/log(2);
    return min( m[l][j], m[ r- (1<<j) +1 ][j]);
    
}

int main(int argc, const char * argv[]) {
    cin >>n;
    for (int i=0; i<n; ++i){
        cin >>a[i];
        m[i][0]=a[i];
    }
    int LOG= log(n)/log(2);
    
    for (int k=1; k<=LOG; ++k)
        for (int i=0; i + (1<<k) -1 <n; ++i)
            m[i][k]= min( m[i][k-1], m[i+ (1<< (k-1)) ][k-1] );
    
    int q; cin >>q;
    while (q--){
    int l,r; cin >>l>>r;
        cout <<query(l,r) <<endl;
    }
    
}
