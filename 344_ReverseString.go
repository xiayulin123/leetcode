func reverseString(s []byte)  {
    n := len(s)
    for i := 0; i < len(s) / 2; i++ {
        tmp := s[i]
        s[i] = s[n-1]
        s[n-1] = tmp
        n--
    }
    return
}
