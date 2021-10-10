// reviews example
/**
 * 1 Star -- 10 
 * 2 Star -- 560
 * 3 Star -- 100
 * 4 Star -- 250
 * 5 Star -- 60
 */

// Simple average
const simpleAverage = ((one,two,three,four,five)=>{
    return (one+two+three+four+five)/5
})

// Weighted Average
const weightedAverage = ((one,two,three,four,five)=>{
    return((1*one) + (2*two) + (3*three) + (4*four) + (5*five)) / (one+two+three+four+five)
})

console.log(simpleAverage(10,20,30,40,50))
// 30

console.log(weightedAverage(10,20,30,40,50))
// 3.6666666666666665

