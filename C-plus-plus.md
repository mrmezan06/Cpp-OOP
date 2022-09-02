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

### What do you understand about polymorphism in C++?

Polymorphism relates to many forms that differ in different situations. It occurs when the hierarchy of multiple classes is related to one another by inheritance. In C++, the two types of polymorphism are

- Compile Time Polymorphism
- Runtime Polymorphism

### Compare compile time and runtime polymorphism.

| Compile-time Polymorphism                                                                     | Runtime Polymorphism                                                                    |
| --------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------- |
| The method to be executed is known at compile time. And the call is resolved by the compiler. | The method to be executed is known at run time. The compiler does not resolve the call. |
| Provides quicker execution because it is known at the compile time.                           | Provides slower execution because it is known at the run time.                          |
| Achieved by operation or function overloading.                                                | Achieved by function overriding.                                                        |

### What is a constructor in C++?

An automatically executed member function whenever an object is created is called a constructor. It has the same name as the class it belongs to. Thus, the compiler knows that the member function is a constructor. No return type is used for constructors.

### What is a virtual function?

A member function in the base class redefined in a derived class is a virtual function. It is declared using the virtual keyword. It ensures that the correct function is called for an object, irrespective of the type of reference/pointer used for the function call. Virtual functions are mainly used for runtime polymorphism.

### What do you understand about friend class and friend function?

A friend class is capable of accessing protected, private, and public members of other classes in which it is declared as friends.

A friend function can also access protected, private, and public members, but it is not a member function.

### What are the three different types of C++ access specifiers?

- Public: All member functions and data members are accessible outside the class.
- Protected: All member functions and data members are accessible within the class and to the derived class.
- Private: All member functions and data members cannot be accessed outside the class.

### What is an abstraction in C++?

Abstraction means displaying the essential details to the user while hiding the irrelevant or particular details that you don’t want to show to a user. It is of two types:

- Control abstraction
- Data abstraction

### What are destructors in C++?

In C++, a deconstructor (function) is automatically called when an object is destroyed. It has the same name as the constructor but is preceded by a tilde. Destructors are used to deallocate memory and perform the cleanup.

### Is it possible to overload a deconstructor? Give reasons for your answer.

No, it is impossible as destructors do not take arguments or return anything. There has to be only one empty destructor per class. It should have a void parameter list.

### What is an abstract class? When is it used?

An abstract class is a class whose objects cannot be created. It serves as a parent for the derived classes. Placing a pure virtual function in the class makes it an abstract class.

### What do you understand about static members and static member functions?

A variable in a class declared as static has its space allocated for the lifetime of the program. Regardless of the number of objects of that class created, there is only a single copy of the static member. The same static member is accessible to all the objects of that class.

A static member function can be called even if no class objects exist. It is accessed using only the class name and the scope resolution operator ::.

### What is call by value and call by reference in C++?

In the call by value method, you pass the copies of actual parameters to the function's formal parameters. This means if there is any change in the values inside the function, then that change will not affect the actual values.

In the call-by-reference method, the reference or address of actual parameters is sent to the function's formal parameters. This means any change in values inside the function will be reflected in the actual values.

### What is an inline function?

An inline function when called expands in line. When you call this function, the whole code of the inline function gets inserted or substituted at the inline function call.

Syntax:

```
Inline return-type function-name(parameters) {

}
```

### What are pointers in C++?

Pointers are the variables that store the memory address of another variable. The type of the variable must correspond with the type of pointer.

Syntax: type \*name

### What is a scope resolution operator?

A scope resolution operator is represented as ::

This operator is used to associate function definition to a particular class.

The scope operator is used for the following purposes:

- To access a global variable when you have a local variable with the same name.
- To define a function outside the class.

### What should be the output of the following C++ program?

![alt](./img/C%2B%2B_InterviewQuestions_Example3.png)

012, the value of i is 0 and i % 5 is equal to 0, so x is displayed and incremented and i is also incremented, then 1 % 5 is not zero, so the condition is not met. Similarly, the process will repeat till 4 % 5 because 5 % 5 is zero. So the value of x is one and gets incremented to two. Then, the process will repeat for 6,7,8,9, but 10 % 10 will be zero again, and the value of x is printed, which is 2.

### What is a constructor?

A constructor is defined as a member function that is invoked whenever you create an object; it has the same name as that of the class.

There are two types of constructors:

- Default constructor: This auto-generated constructor doesn’t take any arguments.
- Parameterized constructor: In this constructor, it can pass arguments.

### What is operator overloading and function overloading?

Operator overloading lets the operators have an extended meaning apart from their predefined meaning.

Function overloading defines a method in such a way that there are multiple ways to call them.
