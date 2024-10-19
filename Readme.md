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

### Clone the Repository:
```bash
git clone https://github.com/your-username/TV-Program-Schedule.git
cd TV-Program-Schedule

