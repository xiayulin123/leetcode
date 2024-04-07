func countSegments(s string) (ans int) {
    if s == ""{
        return 0
    }
    for i, v := range s {
        if i == 0 && s[0] != ' '{
                ans++
            }
        if i < len(s) - 1{
            
            if v == ' ' && s[i+1] != ' '{
                
                ans++
            }
        } 
        
    }
    return ans
}
