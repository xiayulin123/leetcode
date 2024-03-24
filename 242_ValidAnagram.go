func isAnagram(s string, t string) bool {
    // if len(s) != len(t) {
    //     return false
    // }
    // // n := len(s)
    // for i := 0; i < len(s); i++{

    //     for j := 0; j < len(s); j++ {

    //         if s[0] == t[j] {
    //             s = s[1:]
    //             t = t[:j] + t[j+1:]
    //             i=0
    //             break
    //         }
    //     }

    // }
    // return len(s) == 0 || s[0]==t[0] 
    s1, s2 := []byte(s), []byte(t)
    sort.Slice(s1, func(i, j int) bool { return s1[i] < s1[j] })
    sort.Slice(s2, func(i, j int) bool { return s2[i] < s2[j] })
    return string(s1) == string(s2)
}
