 int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    
    while(i < A.size()){
        sum = sum + A[j];
        if((sum >= B) && (sum <= C)){
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
    
    return c;
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    
    while(i < A.size()){
        sum = sum + A[j];
        if((sum >= B) && (sum <= C)){
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
fj
