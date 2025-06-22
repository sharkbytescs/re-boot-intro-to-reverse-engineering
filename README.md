**RE:BOOT – An Introduction to Reverse Engineering**

**Overview**

Welcome to RE:BOOT, a hands-on workshop designed to introduce you to the exciting world of reverse engineering! This course is perfect for cybersecurity professionals and enthusiasts who want to understand how software works at a deeper level, even if you don't have an extensive programming background. Over the course of approximately 8 hours, we will demystify compiled code, explore fundamental computer architecture, and get hands-on with essential reverse engineering tools.

This workshop emphasizes practical application and ethical considerations, providing you with both the conceptual understanding and the practical toolkit needed to analyze software responsibly.

**Course Objectives**

By the end of this course, you will be able to:

Understand the fundamental goals, techniques, and real-world applications of reverse engineering.
Recognize the legal and ethical boundaries governing reverse engineering activities.

Grasp core computer architecture concepts, including the CPU, memory, registers, and the fetch-decode-execute cycle.
Differentiate between stack and heap memory, and understand how they are used by programs.

Identify variable assignments, arithmetic operations, and function calls in x86-64 assembly code.


Trace control flow structures (like loops and conditional statements) within assembly language.
Utilize command-line tools such as g++, objdump, strings, and GDB for compiling, static analysis, and dynamic debugging of binaries.




**Course Structure** (Approx. 8 Hours)
The course is divided into modules, each combining theoretical concepts with practical, hands-on lab exercises.

Module 1: Introduction to Reverse Engineering & Computer Architecture
Introduction: What is reverse engineering and why is it important in cybersecurity? 
Legal and Ethical Considerations: Understanding the boundaries and responsible use of RE techniques.

Understanding Computer Architecture: Core components (CPU, RAM, I/O) and the fetch-decode-execute cycle.
Memory and Registers: A deep dive into the Stack and Heap, and CPU registers (e.g., RAX, RBP, RSP).

Software and Hardware Abstractions: High-level code to machine code, and the role of compilers and linkers.
Instruction Set Architecture (ISA) & Endianness: Focusing on x86-64 and how instructions are processed.
Lab 1: Disassembling C++ Source Code to Assembly
Objective: Translate simple C++ code to assembly to understand direct mappings.

Hands-on: Write a C++ program, compile it with g++ -S to generate assembly (.s file), and analyze variable initialization (movl), arithmetic operations (imul), and function calls (call).


Lab 2: Exploring Control Structures in Assembly
Objective: Identify how loops and conditional statements (if/else) are implemented in assembly.
Hands-on: Work with a factorial C++ program, generate its assembly, and identify labels (.L), jump instructions (jmp, jle), and comparison instructions (cmp) to reconstruct program flow.

Lab 3a: Reversing a Binary with GDB and objdump
Objective: Apply learned concepts to analyze an unknown binary using dynamic and static analysis tools.
Hands-on: Use GDB to run, inspect functions, disassemble main(), and follow program execution. Then, use objdump for static disassembly and the strings command to extract printable data from the binary.
Lab 3b: Reversing another Binary (Optional/Extended)
Objective: Further practice reverse engineering techniques on a new binary.
Hands-on: (Time permitting or for self-study) Continue to explore with GDB and other tools.
Target Audience
This course is specifically designed for:

Cybersecurity professionals
Security enthusiasts
Anyone curious about how software truly works "under the hood"
No prior extensive programming background is required! We will introduce C++ and assembly concepts from the ground up, focusing on the core principles relevant to reverse engineering. Basic familiarity with command-line interfaces (Linux terminal) will be helpful.

Setup & Prerequisites
To follow along with the labs, you will need a Linux environment (e.g., Ubuntu, Fedora, Kali Linux) preferably in a virtual machine.

Required Tools:

g++: C++ compiler (usually installed by default or via sudo apt install build-essential)
GDB (GNU Debugger): sudo apt install gdb
objdump: Part of GNU Binutils (usually installed with build essentials or binutils)
strings: Part of GNU Binutils
A text editor: (e.g., nano, vim, gedit, VS Code)
