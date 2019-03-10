# StringLib
String Library for C++ (University Assignment)

The purpose of this Library is to learn Object Oriented Programming. The Library is inspired by **string** library part of STL. I have replicated only some of the functions of the String Library.

## Documentation

```cpp
String firstName = "Talha";
String lastName = "Balaj";
```

In above statements, I have created two instances of my String Class.

### Getter 

```cpp
	// Getting the string and print
	cout << firstName.get() << " " <<  lastName.get() << endl;
```
### Copying
Printing the String requires you call `.get()` on the object, because currently it doesn't have any operator overloading. 
```cpp
	// Copying another value to String, returns the same object so you can call get() on it.
	cout << firstName.copy("Bilal").get() << endl;
	cout << lastName.copy("Ahmed").get() << endl;
```

Another string can be copied to String Class Object by calling `.copy()` on it, which returns the same object it was called on, So you can call `.get()` on it. `.copy` supports both C-String and this String Library (would be weird, if it didn't supprt itself, lol). 

### Concatenation 
Concatenation is done by calling `.cat()` which accepts the string to be concatenated as Argument (either C-String or String). `.cat()` also returns the object, so, any other functions can be called after it.
```cpp
	cout << firstName.cat("Balaj").get() << endl; // width C-String
	cout << firstName.cat(lastName).get() << endl; // width String
```
Notice you dont have call `.get` on lastName, `.cat()` already knows its String Object and calls .get() on it.	 

### Comparision
Comparsion returns `-2` when String Object, on which `.compare()` is called on, has greater length than one in argument and `-1` when opposite. Returns `0` if length is same, but string is not same Returns `1` when both string are exactly same Supports both C-String and String Class.
```cpp
	firstName.copy("Talha");
	cout << firstName.compare(lastName) << endl;
	cout << firstName.compare("Talha") << endl;
```
### Length
Length can be get by calling `.length()` on the object. It also has static `length()` function which accepts either C-String or String as argument.
```cpp
	cout << firstName.length() << endl;
	cout << String::length(lastName) << endl; // prints length of lastName
	cout << String::length("Hello") << endl;
```
