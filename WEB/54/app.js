const person=new Object;

person.name="Nitin";
person.age=10;
person.branch="Computer Science"

console.log(person)


function college(name,address,establish){
    this.name=name;
    this.address=address;
    this.establish=establish;
}

college.prototype.language='English';

const myCollege=new college('SATI','Vidisha',1967);
document.querySelector('p').innerHTML="My College name is "+myCollege.name+' with '+myCollege.language;
