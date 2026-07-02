# Generic Stack Implementation Using Dynamic Array

A reusable, template-based Stack implementation built from scratch in C++ using a custom Dynamic Array.

This project demonstrates how the Stack data structure can be implemented without using the C++ Standard Library (`std::stack`). It focuses on reusable class design, inheritance, and generic programming while relying on a custom dynamic array implementation.

---

## Features

* Template-based implementation (`template<class T>`)
* Built on a custom Dynamic Array
* LIFO (Last In, First Out) behavior
* Push elements onto the stack
* Pop the top element
* Access the top element
* Access the bottom element
* Print stack contents
* Reverse the stack
* Update elements by index
* Insert after a specific index
* Insert at the top
* Insert at the bottom
* Clear all elements
* Generic implementation supporting any data type

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Templates
* Inheritance
* Dynamic Arrays
* Dynamic Memory Allocation
* Generic Programming

---


---

## Requirements

* C++11 or later
* Any C++ compiler
* Visual Studio, VS Code, Code::Blocks, or another compatible IDE

---

## Build and Run

1. Clone the repository.

```bash
git clone https://github.com/your-username/cpp-stack-array.git
```

2. Open the project in your preferred IDE.

3. Build and run the application.

---

## Example Usage

```cpp
clsMyStackArr<int> stack;

stack.push(10);
stack.push(20);
stack.push(30);

stack.pop();

cout << stack.Top();
cout << stack.Bottom();
```

---

## Available Operations

| Function        | Description                    |
| --------------- | ------------------------------ |
| push()          | Push an element onto the stack |
| pop()           | Remove the top element         |
| Top()           | Return the top element         |
| Bottom()        | Return the bottom element      |
| Size()          | Return the number of elements  |
| Reverse()       | Reverse the stack              |
| UpdateItem()    | Update an element              |
| InsertAfter()   | Insert after a specific index  |
| InsertAtFront() | Insert at the top              |
| InsertAtBack()  | Insert at the bottom           |
| Clear()         | Remove all elements            |

---

## Learning Objectives

This project demonstrates:

* Stack implementation using a Dynamic Array
* Generic programming with templates
* Object-oriented programming principles
* Code reuse through inheritance
* Dynamic memory management
* Building reusable data structures

---

## Future Improvements

* Add exception handling for invalid operations
* Implement copy and move constructors
* Add assignment operators
* Improve encapsulation
* Add iterators
* Add unit tests
* Optimize memory allocation strategy

---


## Author

Developed by Hamza Amro.
