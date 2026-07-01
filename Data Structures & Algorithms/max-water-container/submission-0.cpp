class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = INT_MIN;

        int left = 0, right = heights.size() - 1;

        while(left < right)
        {
            int width = right - left;
            int height = min(heights[left], heights[right]);

            int area = width * height;

            maxWater = max(maxWater, area);

            if(heights[left] < heights[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};
