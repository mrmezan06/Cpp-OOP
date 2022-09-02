## C++ Question And Answer

### What is the C++ OOPs concept?

- Object
- Class
- Inheritance
- Polymorphism
- Encapsulation
- Abstraction

* [x] Object: Anything that exists physically in the real world is called an object.

* [x] Class: The collection of objects is called class.

* [x] Inheritance: Properties of parent class inherited into child class is known as inheritance.

* [x] Polymorphism: It is the ability to exist in more than one form.

* [x] Encapsulation: Binding of code and data together into a single unit.

* [x] Abstraction: Hiding internal details and showing functionality to the user.

### What is the difference between C and C++?

| C                                                        | C++                                            |
| -------------------------------------------------------- | ---------------------------------------------- |
| C is a procedural language.                              | C++ is an object-oriented language.            |
| It follows a top-down approach.                          | It follows a bottom-up approach.               |
| C doesn’t support function or operator overloading.      | C++ supports function or operator overloading. |
| C language doesn’t support virtual and friend functions. | C++ supports virtual and friend functions.     |
| C language has 32 keywords                               | C++ language contains 52 keywords              |

### What are access modifiers?

You use access modifiers to define accessibility for the class members. It defines how to access the members of the class outside the class scope.

There are three types of access modifiers:

- Private
- Public
- Protected

### What is the difference between a while loop and a do-while loop?

| while                                                                                                            | do while                                                                               |
| ---------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------- |
| The while loop verifies the condition; if it’s true, then it iterates the loop till the condition becomes false. | The do-while loop first iterates the loop body once, then it checks for the condition. |
| If the condition is false in a while loop, then not a single statement will execute inside the loop.             | If the condition in a do-while loop is false, then the body will also execute once.    |
| Syntax: `while (condition){ statements }`                                                                        | Syntax: `do{ statements } while (condition);`                                          |

### What is the size of the int data type?

4 bytes, the integer data type is 4 bytes.

### Which among the following operators cannot be overloaded?

?: operator cannot be overloaded because it is not syntactically possible.

N.B: Possible overloading {-,+,%,\*}

### What among these is used to return the number of characters in the string?

Both size and length are used to return the number of characters in the string.

### Discuss the difference between prefix and postfix?

- In prefix (++i), first, it increments the value, and then it assigns the value to the expression.

- In postfix (i++), it assigns the value to the expression, and then it increments the variable's value.

### Can you compile a program without the main function?

Yes, you can compile a program without the main function, but you cannot run or execute the program because the main() function is the entry point, from where all the execution begins. And without the entry point, then you can execute the program.

### What are the four different data types in C++?

- Primitive/Basic: Char, int, short, float, double, long, bool, etc.
- Derived: Array, pointer, etc.
- Enumeration: Enum
- User-defined: Structure, class, etc.

### How is struct different from class?

| Struct                                                                               | Class                                                            |
| ------------------------------------------------------------------------------------ | ---------------------------------------------------------------- |
| Its members are public by default.                                                   | Its members are private by default.                              |
| The default access specifiers are public when deriving a struct from a class/struct. | The default access specifiers are private when deriving a class. |
