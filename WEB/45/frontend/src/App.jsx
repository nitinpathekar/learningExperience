import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import axios from 'axios'

function App() {
  const [count, setCount] = useState(0);
  const [jokes,setjokes]= useState(0);
  axios.get()

  return (
    <>
    <h1>nitin Pathekar</h1>
    <p>Jokes: {jokes.length}</p>
    {
      jokes.map((jokes,index)=>{

    })
    }
      
    </>
  )
}

export default App
