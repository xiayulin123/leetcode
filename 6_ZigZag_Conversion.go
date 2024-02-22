func convert(s string, numRows int) string {
    if numRows == 1 {
        return s
    }
    ans := ""
    n := len(s)
    if n == 0 {
        return ans
    }
    var result [][]rune = make([][]rune, numRows)
    i := 0
    k := -1
    for _, val := range s {
        
        result[i] = append(result[i], val)
        if i == 0 || i == numRows -1 {
            k = -k
        }
        i += k
    }
    for _, col := range result{
        for _, val := range col{
            ans += string(val)
        }
    }

    return ans

    
    
    
}
