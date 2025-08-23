int largestRectangleArea(int* heights, int heightsSize) {
    int* stk = malloc(heightsSize * sizeof(int));
    int ans = 0;
    int top = -1;
    for(int i = 0; i < heightsSize; i++){
        while(top >= 0 && heights[stk[top]] > heights[i]){
            int heightIndex = stk[top];
            top--;
            int left = (top >= 0) ? stk[top] : -1;
            int width = i - left - 1;
            ans = fmax(ans, width * heights[heightIndex]);
        }
        stk[++top] = i;
    }
    while(top != -1){
        int heightIndex = stk[top];
        top--;
        int left = (top >= 0) ? stk[top] : -1;
        int width = heightsSize - left - 1;
        ans = fmax(ans, width * heights[heightIndex]);
    }
    return ans;
}
