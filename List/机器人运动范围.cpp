class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        bool* visited = new bool[rows*cols];
        for(int i=0; i<rows*cols; i++){
            visited[i] = false;
        }
        int count = movingCountCore(threshold, rows, cols, 0, 0, visited);
        return count;
    }
    int movingCountCore(int threshold, int rows, int cols, int row, int col, bool* visited){
        int count = 0;
        if((getDigitSum(row)+getDigitSum(col)) <= threshold && 0<= row && row < rows && 0 <= col && col < cols && !visited[row*cols+col]){
            visited[row*cols+col] = true;
            count = 1 + movingCountCore(threshold, rows, cols, row-1, col, visited) + movingCountCore(threshold, rows, cols, row+1, col, visited) + movingCountCore(threshold, rows, cols, row, col-1, visited) + movingCountCore(threshold, rows, cols, row, col+1, visited);
                        
        }
        return count;
    }
    int getDigitSum(int number){
        int sum = 0;
        while(number > 0){
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
};