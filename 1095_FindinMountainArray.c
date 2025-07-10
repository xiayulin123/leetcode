/**
 * *********************************************************************
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * *********************************************************************
 *
 * int get(MountainArray *, int index);
 * int length(MountainArray *);
 */

int findInMountainArray(int target, MountainArray* mountainArr) {
	int ans = -1;
    int left = -1; 
    int right = length(mountainArr) - 1;
    while(left + 1 < right){
        int mid = left + (right - left) / 2;
        if(get(mountainArr, mid) >= get(mountainArr, mid + 1)){
            right = mid;
        } else{
            left = mid;
        }
    }
    if(ans == -1){
        int left1 = -1;
        int right1 = right;

        while(left1 + 1 < right1){
            int mid = left1 + (right1 - left1) / 2;
            if(get(mountainArr, mid) >= target){
                right1 = mid;
                if(get(mountainArr, mid) == target){
                    ans = right1;
                }
            } else{
                left1 = mid;
            }
        }  
        if(ans == -1){
            left1 = right;
            right1 = length(mountainArr) - 1;

            while(left1 < right1){
                int mid = left1 + (right1 - left1) / 2;
                if(get(mountainArr, mid) >= target){
                    left1 = mid + 1;
                    if(get(mountainArr, mid) == target){
                        ans = mid;
                    }
                    if(get(mountainArr, left1) == target){
                        ans = left1;
                    }
                } else{
                    right1 = mid;
                }
            } 
        } 
    }
    
    return ans;
}
