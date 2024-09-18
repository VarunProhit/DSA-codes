func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    
    for i,t:=range nums{
        j, exist := mp[target-t]
        if exist{
            return []int{i, j}
        }
        mp[t]=i
    }
    return []int{}
}