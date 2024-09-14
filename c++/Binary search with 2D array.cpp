// If the matrix is row wise sorted
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row*col-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            int element = matrix[mid/col][mid%col];
            if(element == target){
                return 1;
            }
            if(element < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start +(end-start)/2;
        }
        return 0;
    }
};

// If the matrix Row and Col wise sorted
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = col-1;
        
        while(start<row && end>=0){
            int element = matrix[start][end];
            if(element == target){
                return 1;
            }
            if(element < target){
                start++;
            }
            else{
                end--;
            }
        }
        return 0;
    }
};
