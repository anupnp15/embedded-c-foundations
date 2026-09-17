# Embedded C Learning Journey 🚀

Welcome to my repository dedicated to mastering the **C programming language** specifically for **Embedded Systems**. This repository serves as my personal code lab, where I practice core C concepts and understand how they map to hardware execution.

## 🎯 Project Goals
* Master low-level C concepts critical for microcontrollers.
* Understand memory management and hardware register manipulation.
* Build a foundational codebase for future firmware development.

## 🧠 Core Concepts Covered
* **Pointers & Memory Layout:** Understanding stack, heap, and data segments.
* **Bitwise Operations:** Masking, setting, clearing, and toggling specific bits (essential for register configuration).
* **Structures & Unions:** Packing data and creating hardware register maps.
* **The `volatile` and `const` Keywords:** Learning how compilers optimize code and handling hardware registers/interrupts.
* **Function Pointers:** Implementing callbacks and state machines.
* **Memory Management:** Dynamic vs. static allocation in resource-constrained environments.

## 🛠️ Tools Used
* Compiler: GCC (or your specific compiler like Keil, XC8, etc.)
* IDE/Editor: VS Code / Vim
* Target Hardware (Optional): *[e.g., STM32, Arduino, ESP32, or "Simulated via PC"]*

## 📁 Repository Structure
```text
├── Bitwise_Operations/     # Bit masking, shifting, and register simulations
├── Pointers_Memory/        # Pointer arithmetic, hardware pointers, and arrays
├── Structures_Unions/      # Custom data types and register mapping
└── Keywords_DeepDive/      # Volatile, static, and const examples
```

## 🚀 How to Run
Most of these programs are written in standard C and can be compiled using any standard GCC compiler:
```bash
gcc filename.c -o output
./output
```
