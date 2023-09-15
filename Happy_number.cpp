class Solution {
public:
    bool isHappy(int n) {
        int new_n = n;
        int tries = 20;
        while (tries != 0){
            int sum = 0;
            while (new_n != 0) {
                int dig = new_n % 10;
                sum = sum + dig * dig;
                new_n = new_n / 10;
            }
            if (sum == 1) {
                return true;
            } else {
                new_n = sum;
            }
            tries--;
        }
        return false;
    }
};