// let greetName=function( name){
//     console.log("Hello",name);
//     greet();
// }

// function greet(){
//     console.log('everyone to hello');
// }
// greetName('Nitin');


let arr=[
    function(a,b){
        return a+b;
    },
    function(a,b){
        return a-b;
    },
    function(a,b){
        return a*b;
    }
]

// let first=arr[0];

// console.log(first(5,6));
console.log(arr[0](5,6));