/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * func guess(num int) int;
 */

func guessNumber(n int) int {
    low := 1
    mid := (n + low) / 2

    for guess(mid) != 0 {
        if guess(mid) < 0 {
            n = mid - 1
        } else {
            low = mid + 1
        }
        mid = (n + low) / 2
    }
    return mid
}
