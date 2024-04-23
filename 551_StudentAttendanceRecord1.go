func checkRecord(s string) bool {
    a := 0
    l := 0
    for _, v := range s {
        if l == 3 {
            return false
        }
        if v == 'A' {
            a++
            l = 0
        } else if v == 'L' {
            l++
        } else {
            l = 0
        }
    }
    return a < 2 && l <3
}
