# BankingApp
Hello! This GitHub repository contains a console application project that performs behaviors typical of a banking application. The project allows users to create or review account(s) and perform transactions. This project was desgined and implemented by Ronny Fray Regato, a Software Engineering student at Florida Gulf Coast University (FGCU) in Fort Myers, FL. The project was completed in December 2021. This project was delivered as a final integration project for FGCU's COP 3003 - Programming II course to demonstrate object-oriented principles. A majority of the design and implementation was accomplished at the university or at home.


## Demonstration
![BankingApp](https://user-images.githubusercontent.com/71354370/146276083-7fccea1c-ac45-483e-9255-30fd92e39fd3.gif)


## Documentation
[Doxygen](https://ronnyfrayregato.github.io/COP-3003-Integration-Project/html/)


## Diagrams
<br /> <br />
![Account](https://user-images.githubusercontent.com/71354370/146277611-533cc1ce-4670-4fe1-9aec-08a8bf895b95.png)
<br /> <br /> <br /> <br />
![CheckingAccount](https://user-images.githubusercontent.com/71354370/146277622-6e9cede0-460b-41db-8860-f0cecc3e1fc5.png)
<br /> <br /> <br /> <br />
![SavingsAccount](https://user-images.githubusercontent.com/71354370/146279878-50f5879a-89e7-47d2-be7c-811bbc4b1253.png)
<br /> <br />


## Getting Started
In order to get a local copy of the project up and running, clone the GitHub repository and open the solution file in Microsoft Visual Studio. Add the header and .cpp files to the project folder. Once these steps are complete, a local copy of the project should be ready to run as demonstrated.


## Built With
* Microsoft Visual Studio  
* Doxywizard 
* ScreenToGif


## Contributing
Any contributions to the project are appreciated. The console application project implements several behaviors expected of a banking application. However, there is room to incorporate more behaviors into the project, such as implementing more transaction types.


## Author
* Ronny Fray Regato


## License


## Acknowledgments
* Starting Out with C++: Early Objects, 10th Edition by Tony Gaddis
* Professor Scott Vanselow, Software Engineering Department, FGCU


## History
* Version 3.0: first completed implementation, 12/15/2021


## Key Programming Concepts Utilized
* LO1. Design and implement a class.

* LO2. Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.

* LO3. Correctly reason about control flow in a program using dynamic dispatch.

* LO4. Compare and contrast (1) the procedural/functional approach (defining a function for each operation with the function body providing a case for each data variant) and (2) the object-oriented approach (defining a class for each data variant with the class definition providing a method for each operation). Understand both as defining a matrix of operations and variants.

* LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).

* LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.

* LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments.

<br /> <br />

LO2a. Describe the visibility inheritance model:

Utillzing object-oriented inheritance results in the derived class inheriting all of the base class' fields and methods. However, inheritance visibility modes control the accessability of the base class' members by the derived class. Specifically, the derived class inherits the private members of the base class but cannot access them. There are three inheritance visibility modes: Public, Protected, and Private. In the Public Visibility Mode, the public and protected members of the base class become public and protected in the derived class, respectively. In the Protected Visibility Mode, the public and protected members of the base class become protected in the derived class. In the Private Visibility Mode, the public and protected members of the base class become private in the derived class. <br /> <br />


LO4. Compare and contrast the procedural/functional approach and the object-oriented approach:

Procedural and object-oriented programming are different approaches in managing code and data. In the procedural approach, programs are constructed as a set of procedures to be completed, one after another. Programs handle data and code together through the passing of data by program code directly. On the other hand, in the object-oriented approach, programs are designed around objects, groupings of data representing a real item. Data and program code are managed separately, allowing for more control over and compartmentalization of changes to data and reducing the chance for bugs to appear. The modular nature of objects also allows for the ease of reuse of objects in other programs requiring their functionality. <br /> <br />


LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype):

Object-oriented inheritance allows the member functions, known as methods, of a base class to be passed to a derived class. The base class shares its methods with its derived classes, allowing for the sharing and reusing of code among the classes. The changing of the behaviors of methods among derived classes of a base class is known as overriding. Programmers can implement functions that expect a base class as an argument. Since derived classes are also considered to be of their base type, derived classes may be passed in places expecting their base type. If the function is overridden, having different behaviors depending on the derived class passed, such function can be resolved to the appropriate behavior by use of the arrow operator, allowing the function to access the member of the matching derived class type passed. A pointer to a base class assigned the address of a derived class may be used in such scenarios in conjunction with the arrow operator and overridden functions. This is known as downcasting.


## Error List
![ErrorList](https://user-images.githubusercontent.com/71354370/146303030-8f3de7d8-9a71-4736-a07d-27d8dd20fc9a.png)
<br /> <br />

* readability warning: GetBalance and Get InterestRate methods cannot be const because compiler flags methods as superfluous const methods.
* cppcoreguidelines warning: account_number_ variable cannot be made const because it is designed to be incremented every time an object of Account class or its derived classes are created. The variable is used as a unique ID (account number) among accounts.
