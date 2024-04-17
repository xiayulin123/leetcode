func detectCapitalUse(word string) bool {
    capital := false
    lowercase := false
    first := false
    for i, char := range word {
        if i == 0 {
            if char >= 'A' && char <= 'Z' {
                capital = true
                first = true
            } else {
                lowercase = true
            }
        } else {
            if char >= 'A' && char <= 'Z' {
                if lowercase || !capital {
                    return false
                }
                first = false
            } else {
                if capital && !first {
                    return false
                }
                lowercase = true
            }
        }
    }
    return true
}
