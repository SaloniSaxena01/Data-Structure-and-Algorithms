# Array

Arrays are defined as collection of similar data elements.

```
<datatype> array_name[array_size]
```

The locations in array are from 0 to array_size-1, consisting of <array_size> spaces.

Every location is of same datatype and can be accessed with the help of index.

Array is stored inside *Stack* in the main memory.

# Structures

Strucutres are defined as collectionn of data members under one name; those data members may be of same or different data types.

Strucutre is used for defining user defined data types by using primitive data types as per our requirements.

```
struct strucutre_name
{
  <datatype> variable;
  <datatype> variable;
  .
  .
  .
  <datatype> variable;
}
```

For defining a variable of structure type we need to follow following inside main
```
struct structure_name variable_name;
```

Structure is stored inside *Stack* in the main memory.

We use **dot operator(.)** to access the members of a structure.

# Pointers

Pointer is an address variable that is meant for storing address of data, not the data itself.

They access the data indirectly.
```
<datatype> *pointer_name
```

For printing value pointed by pointer
```
*pointer_name
```

Why pointers...???

* Accessing heap memory as program doesn't directly access heap memory, to access we need pointers.
* Helps in accessing resources that are outside the program. eg. accessing data on hard disk.
* Parameter passing

Pointer is stored inside *Stack* in the main memory.


# Refrence

Refrence feature is available only in C++.

Refrence is a nickname (alias) given to a variable.

```
<datatype> &variable_name
```

Using refrence we have two names for the same memory location.

Why refrence...?

* Useful in parameter pasing.
