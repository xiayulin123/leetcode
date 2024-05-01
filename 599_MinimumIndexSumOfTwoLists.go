func findRestaurant(list1 []string, list2 []string) []string {
    
    ans := make(map[string]int, len(list1))
    for i, v := range list1 {
        ans[v] = i
    }
    compare := len(list1) + len(list2)
    var re []string

    for j, v := range list2 {
        if i, ok := ans[v]; ok {
            if i + j < compare {
                compare = i + j
                re = []string{v}
            } else if i + j == compare {
                re = append(re, v)
            }
        }
    }
    
    return re
}




func findRestaurant(list1 []string, list2 []string) []string {
    a, b := len(list1), len(list2)
    ans := make(map[int]int, a)
    for i := 0; i < a; i++ {
        ans[i] = a+b
    }
    for i := 0; i < b; i++ {
        for j := 0; j < a; j ++ {
            if list1[j] == list2[i] {
                ans[j] = i
            }
        } 
    }
    var re []string
    result := 0
    for i := 0; i < a ; i ++ {
        if i == 0 {
            result = i + ans[i]
            re = append(re, list1[i])
        } else {
            if result > i + ans[i] {
                result = i + ans[i]
                tmp := []string{list1[i]}
                re = tmp
            }else if result == i + ans[i] {
                re = append(re, list1[i])
            }
        }
    }
    return re
}
