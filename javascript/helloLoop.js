function helloLoop(textToLoop, loopCount) {
  const arrayToLoop = Array.from(Array(loopCount))
  
  arrayToLoop.forEach((_, index) => {
    console.log(`${textToLoop} ${index + 1} ;D`)
  })

  return
}

helloLoop("Hello", 5)