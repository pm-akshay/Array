int subarraySum(int* arr, int n, int target, int* res) {
    // code here
    int start=0,sum=0;
    int i;
    for(i=0;i<n;i++){
        sum+=arr[i];
        while(sum>target && start<=i){
            sum-=arr[start];
            start++;
        }
        if(sum==target){
            res[0]=start+1;
            res[1]=i+1;
            return 2;
        }
    }
    res[0]=-1;
    return 1;
    
}
