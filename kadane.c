int maxSubarraySum(int arr[], int n) {
    // Code here
    int i;
    int curr_sum=0,max_sum=arr[0];
    for(i=0;i<n;i++){
        curr_sum+=arr[i];
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}
