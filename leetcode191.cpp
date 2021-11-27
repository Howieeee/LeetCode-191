class Solution {
public:
    int count_1(uint32_t n){
       int count = 0;
       while(n){
           if(n%2 == 1)
               count++;
           n/=2;
       }
       return count;
    }
    int hammingWeight(uint32_t n) {
        return count_1(n);
    }
};
