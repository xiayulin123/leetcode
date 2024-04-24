func findWords(words []string) []string {
    row1 := "qwertyuiop"
    row2 := "asdfghjkl"
    row3 := "zxcvbnm"
    var ans []string
    for i, _ := range words {
         r1 := true
        r2 := true
        r3 := true
        lowerWord := strings.ToLower(words[i])
        
            for _, char := range lowerWord {
                if !strings.ContainsRune(row1, char) {
                    r1 = false
                }
                if !strings.ContainsRune(row2, char) {
                    r2 = false
                }
                if !strings.ContainsRune(row3, char) {
                    r3 = false
                }
            
        }
        if r1 || r2 || r3{
            ans = append(ans, words[i])
        }
    }
    return ans
}
