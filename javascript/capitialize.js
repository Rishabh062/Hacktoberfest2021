let minimist = require("minimist")
let args = minimist(process.argv)

let fs = require("fs")

let stext = fs.readFileSync(args.source,"Utf-8")


let words = stext.split(" ")
for(let i = 0;i< words.length; i++ ){
    words[i] = words[i].toUpperCase()
}
let dtext = words.join(" ")



 fs.writeFileSync(args.dest,dtext,"Utf-8")
 console.log("DONE")
