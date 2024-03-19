func rotate(matrix [][]int)  {
    index := len(matrix)
    for i := 0; i < index /2; i++ {
        for j := 0; j < (index + 1)/2; j++{
            matrix[i][j], matrix[j][index-1-i], matrix[index-1-i][index-1-j], matrix[index-1-j][i] = matrix[index-1-j][i], matrix[i][j], matrix[j][index-1-i], matrix[index-1-i][index-1-j]
        }
    }
}
