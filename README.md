# 🏦 Simple Bank Management System

A beginner-friendly C++ console application that simulates basic banking operations with user account management. Perfect for learning structures, arrays, file handling, and menu-driven programming.

## 📋 Table of Contents
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Code Examples](#code-examples)
- [Learning Objectives](#learning-objectives)
- [Contributing](#contributing)
- [License](#license)

## ✨ Features

### Account Management
- **User Account Creation**: Register new bank accounts with unique login credentials
- **Secure Authentication**: 3-digit PIN verification system (100-999 range)
- **Multi-User Support**: Array-based database handling up to 100 users

### Banking Operations
- **Balance Inquiry**: Check current account balance
- **Deposit System**: Simulated payment gateway for adding funds
- **Transaction History**: Basic account activity tracking

### Data Management
- **Persistent Storage**: Automatic saving/loading to `users.txt` file
- **File Handling**: Robust file I/O operations with error checking
- **Data Integrity**: Structured data storage format

## 🛠️ Prerequisites

- C++ compiler (g++, Clang, MSVC)
- Basic terminal/command line knowledge
- 50MB free disk space

## 🔧 Installation

### Method 1: Direct Compilation
```bash
# Clone repository
git clone https://github.com/krgweu8-boop/bank-simulator.git
cd bank-simulator

# Compile the program
g++ -o bank_system main.cpp -std=c++11

# Run the application
./bank_system
