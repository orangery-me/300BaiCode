//
//  main.cpp
//  FirstBadVersion
//
//  Created by Đinh Bảo Châu Thi on 12/30/22.
//

class Solution {
public:
    int firstBadVersion(int n) {
        return binary(1,n);
    }
    int binary( int l, int r){
        int mid=(l+r)/2;
        if (l==r)
            return (isBadVersion(l));
        
        if ( isBadVersion(mid) )
            return binary(l,mid);
        else
            return binary(mid+1,r);
    }
};

