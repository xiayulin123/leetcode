func distributeCandies(candyType []int) int {
    a := len(candyType)
    n := 1
    tmp := []int{candyType[0]}
    for i := 0; i < a; i++ {
        if candyType[i] != tmp[0] {
            replay := true

            for j := 0; j < len(tmp); j++ {
                if tmp[j] == candyType[i]{
                    replay = false
                    break
                }
            }
            if replay {
                tmp = append(tmp, candyType[i])
                n++
            }
        }
        
    }
    if n > a/2 {
        return a/2
    } else {
        return n
    }
}
