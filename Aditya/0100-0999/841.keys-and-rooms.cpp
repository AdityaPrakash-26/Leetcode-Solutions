/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = size(rooms);
        vector<bool>visited(n, false);
        dfs(rooms, visited, 0);    // start from room 0
        for(auto v : visited) {
            if(!v) { // if all rooms were not reached from room 0, return false
                return false;
            }
        } 
        return true; 
    }

    void dfs(vector<vector<int> >& rooms , vector<bool>& visited, int i){
        visited[i] = true;
        for(auto& room : rooms[i]) {
            if(!visited[room]) {
                dfs(rooms, visited, room);
            }
        }
    }
};
// @lc code=end

