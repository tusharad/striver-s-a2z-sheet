int search(int* nums, int numsSize, int target){
    int low = 0;
    int high = numsSize -1;
    while(low <= high){
    int mid = (low+high)/2;
     if(nums[mid] < target)
        low = mid+1;
     else if(nums[mid] > target)
         high = mid-1;
     else
        return mid;
    }
    return -1;
}

void main(){
	int arr[] = {1,2,3,4,5};
	printf("%d",search(arr,5,3));
}
