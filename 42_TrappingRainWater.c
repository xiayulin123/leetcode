int trap(int* height, int heightSize) {
    int ans = 0;
    int top = -1;
    int* stk = malloc(heightSize * sizeof(int));
    for(int i = 0; i < heightSize ; i++){
        while(top >= 0 && height[i] > height[stk[top]]){
            int bottom = stk[top--];
            if(top == -1){
                break;
            }
            int wLeft = stk[top];
            int width = i - wLeft - 1;
            if(height[wLeft] > height[i]) wLeft = i;
            int minHeight = height[wLeft] - height[bottom];
            ans += width * minHeight;

        }
        stk[++top] = i;
    }
    return ans;
}
