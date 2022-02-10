class Solution {
public:
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void transposeMat(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(&matrix[i][j], &matrix[j][i]);
            }
        }
    }
    void reverseMat(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                swap(&matrix[i][j], &matrix[i][n-j-1]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transposeMat(matrix);
        reverseMat(matrix);
    }
};