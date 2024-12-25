let num1=5;
let num2=6;
let operator='*';
let ans =(n1,n2,op)=>{
    if(operator=='*'){
        return n1*n2;

    }
    else if(operator=='+'){
        return n1+n2;
    }
    else if(operator=='-'){
         return n1-n2;
        
    }
    else if(operator=='/'){
        return n1/n2;

    }
    return n1
}


let random= Math.random();
if (random<0.1){
    num2=random;
    console.log( ans(num1,num2,operator));
}
else{
   console.log( ans(num1,num2,operator));
}
