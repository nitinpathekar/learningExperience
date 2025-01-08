import express from 'express';
const app=express();

app.get('/',(req,res)=>{
    res.send('server is ready');
});

app.get('/jokes',(req,res)=>{
    const jokes= [
        {
            id: 1,
            setup: "Why don't scientists trust atoms?",
            punchline: "Because they make up everything!"
        },
        {
            id: 2,
            setup: "Why did the scarecrow win an award?",
            punchline: "Because he was outstanding in his field!"
        },
        {
            id: 3,
            setup: "Why don't skeletons fight each other?",
            punchline: "They don't have the guts."
        }
    ];
    res.send(jokes);
})
const PORT=3000;
app.listen(PORT,()=>{
    console.log('server is listening to 5000');
});