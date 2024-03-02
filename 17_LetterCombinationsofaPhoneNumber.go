func letterCombinations(digits string) []string {
	ans := []string{""}
	if len(digits) == 0 {
		return []string{}
	}
	digitToLetters := map[rune]string{
		'2': "abc", '3': "def", '4': "ghi", '5': "jkl",
		'6': "mno", '7': "pqrs", '8': "tuv", '9': "wxyz",
	}
    for _, digit := range digits{
        var temp []string
        for _, element := range digitToLetters[digit] {
            for _, value := range ans {
                temp = append(temp, value + string(element))
            }

        }
        ans = temp
    }
	return ans


}
