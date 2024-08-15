# Experiment 9
# AIM 
To study and implement C++ pointer basics.
# Theory 
A pointer in C++ is a variable that holds the memory address of another variable. A pointer saves the address of a value in memory rather than the actual value, as opposed to regular variables which store the value directly. <br>
Key characteristics of pointers are as follows: <br>
1) Stores Memory Address: Pointers do not hold data themselves but point to the location where data is stored. <br>
2) Used for Memory Management: They allow for efficient memory management and enable dynamic memory allocation. <br>
3) Dereferencing: You can access or modify the value at the address stored in the pointer using the dereference operator (*). <br>
<br>
Some basics operations of pointers are as follows : <br>
* Syntax : <br>
```
datatype *var_name
int* ptr;  // 'ptr' is a pointer to an integer
```
* Pointer declaration : <br>
```
int* ptr;     // Pointer to an integer
char* cptr;   // Pointer to a character
double* dptr; // Pointer to a double
```
* Pointer initialization : <br>
```
int var = 10;
int* ptr = &var;  // ptr now holds the address of 'var'
```
* Dereferencing a pointer : <br>
```
int var = 10;
int* ptr = &var;
cout << *ptr;  // This will print 10
```

A collection of pointers that may store the address of a variable of a certain data type is called an array of pointers. The entries of this array store variable addresses rather than actual values. <br>
* Syntax : <br>
```
type* array_name[size];
```
* Assigning Addresses to Pointers in the Array: you can assign address of varaiables to pointers.<br>
```
int a = 10, b = 20, c = 30;
int* ptrArray[3];

ptrArray[0] = &a; // ptrArray[0] now points to 'a'
ptrArray[1] = &b; // ptrArray[1] now points to 'b'
ptrArray[2] = &c; // ptrArray[2] now points to 'c'
```
* Accessing Values using Pointers in the Array: You can use the dereferencing operator (*) to access the values that the pointers point to <br>
```
cout << *ptrArray[0]; // Outputs the value of 'a' (10)
cout << *ptrArray[1]; // Outputs the value of 'b' (20)
cout << *ptrArray[2]; // Outputs the value of 'c' (30)

```
 
