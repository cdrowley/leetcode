/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int tmp = x;
        long long res = 0;

        while(tmp) {
            /*
            - times 10 to move the digit left
            - add last digit of tmp to res
            - remove last digit of tmp

            isPalindrome(123):
            - ( 0 * 10) + (123 % 10) = 3
            - ( 3 * 10) + ( 12 % 10) = 32
            - (32 * 10) + (  1 % 10) = 321
           */ 
            res = res * 10 + tmp % 10;
            tmp /= 10;
        }
        return res == x;
    }
};
// @lc code=end

