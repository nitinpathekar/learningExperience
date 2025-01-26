let details = {
    name: "Raj",
    Course: "DSA",
}
const prox = new Proxy(details, {})

console.log(prox.name);
console.log(prox.Course);

let student={
    name: "nitin pathekar",
    branch: 'IT',
    rollNo:36
}
const nitin= new Proxy(student,{
    get: function(tar, prop){
        if(prop == "Course"){
            return undefined;
        }
        return tar[prop];}
})
console.log(nitin.name);
console.log(nitin.branch);
console.log(nitin.rollNo);