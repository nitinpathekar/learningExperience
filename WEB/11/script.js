let obj={

    name:'Nitin',
    age:20,
    weight:47,
    height:'170cm',
    greet: ()=>{
        console.log('Hello World')

    }

}
console.log(obj)
obj.greet();



/*When you go with let obj1=obj; then their is not any new object will form it will give reference to that object only their no use of otherr memory */

let obj1=obj;


//array

let arr=[1,2,'Nitin']

console.log(arr)
console.log(typeof(arr))

let arrbyconstructor =new Array(1,2,'nii')
console.log(typeof(arrbyconstructor))


//builtin Method of array

let array=[1,2,3,4]
console.log(array);
array.push('Nitin');
console.log(array);
array.pop();
console.log(array);

array.shift();
console.log(array);
array.unshift(5);
console.log(array);

