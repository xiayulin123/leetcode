char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int left = 0;
    int right = lettersSize - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (letters[mid] > target) {
            found = true;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return found ? letters[left] : letters[0];
}
