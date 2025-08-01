const clapSound = document.getElementById("clapSound");
const hands = document.querySelectorAll(".hand");
const startButton = document.getElementById("startClap");

// Wait for user to click button before starting clap
startButton.addEventListener("click", () => {
  startButton.style.display = "none";

  setInterval(() => {
    hands.forEach(hand => {
      hand.classList.add("clap");
      setTimeout(() => hand.classList.remove("clap"), 300);
    });

    // Play sound
    clapSound.currentTime = 0;
    clapSound.play().catch(err => {
      console.error("Autoplay failed:", err);
    });
  }, 5000); // Clap every 5 seconds
});
