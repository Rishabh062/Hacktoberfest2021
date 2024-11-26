// Iterative Binary Serach Function implemented in JavaScript
/**
 * 
 * @param {Array to be searched in} arr 
 * @param {elemnt to be searched} target 
 * @returns index of target if found, else -1;
 */

function binarySearchIterative(arr, target){
    let left = 0;
    let right = arr.length - 1;
    let mid;
    while ( left <= right ){
        mid = Math.floor( ( right + left ) /2 );
        if ( arr[mid] == target ){
            return mid;
        } else if ( arr[mid] < target ){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}


// Test
const arr = [12, 24, 32, 39, 45, 50, 54]  
const target = 12 
    
const result = binarySearchIterative(arr, target)  
  
if ( result != -1){
    console.log("Element is present at index", result)  
}  
else{
    console.log("Element is not present in arr") 
}