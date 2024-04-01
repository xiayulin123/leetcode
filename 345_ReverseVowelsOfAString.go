func reverseVowels(s string) string {
    t := []byte(s)
    ls, rs := false, false
    for left, right := 0, len(s)-1; left < right;  {
        if !strings.Contains("aeiouAEIOU", string(t[left])) {
            left++
        } else {
            ls = true
        }
        if !strings.Contains("aeiouAEIOU", string(t[right])) {
            right--
        } else {
            rs = true
        }

        if ls && rs {
            t[left], t[right] = t[right], t[left]
            ls = false
            rs = false
            left++
            right--
        }


    }
    return string(t)
}
