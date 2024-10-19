# TV Program Schedule

This project allows users to create a weekly TV program schedule by choosing a day and time, then selecting the programs they'd like to add to their schedule. The program will search for shows being broadcast at the specified time and allow the user to save their preferences.

## Features

- Users can choose a day of the week and enter a time to see the list of programs airing at that time.
- Allows users to save a show to their weekly schedule and make changes to the schedule if needed.
- Provides options to replace or append a show to the existing schedule if a program is already scheduled for the same time.
- Supports a loop, enabling users to go back and add more shows to their weekly schedule if desired.

## How It Works

1. **Text Files for Each Day**: There are seven text files corresponding to each day of the week. Each file contains the schedule for that day, listing the times and the shows being broadcasted.
2. **User Input**: The user selects a day and enters the time they want to watch a show.
3. **Program Search**: The program searches the selected day's text file and lists all shows airing at that time.
4. **Save to Schedule**: The user types the name of the program they want to add to their weekly schedule.
5. **Modify Schedule**: If the user adds a show at a time where a program is already scheduled, the program will ask whether they want to replace the existing program or append the new show to the existing schedule.
6. **Looping**: The user can choose to go back to the beginning and make more entries in their weekly schedule if desired.

## Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/TV-Program-Schedule.git
   cd TV-Program-Schedule
Compile the Program: If you're using GCC, compile the program.c file:

bash
Copy code
gcc -o tv_program program.c
Run the Program:

bash
Copy code
./tv_program
Usage
Choose a day of the week by typing the name of the day (e.g., Monday).
Enter the time you want to watch a show.
The program will list all shows available at that time.
Type the name of the show you want to add to your schedule.
You can choose to go back and add more shows or modify your existing schedule.
If the same time is entered again, the program will prompt whether you want to replace or append the current show.
Sample Input
bash
Copy code
Enter the day of the week: Monday
Enter the time: 8 PM
Available shows: Game of Thrones, Breaking Bad, Friends
Which show would you like to add to your schedule? Breaking Bad
Would you like to go back to the beginning? (y/n): y
Files
dayname.txt: Each text file (e.g., monday.txt, tuesday.txt, etc.) contains a list of times and shows being aired on that day.
program.c: The main C program that handles user input, schedule creation, and file reading.
Contributions
Feel free to fork this repository, open issues, and submit pull requests. Any contributions are welcome!
