# C++ Content Management Simulation

## Overview
This project is an advanced demonstration of Object-Oriented Programming (OOP) in C++, simulating a YouTube-style content management system. It showcases how to structure hierarchical data and manage dynamic lists of objects using the Standard Template Library (STL).

## Technical Stack
- **Language:** C++
- **Libraries:** `<list>`, `<iostream>`
- **Advanced OOP Concepts:**
    - **Inheritance:** Utilizing base classes (`YoutubeChannel`) and derived classes (`CookingYoutubeChannel`) to promote code reusability.
    - **Access Modifiers:** Implementing `protected` members to allow controlled access for derived classes while maintaining external encapsulation.
    - **STL Integration:** Using `std::list` for efficient storage and iteration of dynamic string data (video titles).
    - **Constructors:** Implementing base class initialization within derived class constructors.

## Core Logic
- **Hierarchical Structure:** The system distinguishes between general channels and niche-specific channels (e.g., Cooking), allowing for specialized behaviors (like the `practice()` method) while inheriting core functionality like subscribing and publishing.
- **Data Persistence (Simulated):** Video titles are managed in a linked-list structure, demonstrating an understanding of pointer-based containers in C++.
- **Validation:** Includes logic to ensure subscriber counts do not fall below zero, maintaining data integrity.

## How To Run
1. Ensure a C++ compiler (GCC/MinGW) is installed.
2. Clone the repository.
3. Compile the source:
   g++ youtube_cms.cpp -o youtube_cms
4. Execute the application:
   ./youtube_cms
