#define Min(x,y) ((x) < (y) ? (x) : (y))

int minimumRecolors(char* blocks, int k) {
    int ans = k;
    int times = 0;
    for(int i = 0; blocks[i] != '\0'; i++){
        if(i < k - 1){
            if(blocks[i] == 'W'){
                times++;
            }
            continue;
        }
        
        if(blocks[i] == 'W'){
            times++;
        }

        ans = Min(times, ans);
        if(blocks[i-k+1] == 'W'){
            times--;
        }
    }
    return ans;
}
