/*
Accepted
306/306 cases passed (0 ms)
Your runtime beats 100 % of cpp submissions
Your memory usage beats 95.09 % of cpp submissions (12.9 MB)
*/

/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        // initialize a queue which will help us find answer
        
        queue<pair<int,int> > q; 
        
        int n=grid.size(),m=grid[0].size(),ans=0,ones=0,twos=0;
        
        // n is the number of columns and m is the number of rows
        // 'ans' stands for 'answer' which we will return at the end ;) .
        
        
        //  now lets traverse through the grid
        //  Observe that, here we are not using 'auto' because we need to store positions of '2's
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    twos++;// here we count the number of '2's in the grid
                    
                    q.push(make_pair(i,j));
                    
                    // here we collect all positions of '2's in our queue 
                    // so that our search can be initialised fron them
                    
                } else if(grid[i][j]==1) {
                    ones++; // here we count the number of '1's in the grid
                }
            }
        }
        
        // Observe that, in this loop we have visited each cell, so time complexity has reached O(n*m) .  
        
        // if there are no fresh oranges (ones) present, time required is zero
        if(ones==0){
            return 0; 
        } else if(twos==0) {
        // Now as the control has passed the above conditions, it means it has some fresh oranes. 
        // Hence, If there are no rotten oranges, fresh oranges will not rot and we will have to return (-1) . 
            return -1;
        }
        
        // Now we will have to do Breadth-First-Search to find the minimum time
        
        int cnt1 = twos;
        int cnt2=0;
        // cnt1 stores the number of unvisited nodes or oranges which are 
        // going to affect its neighbours at the current moment
        
        // cnt2 is going to store number of childs of the oranges in the current level
        
        // Observe that, the first orange is already rotten, 
        // still we are counting it and hence at the end we return (ans-1) instead of ans . **
        
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int y=p.first,x=p.second;
            // Everytime we pop, unvisited oranges in current level decreases by one, hence cnt1-- .
            cnt1--;
            
            // Now we put forward four conditions to check in four directions of the current orange
            // But for that to work, the position should exist , 
            // i.e.  it should not cross the bounds of the grid
            
            if(y > 0 && grid[y-1][x]==1){
                cnt2++;
                grid[y-1][x]=2;
                ones--; 
                // add it to the queue to check if it has any children later
                q.push(make_pair(y-1, x));
            }

            if(y<n-1 && grid[y+1][x]==1){
                cnt2++;
                grid[y+1][x]=2;
                ones--;
                q.push(make_pair(y+1, x));
            }

            if(x>0 && grid[y][x-1]==1){
                cnt2++;
                grid[y][x-1]=2;
                ones--;
                q.push(make_pair(y, x-1));
            }

            if(x<m-1 && grid[y][x+1]==1){
                cnt2++;
                ones--;
                grid[y][x+1]=2;
                q.push(make_pair(y, x+1));
            }
            if(cnt1==0){
                // cnt1 is zero means we have completed traversing the current level of the graph
                // and hence one unit of time is passed. Hence we increrment ans
                // lets go to next level, for that cnt2 becomes cnt1 and cnt2 becomes zero, 
                // i.e. children are upgraded to current generation and child count start again from zero.
                ans++;
                cnt1=cnt2;
                cnt2=0;
            }
        }
        
        // if there are some ones' which are  still not visited, then they will never get rotten, 
		// Good for them xD .
        if(ones>0)return -1; 
        
        // else
        return ans-1;
        
    }
};
// @lc code=end

