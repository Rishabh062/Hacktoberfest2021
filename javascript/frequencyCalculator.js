function frequencyCalculator(arr) {
    let frequency = {};

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] in frequency) {
            frequency[arr[i]] += 1;
        } else {
            frequency[arr[i]] = 1;
        }
    }

    return frequency;
}

const arr = ['apple', 'banana', 'orange', 'apple', 'banana'];
console.log(frequencyCalculator(arr));
