func findPoisonedDuration(timeSeries []int, duration int) int {
    ans := 0
    for i, v := range timeSeries {
        if i < len(timeSeries) - 1 {
            if v + duration > timeSeries[i+1]{
                for v < timeSeries[i+1]{
                    ans++
                    v++
                }
            }else{
                ans += duration
            }


        } else {
            ans += duration
        }
    }
    return ans
}
