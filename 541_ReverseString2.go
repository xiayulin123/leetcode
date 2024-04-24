func reverseStr(s string, k int) string {
    ans := []byte(s)
    var tmp []byte

    for i := 0; i < len(s); i += 2 * k{
        if i + k < len(s){
            tmp = ans[i:i+k]
        } else {
            tmp = ans[i:len(s)]
        }
        for j, n := 0, len(tmp); j < n/2; j++ {
            tmp[j], tmp[n-j-1] = tmp[n-j-1], tmp[j]
        }
    }
    return string(ans)
}
