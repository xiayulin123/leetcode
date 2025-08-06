#define MAX 1000010
#define MAX_CARS 10010
int cmp(const void* a, const void* b)
{
    return *(int*)a < *(int*)b;
}
int carFleet(int target, int* position, int positionSize, int* speed, int speedSize) {
    int map[MAX] = {0};
    if (position == NULL || positionSize == 0) {
        return 0;
    }
    for(int i = 0; i < positionSize; i++){
        map[position[i]] = speed[i];
    } 
    qsort(position, positionSize, sizeof(int), cmp);
    for(int i = 0; i < speedSize; i++){
        speed[i] = map[position[i]];
    }
    float time[MAX_CARS] = {0};
    for(int i = 0; i < speedSize; i++){
        time[i] = (float)(target - position[i])/speed[i];
    }
    for(int i = 1; i < positionSize; i++){
        if (time[i] < time[i - 1]) {
            time[i] = time[i - 1];
        }
    }
    int count = 1;
    for(int i = 1; i < positionSize; i++){
        if (time[i] != time[i - 1]) {
            count++;
        }
    }
    return count;
}
