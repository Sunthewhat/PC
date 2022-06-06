console.log("Hello world")
//in-line comment
/*
multi line comment
*/

/*Data Types
undefined, null, booleen, string, symbol, number, object
*/

var myname = "ARRGGGHHH"
myname = 1

let ourname = "GGGG"

const pi = 3.14


var a
console.log(a)
var b=2
a=b
console.log(a)

var st="I am a"
st+=" string"
console.log(st)

var ten =10+10
console.log(ten)

var myStr=`"I am a \""`
console.log(myStr)
/**********
\' single quote
\" double quote
\\ backslash
\n newline
\r carriage return
\t tab
\b backspace
\f form feed
*********/
console.log(`Kuy\ndfkjshdfgkhjsdf\nsdiufghsiudgfsiudg`)

var Name =`Chotiwet`
var NameLen=Name.length
console.log(NameLen)
console.log(Name[1])
console.log(Name[Name.length-1])

function poop(a) {
    console.log(a)
    return a+10
}
var A
A=poop(200)
console.log(A)

var Arrays=["aa",12,[1,`Hi`]]
console.log(Arrays[2][1])

var Q =[1,2]
Q.push(3)
console.log(Q)
var QQ=Q.pop()
console.log(Q,QQ)
Q.shift()
console.log(Q)
Q.unshift(0)
console.log(Q)
