#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

bool canReach(int** heights, int m, int n, int maxEffort) {
    bool** visited = (bool**)malloc(sizeof(bool*) * m);
    for (int i = 0; i < m; i++) {
        visited[i] = (bool*)calloc(n, sizeof(bool));
    }

    int front = 0, back = 0;
    int** queue = (int**)malloc(sizeof(int*) * m * n);
    int* start = (int*)malloc(sizeof(int) * 2);
    start[0] = 0;
    start[1] = 0;
    queue[back++] = start;
    visited[0][0] = true;

    while (front < back) {
        int* curr = queue[front++];
        int x = curr[0], y = curr[1];
        free(curr);

        if (x == m - 1 && y == n - 1) {
            for (int i = 0; i < m; i++) free(visited[i]);
            free(visited);
            for (int i = front; i < back; i++) free(queue[i]);
            free(queue);
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny]) {
                int diff = abs(heights[nx][ny] - heights[x][y]);
                if (diff <= maxEffort) {
                    visited[nx][ny] = true;
                    int* next = (int*)malloc(sizeof(int) * 2);
                    next[0] = nx;
                    next[1] = ny;
                    queue[back++] = next;
                }
            }
        }
    }
    return false;
}

int minimumEffortPath(int** heights, int heightsSize, int* heightsColSize) {
    int m = heightsSize, n = heightsColSize[0];
    int left = 0, right = 1e6;
    int ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canReach(heights, m, n, mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}
