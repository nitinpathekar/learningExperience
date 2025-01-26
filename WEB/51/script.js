let num = Math.trunc(Math.random() * 20) + 1;
let score = 20;
let highscore = 0;
let gameActive = true; // Flag to track if the game is active

const setMessage = (message, color = "white") => {
  const messageEl = document.querySelector(".message");
  messageEl.textContent = message;
  messageEl.style.color = color;
};

const resetGame = () => {
  score = 20;
  num = Math.trunc(Math.random() * 20) + 1;
  gameActive = true; // Reactivate the game
  document.body.style.backgroundColor = "";
  document.querySelector(".number").textContent = "?";
  document.querySelector(".score").textContent = score;
  setMessage("Start guessing...");
  document.querySelector(".guess").value = "";
};

const checkGuess = () => {
  if (!gameActive) {
    setMessage("Game over! Click 'Again' to restart.", "red");
    return;
  }

  const guess = Number(document.querySelector(".guess").value);

  if (!guess) {
    setMessage("No Number!", "red");
  } else if (guess < 1 || guess > 20) {
    setMessage("Invalid Input!", "red");
  } else if (score <= 0) {
    setMessage("You lost the game!", "red");
    alert("Restart the game");
  } else if (guess === num) {
    setMessage("Correct Number!", "yellow");
    document.body.style.backgroundColor = "green";
    document.querySelector(".number").textContent = num;
    gameActive = false; // Disable further guesses

    if (score > highscore) {
      highscore = score;
      document.querySelector(".highscore").textContent = highscore;
    }
  } else {
    setMessage(guess > num ? "Too High!" : "Too Low!");
    score--;
    document.querySelector(".score").textContent = score;

    if (score === 0) {
      setMessage("You lost the game!", "red");
      gameActive = false; // Disable further guesses
    }
  }
};

// Event Listeners
document.querySelector(".check").addEventListener("click", checkGuess);
document.querySelector(".again").addEventListener("click", resetGame);
