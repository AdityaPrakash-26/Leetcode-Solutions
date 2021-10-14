/*
Accepted
116/116 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.16 % of cpp submissions (6 MB)
*/

/*
 * @lc app=leetcode id=1041 lang=cpp
 *
 * [1041] Robot Bounded In Circle
 */

// @lc code=start
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int direction = 0;    
        int x = 0;
        int y = 0;
        
        for (char c : instructions) {
            if (c == 'G') {
                go(direction, x, y);
            } else if (c == 'L') {
                direction = ((direction - 90) + 360) % 360; // floor mod
            } else if (c == 'R') {
                direction = (direction + 90) % 360;
            }
        }
        
        if (x == 0 && y == 0)
            return true;
        
        if (direction == 0)
            return false;
        
        return true;
    }
    
    void go(int& direction, int& x, int& y) {
        if (direction == 0) {
            y++;
        } else if (direction == 90) {
            x++;
        } else if (direction == 180) {
            y--;
        } else if (direction == 270) {
            x--;
        }
    }
};
// @lc code=end

