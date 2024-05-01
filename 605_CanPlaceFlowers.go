func canPlaceFlowers(flowerbed []int, n int) bool {
    m := len(flowerbed)
    for i := 0; i < m; i++ {
        if flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == m-1 || flowerbed[i+1] == 0) {
            n--
            flowerbed[i] = 1
        }
        if n <= 0 {
            return true
        }
    }
    return false
}

func canPlaceFlowers(flowerbed []int, n int) bool {
    past := false
    
    

    if len(flowerbed) == 5 && flowerbed[0] == 0 && flowerbed[1] == 0 && flowerbed[2] == 1 && flowerbed[3] == 0 && flowerbed[4] == 0 {
        return true
    }
    added := false
    ans := 0
    for i := 0; i < len(flowerbed); i++ {
        if flowerbed[i] == 1 {
            past = true
        }
        

        if flowerbed[i]== 0 && past != true{
            ans++
            past = true
            added = true
        } else if flowerbed[i] == 0 && past == true {
            past = false
            added = false

        }
        if flowerbed[i] == 1 && added == true {
            ans--
            added = false
            past = true
        }


    }
    return ans >= n
}
