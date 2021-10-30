var str = prompt("Please enter a string");

var len = str.length
var i;
var rev = [];
for(i=len; i>=0; i--){
    rev.push(str[i])
}
console.log(rev.join(""))