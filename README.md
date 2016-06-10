###Behavioural Patterns

How object communicate between them.

- **Chain-of-responsibility: **
Pass the request along the chain until and object handlers it.

* **Command: **
Encapsulate a request from the invoker in objects
Object-oriented replacement for callbacks

* **Interpreter: **
Define a grammar for instructions that form a part of a language or notation, allowing the grammar to be easily extended.

* **Iterator: **
Standard interface for traversing a collection without the need to understand the underlying structure

* **Mediator: **
Encpasulate how a set of objects interact. Intermediary to decouple many peers.

* **Memento: **
Controls the comunication between two entities storing state of an object to use in future.

* **Observer: **
Check when object states changes and all dependent objects are notified

* **State: **
Change the object behaviour when internal state change.

* **Strategy: **
Encapsulate similar algorithms on a class an choose them in runtime.

* **TemplateMethod: **
Similar to Strategy pattern but we could define steps with individual implementations

* **Visitor: **
Separates a set of structured data from functionaliy that may be performed uppon it. It separates an algorithm from an object strucutr on which it operates.


###Creational patterns

Provide ways to instantiate single objects or groups of related objects.

* **Abstract Factory: ** Enables creating objects with common characteristics without expose their convrete class
Example: create a window thinking in a cross-platform mechanism
http://www.bogotobogo.com/DesignPatterns/abstractfactorymethod.php

* **Builder: **
Construct complex objects by slice then in multiple operations. Contruct an object step by step 

* **Factory_Method: **
Defines an interface for creating objects but subclasses decide which classes to instanciare
Replace class constructors abstracting the process object generation so that the type of the object instanciated can be determined at runtime. 

* **Prototype: **
Instanciate a class by cloning the properties of an existing object.
Deep copy: clones main object and child objects.
Shallow copy: duplicates all object's properties, including reference, including referencess.
Shallow copies duplicate as little as possible. A shallow copy of a collection is a copy of the collection structure, not the elements. With a shallow copy, two collections now share the individual elements.
Deep copies duplicate everything. A deep copy of a collection is two collections with all of the elements in the original collection duplicated.

* **Singleton: **
The infamous singleton.
Ensures only one instance of a particular class.


###Structural patterns

Solutions about object composition, interfaces, ..., how to define relationships between class 

* **Adapter: **
When an existing class, and its interface does not match
Reuse a class that cooperates with unrelated classes

* **Bridge: **
It aims to decouple interface from implementation
C++ is also known as Pimpl (pointer to implementation)

* **Composite: **
Create hierarchical objects into tree structures.
Group of objects treated in the same way as single instance of an object.


* **Decorator: **
Change the functionality of an object at runtime without impacting the existing functionality of the objects.

* **Facade: **
Interface for simplify comunications with complex objects

* **Flyweight: **
Optimize resources when working with a very large number of objects

* **Proxy: **
Adds a level of indirection for most complex tasks. Is works as an interface for something else.


