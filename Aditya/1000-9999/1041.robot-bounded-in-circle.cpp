/*
Accepted
116/116 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 94.43 % of cpp submissions (5.9 MB)
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

        for(int i = 0; i<instructions.size(); i++){
            if(instructions[i] == 'G'){
                if(direction == 0){
                    y++;
                } else if(direction == 1){
                    x--;
                } else if(direction == 2){
                    y--;
                } else {
                    x++;
                }
            } else if (instructions[i] == 'L'){
                direction++;
                direction %= 4;
            } else {
                direction--;
                if(direction < 0){
                    direction = 3;
                }
                direction %= 4;
            }
        }
        
        bool isAtOrigin = (x == 0 && y == 0);

        return isAtOrigin || (direction != 0);
    }
};
// @lc code=end

