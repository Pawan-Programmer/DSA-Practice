// In Class Type Solution as same as Leetcode problems

class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long sum = 0;
        long long i = 1;
        while(i<num){
            if(num%i==0){
                sum = sum + i ;
            }
            i++;
        }
        if(sum == num){
            return true;
        }
        return false;
    }
};