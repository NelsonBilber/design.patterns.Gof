#Creational patterns

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
