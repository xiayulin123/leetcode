/** 
 * Forward declaration of isBadVersion API.
 * @param   version   your guess about first bad version
 * @return 	 	      true if current version is bad 
 *			          false if current version is good
 * func isBadVersion(version int) bool;
 */

func firstBadVersion(n int) int {
    i, j := 1, n
    for ;i <= j; {
        m := (j + i) / 2
        if isBadVersion(m){
            j = m-1
        } else {
            i = m + 1
        }
    }
    return i
}

