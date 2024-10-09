class Solution {
public:
    int mySqrt(int x) {
        
        while(x < 2)            //x smaller than 2 is 1, 1 sqrt of 1 is always itself
        {
            return x;           //so we return itself
        }

        int left = 1;           //se the left boundary for binary search
        int right = x / 2;      //set the right boundary
        int ans = 0;

        while(left <= right)        //as long as the left boundary is less than or equal to the right boundary
        {
            int mid = left + (right - left) / 2;            //set the mid, avoid overflow

            if(mid <= x / mid)              //check if the mid has the answer
            {
                ans = mid;                  //if it is, put the mid value to answer to return it
                left = mid + 1;             //check if there are more possible values to return. this may affect the while loop
            }
            else
            {
                right = mid - 1;            //if the mid value is too big, move left to find a smaller value
            }
        }
        return ans;                         //return the values found
    }
};
