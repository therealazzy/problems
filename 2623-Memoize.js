/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const cache = new Map();
    let callCount = 0;
    
    function getKey(args) {
        return JSON.stringify(args);
        }

const memoizedFn = (...args) => {
    const key = getKey(args);
    if(cache.has(key)) {
        return cache.get(key);
    }
    callCount++;
    const result = fn(...args);
    cache.set(key, result);
    return(result);
};

memoizedFn.getAllcount = () => callCount;

return memoizedFn;

}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */