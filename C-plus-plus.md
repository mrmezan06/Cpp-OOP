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

### How to input strings in C++ with spaces?

![alt](./img/C%2B%2B_InterviewQuestions_Example4.png)

### Discuss the difference between new and malloc

| new                                                       | malloc                                           |
| --------------------------------------------------------- | ------------------------------------------------ |
| new is an operator.                                       | malloc is a function.                            |
| It calls the constructor                                  | The malloc function doesn’t call the constructor |
| There is no need to specify memory size while using new() | You have to specify the memory size              |
| new operator can be overloaded                            | malloc() can never be overloaded                 |

### What is operator overloading?

Operator overloading is a mechanism in which a special meaning is given to an operator.

For example, you can overload the ‘+’ operator in a class-like string to concatenate two strings by only using ‘+.’

### What is the output of the below C++ program?

![alt](./img/C%2B%2B_InterviewQuestions_Example5.png)
0 6. In enum, the element's value is one greater than the previous element. The value of blue is 0 by default, and the value of green is five, so the value of GREAT will become six automatically.

### What among these is used to return the number of characters in the string?

Both size and length are used to return the number of characters in the string

### Which among the following statements is correct about the program given below?

![alt](./img/C%2B%2B_InterviewQuestions_Example7.png)
Output will be 7. Pointer p has the memory address of x, and you display the pointer with a dereference operator that will display the value 7.

### Which among the following statements is correct about the program given below?

![alt](./img/C%2B%2B_InterviewQuestions_Example8.png)
Output will be 4810, because you are passing the references of the function here.

### What is a friend function?

You can define a friend function as a function that can access private, public and protect members of the class. You declare the friend function with the help of the friend keyword. You declare this function inside the class.

### Which of the following will give the size of object or type?

The sizeof operator is used to give the size of object or type

### Which of the following is not a member of a class?

Among the following, friend function is not a member of the class

### What is STL?

STL stands for standard template library. It is a library of container templates that provide generic classes and functions.

STL components are containers, algorithms, iterators, and function objects.

![alt](./img/C%2B%2B_InterviewQuestions_Example13.png)

# Advanceds C++ Interview Questions

### How to write a program to check if a number is a palindrome or not?

![alt](./img/C%2B%2B_InterviewQuestions_Example9.png)

### What is a copy constructor?

A copy constructor is a member function that initializes an object using another object within the same class.

This constructor is of two types - Default copy constructor and User-defined copy constructor.

### Write a program to find the factorial of a number?

![alt](./img/C%2B%2B_InterviewQuestions_Example2.png)

### What is inheritance?

Inheritance is the mechanism in which you can create a new class i.e. child class from the existing class i.e. parent class. This child class is also known as a derived class and the parent class is also called Base class.
![alt](./img/C%2B%2B_InterviewQuestions_Example12.png)

### What is Abstraction?

Abstraction can be defined as a technique in which you only show functionality to the user i.e., the details that you want the user to see, hiding the internal details or implementation details.

### What should be the output of the below code?

![alt](./img/C%2B%2B_InterviewQuestions_Example10.png)
6, Ternary operator is used, the value of a is less than b which violates the condition that is why 6 is the answer.

### How to find the frequency of a number in C++?

![alt](./img/C%2B%2B_InterviewQuestions_Example6.png)

### What should be the output of the below code?

![alt](./img/C%2B%2B_InterviewQuestions_Example11.png)
1010, the value of j is incremented to 11, then j value is added to 100 but not assigned, and at last the value of j i.e 11 is added to 999 which gives us 1010.

### What should be the correct statement about string objects in C++?

String objects have a dynamic size.

### How is a shallow copy different from a deep copy?

| Shallow Copy                                                              | Deep Copy                                                                             |
| ------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- |
| It stores the references of objects to the original memory address.       | It makes a fresh and separate copy of an entire object and its unique memory address. |
| Faster                                                                    | Comparatively slower                                                                  |
| It reflects changes made to the new/copied object in the original object. | It doesn’t reflect changes made to the new/copied object in the original object.      |

### How are virtual functions different from pure virtual functions?

- Virtual function: A member function in the base class redefined in a derived class. It is declared with a virtual keyword.

- Pure virtual function: A function with no implementation. It is declared by assigning 0. It does not have a body.

### Class D is derived from a base class B. If creating an object of type D, what order will the constructors of these classes get called?

The derived class consists of two parts: the base part and the derived part. C++ constructs derived objects in phases. The process begins with constructing the most-base class (at the top of the inheritance tree), followed by each child class construction in order, and then the most-child class. Thus, first, the Constructor of class B will be called, and then the constructor of class D.

### Can a virtual function be called from a constructor?

Yes, a virtual function can be called from a constructor but carefully because it might not do as per the expectations. When a virtual function is called, the virtual call gets resolved at runtime when a virtual function is called.

### What are void pointers?

A pointer with no associated data type is called a void pointer. It can hold addresses of any type. Also, you can assign a pointer of any type to a void pointer, but the reverse is not true unless it is typecast as follows:

str=(char\*) ptr;

### What is this pointer in C++?

Every object’s member functions have a pointer named this. It points to the object itself. Its value is set to the address of the object for which it is called. This pointer is suitable for accessing the data in the object it points to.

### How would you deallocate and allocate memory in C++?

Use the new operator for memory allocation and the delete operator for memory deallocation in C++.
