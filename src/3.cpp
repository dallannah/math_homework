// Function to generate a random number between 1 and 10
int getRandomNumber() {
    srand(time(NULL)); // seed the RNG with the current time
    return rand() % 10 + 1; // return a number between 1 and 10
}
