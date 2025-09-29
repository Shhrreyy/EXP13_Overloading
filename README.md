# 🔄 EXP-13: Function, Operator, and Constructor Overloading in C++

## 🎯 Aim

To study and implement different types of **overloading** in C++ such as **function overloading, operator overloading, and constructor overloading**.

---

## 📚 Theory

- **Overloading**  
  Overloading in C++ allows multiple definitions of the same function, operator, or constructor with different parameters or functionalities.

1. **Function Overloading**  
   - Multiple functions can have the same name but differ in number or type of parameters.  
   - Helps in achieving **compile-time polymorphism**.  

2. **Operator Overloading**  
   - Redefining the meaning of existing operators for user-defined types (classes/objects).  
   - Example: Overloading `+` to add two objects.  

3. **Constructor Overloading**  
   - A class can have multiple constructors with different parameter lists.  
   - Allows creating objects in multiple ways.  

---

## 🧮 Algorithms / Steps

### 1. **Function Overloading (`Function.cpp`)**
- Define multiple functions with the same name but different parameter lists.  
- Call the functions with different argument types or counts.  
- Compiler selects the correct function during compilation.  

### 2. **Operator Overloading (`Operator.cpp`)**
- Define a class with member variables.  
- Use `operator` keyword to overload an operator (e.g., `+`, `-`, `*`).  
- Create objects and perform operations using overloaded operators.  

### 3. **Constructor Overloading (`Constructor.cpp`)**
- Define a class with multiple constructors (default, parameterized, copy).  
- Initialize objects with different constructors.  
- Show how different constructors are invoked based on arguments passed.  

---

## ✅ Conclusion

This experiment demonstrates how **overloading** provides flexibility in programming:  
- **Function Overloading** makes code more readable and manageable.  
- **Operator Overloading** extends the meaning of operators to work with user-defined objects.  
- **Constructor Overloading** allows multiple ways to create and initialize objects.  

Together, these enable **compile-time polymorphism** in C++.

---

## 🧵 Topics Covered

- Function Overloading  
- Operator Overloading  
- Constructor Overloading  
- Compile-time Polymorphism  
- Advantages of Overloading in OOP  
