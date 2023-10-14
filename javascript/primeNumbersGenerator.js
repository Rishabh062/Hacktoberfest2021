const isPrime = (number) => {
    for (let i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
};

function getAllPrimeNumbers(number) {
    let primeNumbers = [];
    for (let i = 2; i <= number; i++) {
        if (isPrime(i)) {
            primeNumbers.push(i);
        }
    }
    return primeNumbers;
}
console.log(getAllPrimeNumbers(21));

