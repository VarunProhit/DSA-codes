/**
 * @param {number} n
 * @return {Function} counter
 */

var createCounter = function(n) {
    var t=0;
    return function() {
            
         var p =t;
        t=t+1;
        return n+p
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */