# COP-3003-Integration-Project
Integrating OOP skills from Programming II. <br /> <br />


https://ronnyfrayregato.github.io/COP-3003-Integration-Project/html/ <br /> <br />


Compare and contrast the procedural/functional approach and the object-oriented approach:

Procedural and object-oriented programming are different approaches in managing code and data. In the procedural approach, programs are constructed as a set of procedures to be completed, one after another. Programs handle data and code together through the passing of data by program code directly. On the other hand, in the object-oriented approach, programs are designed around objects, groupings of data representing a real item. Data and program code are managed separately, allowing for more control over and compartmentalization of changes to data and reducing the chance for bugs to appear. The modular nature of objects also allows for the ease of reuse of objects in other programs requiring their functionality. <br /> <br />


Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype):

Object-oriented inheritance allows the member functions, known as methods, of a base class to be passed to a derived class. The base class shares its methods with its derived classes, allowing for the sharing and reusing of code among the classes. The changing of the behaviors of methods among derived classes of a base class is known as overriding. Programmers can implement functions that expect a base class as an argument. Since derived classes are also considered to be of their base type, derived classes may be passed in places expecting their base type. If the function is overridden, having different behaviors depending on the derived class passed, such function can be resolved to the appropriate behavior by use of the arrow operator, allowing the function to access the member of the matching derived class type passed. A pointer to a base class assigned the address of a derived class may be used in such scenarios in conjunction with the arrow operator and overridden functions. This is known as downcasting.
