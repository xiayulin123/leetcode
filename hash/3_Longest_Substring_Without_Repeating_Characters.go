func lengthOfLongestSubstring(s string) int {
    result := make(map[byte]int)
    // result := map[byte]int{}
    if len(s) == 1 {
        return 1
    }
    times := 0
    dp := 0
    for index := 0; index < len(s); index++{
        if idx, ok := result[s[index]]; !ok || dp < index - idx {
            dp++
        } else{
            dp = index-idx
        }
        result[s[index]] = index
        times = max(times, dp)
    }


    // left := -1
    // for index := 0; index < len(s); index ++ {
    //     if index != 0 {
    //         delete(result, s[index-1])
    //     }
    //     for left+1 < len(s) && result[s[left+1]] == 0 {
    //         left++
    //         result[s[left]]++
    //     }
    //     if left - index + 1> times {
    //         times = left - index+1
    //     }
    // }
   


    // for index, value := range s {
    //     var word string
    //     var tem = 1
    //     word +=  string(value)
    //     for index1 := index + 1; index1 < len(s); index1 ++  {
    //         // fmt.println(value)
    //         if strings.ContainsRune(word, rune(s[index1])){
    //             break
    //         }
    //         tem++
    //         word += string(s[index1])
    //     }
    //     if tem > times {
    //          times = tem
    //     }
    // }
    return times
}
