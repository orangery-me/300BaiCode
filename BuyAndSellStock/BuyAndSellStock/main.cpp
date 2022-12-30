//
//  main.cpp
//  BuyAndSellStock
//
//  Created by Đinh Bảo Châu Thi on 12/29/22.
//

// Loi giai ban dau

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack <int> ucv;
        ucv.push(prices[0]);
        int nmax=0,dau=prices[0];
        
        for (int i=0; i< prices.size(); ++i){
            if (ucv.size()==1)
                dau=ucv.top();
            
            if (prices[i] > ucv.top()){
                ucv.push(prices[i]);
                int d=ucv.top()-dau;
                if (d >nmax)
                    nmax=d;
            }
            
            else{
                while (!ucv.empty() && prices[i] <= ucv.top())
                    ucv.pop();
                ucv.push(prices[i]);
            }
        }
        return nmax;
    }
};

// Loi giai toi uu

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=1, nmax=0;
        while (r< prices.size()){
            if (prices[r] > prices[l]){
                int d=prices[r]-prices[l];
                if (d>nmax)
                    nmax=d;
            }
            else
            l=r;
            r++;
        }
        return nmax;
    }
};

// Ham main
int main(int argc, const char * argv[]) {
    Solution p;
    vector <int> prices;
    for (int i=0; i<6; ++i){
        int x; cin>>x;
        prices.push_back(x);
    }
    cout <<p.maxProfit(prices);
    
}
