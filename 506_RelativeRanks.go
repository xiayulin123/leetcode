func findRelativeRanks(score []int) []string {
    var ans []string
    copys := make([]int, len(score))
    copy(copys, score)
    sort.Ints(score)
    for _, val := range copys {
        rank := sort.SearchInts(score, val)
        rank = len(score) - rank - 1

        switch rank {
        case 0:
            ans = append(ans, "Gold Medal")
        case 1:
            ans = append(ans, "Silver Medal")
        case 2:
            ans = append(ans, "Bronze Medal")
        default:
            ans = append(ans, fmt.Sprintf("%d", rank+1))
        }
    }
    return ans
}
