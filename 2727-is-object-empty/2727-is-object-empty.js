/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    console.log(typeof(obj))
    if(Object.keys(obj).length === 0)
        return true
    return false
};