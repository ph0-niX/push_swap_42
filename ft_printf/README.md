*𝘛𝘩𝘪𝘴 𝘱𝘳𝘰𝘫𝘦𝘤𝘵 𝘩𝘢𝘴 𝘣𝘦𝘦𝘯 𝘤𝘳𝘦𝘢𝘵𝘦𝘥 𝘢𝘴 𝘱𝘢𝘳𝘵 𝘰𝘧 𝘵𝘩𝘦 42 𝘤𝘶𝘳𝘳𝘪𝘤𝘶𝘭𝘶𝘮 𝘣𝘺 𝘥𝘴𝘩𝘤𝘩𝘦𝘳𝘣.*

# ft_printf

---

## Description

The **ft_printf** project consists of reimplementing the standard C library function `printf`. The goal is to deeply understand how formatted output works internally, including parsing format strings, handling variadic arguments, and converting different data types into their string representations.

Unlike the original `printf`, this implementation focuses on a subset of format specifiers and is built from scratch without relying on the standard library’s formatting functions.

### Objectives

* Learn how **variadic functions** work in C
* Understand **string parsing and interpretation**
* Implement **type-based formatting logic**
* Practice **low-level output handling** using system calls
* Build a modular and extensible codebase

---

## Supported Features

The implementation supports the following format specifiers:

| Specifier   | Description                            |
| ----------- | -------------------------------------- |
| `%c`        | Character                              |
| `%s`        | String                                 |
| `%p`        | Pointer (hexadecimal format with `0x`) |
| `%d` / `%i` | Signed integer                         |
| `%u`        | Unsigned integer                       |
| `%x`        | Hexadecimal (lowercase)                |
| `%X`        | Hexadecimal (uppercase)                |
| `%%`        | Literal `%`                            |

---

## Instructions

### Compilation

To compile the project, run:

```
make
```

This will generate a static library (e.g., `libftprintf.a`).

---

### Usage

Include the header in your C file:

```
#include "ft_printf.h"
```

Then use the function:

```
ft_printf("Hello %s, number: %d\n", "world", 42);
```

---

### Cleaning

To remove object files:

```
make clean
```

To remove everything (including the library):

```
make fclean
```

To recompile from scratch:

```
make re
```

---

## Algorithm & Data Structure Design

### Core Approach

The implementation is based on a **linear parsing algorithm** that processes the format string character by character.

### Step-by-step Logic

1. **Sequential Parsing**

   * Iterate through the format string.
   * If a character is not `%`, print it directly.
   * If `%` is encountered, switch to parsing mode.

2. **Specifier Detection**

   * Read the next character after `%`.
   * Identify which format specifier it represents.

3. **Dispatcher Pattern**

   * Based on the specifier, call the corresponding handler function.
   * Each handler is responsible for:

     * Extracting the correct argument type
     * Converting it to a string representation
     * Printing it

4. **Variadic Argument Handling**

   * Use a variadic argument mechanism to access arguments dynamically.
   * Arguments are read sequentially in the same order as specifiers appear.

---

### Data Structures Used

#### 1. Format String (char *)

* Acts as the main input stream
* Parsed sequentially
* No additional storage required → **O(1) space**

#### 2. Variadic Argument List

* Used to access arguments dynamically
* Ensures flexibility for different types

#### 3. Recursive / Iterative Number Conversion

* Used for integer and hexadecimal output
* Converts numbers digit-by-digit

---

### Design Choices & Justification

#### Character-by-character parsing

* Simple and efficient
* Avoids unnecessary memory allocation

#### Modular function design

* Each specifier handled independently
* Improves readability and debugging

#### No buffering strategy

* Output is written immediately
* Mimics low-level behavior of standard output

#### Recursive number printing

* Simplifies digit ordering
* Avoids reversing strings

---

### Complexity Analysis

| Operation        | Complexity |
| ---------------- | ---------- |
| Parsing string   | O(n)       |
| Printing numbers | O(log n)   |
| Total            | O(n)       |

Where `n` is the length of the format string.

---

## Edge Cases Handled

* NULL string → prints `(null)`
* NULL pointer → prints `(nil)`
* Negative integers
* Minimum integer value (INT_MIN)
* Zero values
* Consecutive `%` (`%%`)
* Pointer formatting

---

## Usage Example

```
ft_printf("Char: %c\n", 'A');
ft_printf("String: %s\n", "Hello");
ft_printf("Number: %d\n", -42);
ft_printf("Hex: %x\n", 255);
ft_printf("Pointer: %p\n", ptr);
```

---

## Resources

### Documentation & References

* ISO C standard documentation
* Manual pages (`man printf`, `man write`)
* Variadic functions documentation

### Tutorials & Articles

* Guides on implementing printf
* Articles explaining format specifiers and parsing
* Educational blog posts on low-level I/O in C

---

### AI Usage

AI tools were used in the following ways:

* To **clarify theoretical concepts** such as variadic arguments and format parsing
* To **structure the development approach** and break down the problem
* To **review and refine explanations** for documentation purposes

---

## Conclusion

This project provides a deep understanding of how formatted output works in C. By reimplementing `printf`, you gain insight into parsing, memory handling, and low-level programming — all essential skills for systems programming and future projects in the 42 curriculum.

---
