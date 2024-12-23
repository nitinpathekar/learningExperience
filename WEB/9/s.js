/*When you make function in your code you can reuse it as many time you want*/

//Example : You are calling a internal function in which you calling to somewhere code to print HelloWorld on console
// console.log("Hello World");
// console.log("Hello World");
// console.log("Hello World");
// console.log("Hello World");
// console.log("Hello World");

//you can further categories it on another function to call to print Hello World 5 time each for every function call

function hello() {
  console.log("Hello World");
  console.log("Hello World");
  console.log("Hello World");
  console.log("Hello World");
  console.log("Hello World");
}
//Whenever i Call hello it willl print Hello World 5 time each
hello();
hello();
hello();

/*
    String manupulation
*/
//cancatenation
let a1 = "English";
let a2 = "HINdi";
let cancatenation = a1 + a2;
console.log(cancatenation);
//String Literal
let lit = `${a1}${a2}`;
console.log(lit);
console.log(a1.toUpperCase());
console.log(a2.toLowerCase());
console.log(a2.tou);
console.log(a1.substring(2, 4));

/*
    split
*/ let sentence = "Hello gus this is me";
let word = sentence.split(" ");
console.log(word);
console.log(typeof word);

//if You
console.log("hello guys /\n \"this \"now \"  \\\\");