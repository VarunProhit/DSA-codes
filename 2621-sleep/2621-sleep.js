/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
  await new Promise(x=>{setTimeout(x,millis)})
   
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */