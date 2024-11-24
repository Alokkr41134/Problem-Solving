class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
     int n = matrix.size();
     long long overallsum=0;
     int minAbsolutevalue = INT_MAX;
     int countNegativeno = 0;

     for(int i=0; i<n ;i++){
        for(int j=0;j<n;j++){
            overallsum+= abs(matrix[i][j]);

            if(matrix[i][j] < 0){
              countNegativeno++;
            }
          minAbsolutevalue = min(minAbsolutevalue , abs(matrix[i][j]));
           

        }
     } 

     if(countNegativeno %2 ==0){
        return  overallsum;
     }
     else{
         return ( overallsum - 2 * minAbsolutevalue) ;
     }
    }
};