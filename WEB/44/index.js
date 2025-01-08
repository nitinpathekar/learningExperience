const express= require('express');
const app= express();
const port=4000;

app.get(('/'),(req,res)=>{
    res.send('Hello World!')
});
app.get(('/profile'),(req,res)=>{
    res.send('this is my Profile')

})
app.listen(port,()=>{
    console.log(`App is listening at port ${port}`);
})
