document.getElementById("username").addEventListener("input", function () {
  const query = this.value.trim();
  const suggestions = document.getElementById("suggestions");

  // Clear suggestions if input is empty or too short
  if (query.length < 1) {
    suggestions.innerHTML = "";
    suggestions.style.display = "none";
    return;
  }

  // Fetch GitHub users based on the query
  fetch(`https://api.github.com/search/users?q=${query}+in:login&type=Users`)
    .then(response => response.json())
    .then(data => {
      suggestions.innerHTML = ""; // Clear previous suggestions

      if (data.items && data.items.length > 0) {
        data.items.slice(0, 5).forEach(user => { // Limit to top 5 suggestions
          const div = document.createElement("div");
          div.textContent = user.login; // Display the username
          div.className = "suggestion-item";
          div.addEventListener("click", function () {
            document.getElementById("username").value = user.login; // Set input value
            suggestions.style.display = "none"; // Hide suggestions
            fetchProfile(); // Trigger profile fetch
          });
          suggestions.appendChild(div); // Append suggestion to the container
        });
        suggestions.style.display = "block"; // Show suggestions
      } else {
        suggestions.style.display = "none"; // Hide if no matches
      }
    })
    .catch(error => {
      console.error("Error fetching suggestions:", error);
      suggestions.style.display = "none";
    });
});

// Hide suggestions when clicking outside
document.addEventListener("click", function (e) {
  const suggestions = document.getElementById("suggestions");
  if (!document.getElementById("username").contains(e.target)) {
    suggestions.style.display = "none";
  }
});
