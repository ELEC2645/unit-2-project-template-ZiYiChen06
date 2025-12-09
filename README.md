[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=21637259)
# ELEC2645 Unit 2 Project Template

     Unit converter with context 

This project implements a menu-driven engineering unit converter written in C.
The aim is to provide a simple command-line tool that performs several calculations commonly used in electronic and electrical engineering.
The program is divided into two main components:
main.c controls the menu system, while funcs.c contains the implementation of all conversion functions.

1. Implemented Functions

(1). Frequency Conversion (Hz <-> rad/s)

Uses the relationship between ordinary frequency and angular frequency:

rad/s = 2*pi*f

Hz = (rad/s) /(2*pi)

(2). Temperature Conversion (°C <-> °F)

Based on standard linear formulas:

°F = (°C × 9/5) + 32

°C = (°F − 32) × 5/9

(3). Power Conversion (dBm <-> mW)

Useful in communication and RF systems:

mW = 10^(dBm/10)

dBm = 10 * log10(mW)

(4). Explanation Mode

Provides short descriptions of engineering units and where they are typically used.

(5). RC Filter Helper

Computes the cutoff frequency of a first-order RC filter:

fc = 1 / (2*pi*R*C)

2. How to Compile and Run the Program
The program main.c needs compiling before it can run.

 In the terminal you can type gcc main.c -o main.out -lm 
 and then ./main.out to run the new program.

3. Author
Ziyi Chen
SID:201800134

