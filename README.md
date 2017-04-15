# Campus Info System

This is a console program in C with some C++. I made it in my first semester at university in 2017. It works like a small information desk for a university campus.

## What it does

From the main menu you can:

1. Gym time: shows the male and female gym schedules.
2. Food prices: pick one of the 4 cafeteria food stalls and see the menu and prices.
3. Faculty information: pick a teacher from a list of 43 and see the office, office hours, email and courses.
4. Parking: shows a grid of car and bike parking spaces. You can park a vehicle in a row and column, and then check it out again.
5. Map: draws a floor map of a computer lab (rooms, toilets, emergency exit and generator room) with the WinBGIm graphics library.

It also has a title screen and a goodbye screen with graphics, and it uses `gotoxy` from `windows.h` to place the text in the console.

## Data

The program reads plain text files: 1 file for each teacher (`faculty01.txt` to `faculty43.txt`), 1 for each food stall (`stall1.txt`, `stall2.txt` and `stall4.txt`) and the 2 gym schedules. In this copy, the teacher names, offices, phone numbers and emails are sample data, not real, and the food stall names are general.

## How to run

It works on Windows only.

Step 1: Set up a compiler with the WinBGIm graphics library (`graphics.h`), for example Code::Blocks or Dev-C++ with WinBGIm.

Step 2: Compile `campus_info.cpp`.

Step 3: Run it from the folder with the `.txt` files.
