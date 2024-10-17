/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    ar = []
    for(let i =0;i<arr.length;)
        {
            a = []
            let cnt=0;
            while(cnt<size && i<arr.length){
                a.push(arr[i])
                i++;
                cnt++;
            }
            ar.push(a)
        }
    return ar
};
