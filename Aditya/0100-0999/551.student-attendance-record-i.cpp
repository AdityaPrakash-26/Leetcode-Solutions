/*
Accepted
113/113 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 70.88 % of cpp submissions (6.1 MB)
*/

/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        bool hasBeenAbsentForMoreThanTwoDays = false;
        bool hasBeenLateForThreeConsecutiveDays = false;

        int totalAbsent = 0;
        int lateStreak = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == 'A') {
                totalAbsent++;
                if(totalAbsent >= 2) {
                    return false;
                }
                lateStreak = 0;
            } else if (s[i] == 'L') {
                lateStreak++;
                if(lateStreak >= 3){
                    return false;
                }
            } else {
                lateStreak = 0;
            }
        }
        return true;
    }
};
// @lc code=end

