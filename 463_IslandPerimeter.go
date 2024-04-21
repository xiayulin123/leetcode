func islandPerimeter(grid [][]int) int {
	ans := 0

	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[0]); j++ {
			if grid[i][j] == 1 {
				ans += 4
				if i == 0 {
					if i+1 < len(grid) {
						if grid[i+1][j] == 1 {
							ans--
						}
					}

				} else if i == len(grid)-1 {
					if grid[i-1][j] == 1 {
						ans--
					}
				} else {
					if grid[i-1][j] == 1 {
						ans--
					}

					if grid[i+1][j] == 1 {
						ans--
					}

				}
				if j == 0 {
					if j+1 < len(grid[0]) {
						if grid[i][j+1] == 1 {
							ans--
						}
					}
				} else if j == len(grid[0])-1 {
					if grid[i][j-1] == 1 {
						ans--
					}
				} else {
					if grid[i][j+1] == 1 {
						ans--
					}
					if grid[i][j-1] == 1 {
						ans--
					}
				}
			}

		}
	}
	return ans
}
