# 🔐 Login and Registration System (C++)

## 📌 Project Overview

The **Login and Registration System** is a console-based application developed using **C++**. This project allows users to **register with a username and password** and later **log in using valid credentials**. User data is stored persistently using **file handling**, ensuring that registered users remain available even after the program is closed.

This project is designed at a **FY BSc IT level**, focusing on core programming concepts such as **classes, functions, file handling, loops, and conditional statements**.

---

## 🎯 Objectives

* To understand and implement **file handling in C++**
* To practice **object-oriented programming (OOP)** concepts
* To build a real-world inspired **authentication system**
* To validate user input and handle basic errors

---

## 🛠 Technologies Used

* **Programming Language:** C++
* **Concepts Used:**

  * Object-Oriented Programming (Class & Objects)
  * File Handling (`ifstream`, `ofstream`)
  * Loops and Conditional Statements
  * Functions and Menu-driven programming
* **Platform:** Console Application

---

## 📂 Project Structure

The project follows a clean and modular structure:

* **Class:** lrsystem

  * Stores user-related data (username and password)
  * Contains functions for registration and login

* **Functions:**

  * `registerUser()` – Handles user registration
  * `loginUser()` – Handles user authentication

* **File:**

  * A text file is used to store user credentials permanently

* **Main Function:**

  * Displays menu options
  * Calls appropriate functions based on user choice

---

## 📋 Features Implemented

### ✅ User Registration

* Accepts **username** and **password** from the user
* Validates input (non-empty values, basic password length check)
* Checks for **duplicate usernames** before registration
* Stores user credentials in a file
* Displays appropriate success or error messages

### ✅ User Login

* Accepts username and password from the user
* Reads stored credentials from the file
* Verifies user identity by matching credentials
* Displays login success or failure messages

### ✅ File Handling

* Uses **append mode** to store multiple users
* Uses **read mode** to verify login credentials
* Ensures data persistence across program executions

### ✅ Menu-driven Interface

* Easy-to-use console menu:

  * Register
  * Login
  * Exit

---

## 🔄 Program Flow

1. Program starts and displays the main menu
2. User selects an option:

   * Register
   * Login
   * Exit
3. Based on the selection, the corresponding function is executed
4. User receives appropriate feedback messages
5. Program continues until the user chooses to exit

---

## ⚠️ Input Validation & Error Handling

* Prevents registration with empty username or password
* Avoids duplicate usernames
* Basic error handling for invalid input and authentication failures

* Displays clear error messages for:

  * Invalid login credentials
  * Existing username during registration
  * Invalid menu choices

---

## 📈 Future Enhancements

* Password masking during input
* Password encryption (hashing)
* Admin and user role separation
* Linking login system with other projects (e.g., CGPA Calculator)
* GUI-based interface

---

## 📚 Learning Outcomes

After completing this project, the learner will be able to:

* Implement basic **authentication systems**
* Use **file handling** for persistent storage
* Apply **OOP concepts** in real projects
* Write clean, modular, and readable C++ code
* Understand real-world login and registration logic

---

## ✅ Conclusion

The Login and Registration System project successfully demonstrates the use of **C++ programming fundamentals** to build a practical and functional application. It serves as a strong foundation for understanding authentication logic and can be extended further with advanced security and features.

---
📌*“This project was created as part of my FY BSc IT learning journey.”*