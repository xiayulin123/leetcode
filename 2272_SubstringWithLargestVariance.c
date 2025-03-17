#define MAX(a, b) ((b) > (a) ? (b) : (a))

void append(char ***array, int *size, const char *newChar) {
    *array = realloc(*array, (*size + 1) * sizeof(char*)); 
    if (*array == NULL) {
        exit(EXIT_FAILURE);
    }
    (*array)[*size] = strdup(newChar);
    if ((*array)[*size] == NULL) {
        exit(EXIT_FAILURE);
    }
    (*size)++;
}

int largestVariance(char* s) {
    int ans = 0;
    char **k2 = malloc(sizeof(char*));
    int k2_size = 0;
    append(&k2, &k2_size, (char[]){s[0], '\0'});

    for(int i = 0; i < strlen(s); i++) {
        int found = 0;
        for(int j = 0; j < k2_size; j++) {
            if(s[i] == k2[j][0]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            append(&k2, &k2_size, (char[]){s[i], '\0'});
        }
    }

    for (int x = 0; x < k2_size; x++) {
        for (int y = 0; y < k2_size; y++) {
            char a = k2[x][0]; 
            char b = k2[y][0];
            if (b == a) {
                continue;
            }
            int f0 = 0, f1 = INT_MIN;

            for (int i = 0; s[i]; i++) {
                if (s[i] == a) {
                    f0 = MAX(f0, 0) + 1;
                    f1++;
                    
                } else if (s[i] == b) {
                    f1 = f0 = MAX(f0, 0) - 1;
                    
                }
                ans = MAX(ans, f1);
            }
        }
    }

    for (int i = 0; i < k2_size; i++) {
        free(k2[i]);
    }
    free(k2);

    return ans;
}
