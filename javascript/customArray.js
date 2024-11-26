// Defining Costructor
function MyArray(){
    Object.defineProperty(this, 'length', {
        value: 0,
        writable: true
    })
    for ( let value in arguments ){
        this[this.length++] = arguments[value];
    }
}


// push
MyArray.prototype.push = function(){
    for ( let value in arguments ){
        this[this.length++] = arguments[value];
    }
}


// pop
MyArray.prototype.pop = function(){
    let result = this[--this.length];
    delete this[this.length];
    return result;
}


// Reversing array
MyArray.prototype.reverse = function(){
    let result = new MyArray;
    for ( let i = this.length-1; i >= 0; i-- ){
        result.push(this[i]);
    }
    return result;
}


// For printing in array form
MyArray.prototype.toString = function(){
    let res = '[';
    for ( const index in this ){
        if ( this.hasOwnProperty( index ) ){
            res += " " + this[index];
            if ( this.length-1 != Number(index) ){
                res += ",";
            }
        }
    }
    res += " ]";
    return res;
} 


// return first element in the array or peek
MyArray.prototype.peek = function(){
    let result = this[this.length - 1];
    return result;
}


// return the last element in the array
MyArray.prototype.last = function(){
    return this[0];
}


// Map
MyArray.prototype.map = function(callback){
    let result = new MyArray();
    for ( const index in this ){
        if ( this.hasOwnProperty( index ) ){
            let returnElem = callback( this[index], Number[index], this );
            result.push( returnElem );
        }
    }
    return result;
}


// forEach
MyArray.prototype.forEach = function(callback){
    for ( const index in this ){
        if ( this.hasOwnProperty( index ) ){
            this[index] = callback( this[index], Number[index], this )
        }
    }
}


// binarySearch
MyArray.prototype.indexOf = function(target){
    let left = 0;
    let right = this.length - 1;
    let mid;
    while ( left <= right ){
        mid = Math.floor( ( right + left ) /2 );
        if ( this[mid] == target ){
            return mid;
        } else if ( this[mid] < target ){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}



// tests
let arr = new MyArray(2, 3, 4);
arr.push(5);
arr.push(6);

console.log(arr.toString());

console.log(arr.peek());

console.log(arr.last());

arr.pop();

let res = arr.map( (el) => {
    return el*2;
});

arr.forEach( (el) => {
    return el**2;
});

console.log(arr.reverse().toString());
console.log(arr.toString());
console.log(res.toString());

console.log(arr.indexOf(4));
console.log(arr.indexOf(10));
