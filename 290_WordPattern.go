func wordPattern(pattern string, s string) bool {
    words := strings.Split(s, " ")
    if len(pattern) != len(words) {
        return false
    }
    patternToWord := make(map[byte]string)
    wordToPattern := make(map[string]byte)
    for i := 0; i < len(words); i++{
        a := words[i]
        b := pattern[i]

        if word, exists := patternToWord[b]; exists && word != a {
            return false
        }
        if patt, exists := wordToPattern[a]; exists && patt != b {
            return false
        }
        wordToPattern[a] = b
        patternToWord[b] = a

    }
    return true
}
