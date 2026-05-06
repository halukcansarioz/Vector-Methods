
# 📐 Vector-Methods
### (A Simple C++ Vector Library for Resource‑Constrained Environments)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)](#)
[![Template Class](https://img.shields.io/badge/Template%20Class-4D4D4D?style=flat&logo=c%2B%2B&logoColor=white)](#)
[![Made with Learning](https://img.shields.io/badge/Made%20with-Learning-1f425f.svg)](#)

This project is a lightweight, template‑based vector (dynamic array) library implemented in C++. It was developed both as a learning exercise in generic programming and as a potential alternative to the standard library for environments with tight resource constraints.

## 📚 Table of Contents
- [About the Project](#about-the-project)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation & Usage](#installation--usage)
- [API Reference](#api-reference)
- [Project Structure](#project-structure)
- [Development Process](#development-process)
- [Contributing](#contributing)
- [Contact](#contact)
- [License](#license)

---

## About the Project
The library provides a generic `myVector<T>` class that supports common vector operations such as adding, removing, sorting, and element access. It uses manual dynamic memory management (raw pointers) to demonstrate how such containers work under the hood, making it especially useful for students and embedded developers.

- **Developer:** Haluk Can SARIÖZ
- **Type:** C++ Template Library
- **Purpose:** Practice template programming and dynamic memory management

---

## Features
- **Generic Design:** The `myVector<T>` class works with any data type (`int`, `char`, `double`, etc.).
- **Basic Vector Operations:** Add, remove, get, sort, and erase elements.
- **Lightweight:** No dependencies beyond the standard C library, making it suitable for constrained environments.
- **Built‑in Examples:** The `main()` function demonstrates usage with both `char` and `int` types.

---

## Technologies Used
- **C++** – Core language.
- **Template Metaprogramming** – Type‑independent class and function design.
- **GCC / G++** – Compiler.
- **VS Code / Dev-C++** – Editors.

---

## Installation & Usage

### 1. Clone the Repository
```bash
git clone https://github.com/halukcansarioz/Vector-Methods.git
```

### 2. Navigate to the Project Directory
```bash
cd Vector-Methods
```

### 3. Compile the Example

**Linux / macOS:**
```bash
g++ Vector.cpp -o vector_app
```

**Windows (MinGW / GCC required):**
```bash
g++ Vector.cpp -o vector_app.exe
```

> **Note:** Since templates are used, the implementation is included in `Vector.cpp` (which also contains the demonstration `main()`). If you separate the header and implementation in the future, you will need to include the `.cpp` file as well.

### 4. Run the Application
```bash
# Linux / macOS
./vector_app

# Windows
vector_app.exe
```

The program will ask for the vector size and then prompt you to enter character and integer values to test the operations.

---

## API Reference

The `myVector<T>` class provides the following public methods:

| Method | Description |
|--------|-------------|
| `myVector(int num)` | Constructs a vector with a specified initial capacity. |
| `~myVector()` | Destructor – releases allocated memory. |
| `int size()` | Returns the number of elements currently stored. |
| `void add(T s)` | Adds a new element to the end of the vector. Warns if capacity is exceeded. |
| `T getAt(int index)` | Returns the element at the given index. |
| `void getElement(int index)` | Prints the element at the given index to the console. |
| `void remove(T s)` | Removes the first occurrence of the specified value. |
| `void erase(int index)` | Removes the element at the specified index. |
| `void sort()` | Sorts the vector in ascending order using Bubble Sort. |

---

## Project Structure
```text
Vector-Methods/
├── Vector.h                  # Template class header (interface)
├── Vector.cpp                # Template method implementations + example main()
├── .gitattributes            # Git configuration
└── README.md                 # Project documentation
```

---

## Development Process

### 1. Fork the Repository
Fork the project to extend the library with additional features.

### 2. Create a New Branch
```bash
git checkout -b feature/new-method
```

### 3. Push Your Code
```bash
git push origin feature/new-method
```

---

## Contributing
1. **Fork** this repository.
2. Create a **Branch** (`git checkout -b feature/NewMethod`).
3. Add a new method or improve existing code.
4. **Commit** your changes (`git commit -m 'Add: reverse() method'`).
5. **Push** your branch (`git push origin feature/NewMethod`).
6. Open a **Pull Request**.

> 💡 **Ideas for new methods:** `reverse()`, `contains()`, `clear()`, `resize()`, `operator[]` overload.

---

<a name="contact"></a>
## Contact
**Haluk Can Sarıöz**
- GitHub: [@halukcansarioz](https://github.com/halukcansarioz)
- Email: [halukcansarioz19@gmail.com](mailto:halukcansarioz19@gmail.com)
- LinkedIn: [Haluk Can Sarıöz](https://www.linkedin.com/in/halukcansarioz)

**Project Link:** [https://github.com/halukcansarioz/Vector-Methods](https://github.com/halukcansarioz/Vector-Methods)

---

## License
This project is licensed under the [MIT License](LICENSE).
