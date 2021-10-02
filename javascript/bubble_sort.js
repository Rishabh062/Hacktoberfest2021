function bubbleSort(arr){
	
  for(let i = 0; i < arr.length; i++){


    for(let j = 0; j < ( arr.length - i -1 ); j++){

      if(arr[j] > arr[j+1]){
        let temp = arr[j]
        arr[j] = arr[j + 1]
        arr[j+1] = temp
      }
    }
  }
  console.log(arr);
}

var arr = [95, 34, 65, 89, 2, 78, 12, 8, 57];

bubbleSort(arr);
