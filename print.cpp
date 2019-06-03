int Solution::numRange(vector<int> &A, int B, int C) {
    // Do not write main() function.
    // Do not read input, instead use the argu
    
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    
    while(i < A.size()){
        sum = sum + A[j];
        if((sum >= B) && (sum <= C)){
            count++;
            j++;
        }
        else if(sum < B){
            j++;
        }
        else if(sum > C){
            i++;
            j = i;
            sum = 0;
        }
        if(j == A.size()){
            sum = 0;
            i++;
            j = i;
        }
    }
    
    return count;
}
