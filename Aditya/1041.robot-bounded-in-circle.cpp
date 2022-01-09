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

        for(int i = 0; i < instructions.size(); i++){
            if(instructions[i] == 'G'){
                if(direction == 0){
                    y++;
                }
                if(direction == 1){
                    x++;
                }
                if(direction == 2){
                    y--;
                }
                if(direction == 3){
                    x--;
                }
            } else if(instructions[i] == 'L'){
                direction--;
                if(direction < 0){
                    direction = 3;
                }
            } else {
                direction++;
                direction %= 4;
            }
        }
        return (direction != 0 || (x == 0 && y == 0));
    }
};
// @lc code=end

