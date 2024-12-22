// Variable is functionally scoped
// If any variable is defined with `var`, it is only accessible within its defined function.

// Example:
var gloVar = 6; // Global Variable

function func() {
    if (true) {
        var num = 11; 
        console.log(num); 
        // Output: 11 (accessible because `var` is function-scoped, not block-scoped)
    }
    
    console.log(gloVar); // Output: 6 (global variable is accessible)
    console.log(num); 
    // Output: 11 (accessible here because `num` is function-scoped)
}

console.log(gloVar); 
// Output: 6 (global variable can be accessed anywhere)

var num = 2; 
// Redefining `var` is allowed, but not recommended as it can lead to bugs.
console.log(num); 
// Output: 2 (redefined value of `num`)

func(); 

var globalVar = "I'm global!";
console.log(window.globalVar); 
// Output: "I'm global!" (only works in browsers; global variables declared with `var` are added to the `window` object)

console.log(a); 
// Output: undefined (`var` is hoisted but not initialized)

var a = 5;

