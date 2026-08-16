class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        while(l<r){
            int m=(l+r)/2;
            long long hr=0;
            for(int b:piles){
                hr+=(b+m-1)/m;
            }
            if(hr<=h){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};