# COP-3003-Integration-Project
Integrating OOP skills from Programming II. <br /> <br />


https://ronnyfrayregato.github.io/COP-3003-Integration-Project/html/ <br /> <br />


LO2a. Describe the visibility inheritance model:

Utillzing object-oriented inheritance results in the derived class inheriting all of the base class' fields and methods. However, inheritance visibility modes control the accessability of the base class' members by the derived class. Specifically, the derived class inherits the private members of the base class but cannot access them. There are three inheritance visibility modes: Public, Protected, and Private. In the Public Visibility Mode, the public and protected members of the base class become public and protected in the derived class, respectively. In the Protected Visibility Mode, the public and protected members of the base class become protected in the derived class. In the Private Visibility Mode, the public and protected members of the base class become private in the derived class. <br /> <br />


LO4. Compare and contrast the procedural/functional approach and the object-oriented approach:

Procedural and object-oriented programming are different approaches in managing code and data. In the procedural approach, programs are constructed as a set of procedures to be completed, one after another. Programs handle data and code together through the passing of data by program code directly. On the other hand, in the object-oriented approach, programs are designed around objects, groupings of data representing a real item. Data and program code are managed separately, allowing for more control over and compartmentalization of changes to data and reducing the chance for bugs to appear. The modular nature of objects also allows for the ease of reuse of objects in other programs requiring their functionality. <br /> <br />


LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype):

Object-oriented inheritance allows the member functions, known as methods, of a base class to be passed to a derived class. The base class shares its methods with its derived classes, allowing for the sharing and reusing of code among the classes. The changing of the behaviors of methods among derived classes of a base class is known as overriding. Programmers can implement functions that expect a base class as an argument. Since derived classes are also considered to be of their base type, derived classes may be passed in places expecting their base type. If the function is overridden, having different behaviors depending on the derived class passed, such function can be resolved to the appropriate behavior by use of the arrow operator, allowing the function to access the member of the matching derived class type passed. A pointer to a base class assigned the address of a derived class may be used in such scenarios in conjunction with the arrow operator and overridden functions. This is known as downcasting.
