import { useState } from "react";
import "./App.css";

function App() {
  let counter = 5;
  const addValue = () => {
    console.log("cleck")
    counter = counter + 1;
  }

  return (
    <>
      <h1>Hello World!</h1>
      <div>counter : {counter}</div>
      <button onClick={addValue()}>Add Value</button>
      <button>Decrease Value</button>
    </>
  );
}
export default App;
