# Project 2: Synchronization of the Dining Philosophers Problem

Dining Philosophers Program:

This program implements the classic "Dining Philosophers" problem using C++. It employs POSIX mutex locks and condition variables to manage access to shared resources (forks) among philosophers. This solution ensures that philosophers can alternate between thinking and eating without encountering deadlock, demonstrating concurrency control and resource management.

Usage:

To run the program, open a Linux terminal (such as WSL) and follow these commands:

Compile the program:
- g++ diningPhilosophers.cpp -o diningPhilosophers

Execute the program:
- ./diningPhilosophers


Program Structure:

Global Resources:

- available_forks: A vector representing available forks.
- mutex1: A mutex lock to protect shared resources.
- cond_var1: A condition variable to signal availability of forks.

Functions:

- pickup_forks(void* arg): Simulates philosophers attempting to acquire forks and eat, implemented as a thread function for each philosopher. Philosophers wait if forks are unavailable and are notified when resources are free.
- return_forks(int philosopher_number): Releases the forks and signals waiting philosophers when a philosopher finishes eating.

Execution:

- Each philosopher (thread) thinks for a random time before attempting to pick up forks.
- Philosophers acquire two forks to eat and release them after finishing, notifying others.
- The cycle repeats for each philosopher a maximum of three times.

Observe console output indicating philosophers' thinking and eating states, along with resource allocation.
