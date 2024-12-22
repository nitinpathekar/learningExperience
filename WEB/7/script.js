
// let keyword in JS
// It is not functional scoped, it is block-scoped.
let num = 5;
console.log(typeof(num)); // "number" (num is a Number data type)

let str = "Nitin";
console.log(typeof(str)); // "string" (str is a String data type)

let bool = true;
console.log(typeof(bool)); // "boolean" (bool is a Boolean data type)

let undef;
console.log(typeof(undef)); // "undefined" (undef is declared but not assigned a value)

let nul = null;
console.log(nul); // null (represents the intentional absence of any value)
console.log(typeof(nul)); // "object" (quirk in JavaScript, null is not actually an object)

let symb = Symbol("id");
console.log(typeof(symb)); // "symbol" (symb is a Symbol data type)

let bigint = 2124654841546546546549846526654654654656546545455n;
console.log(typeof(bigint)); // "bigint" (bigint is a BigInt data type)
