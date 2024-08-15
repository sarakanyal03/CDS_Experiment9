# EXPERIMENT 9
# Aim
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
# Code and Output 
1) 9A :
   Code :
```
//Program to illustrate pointers
#include <iostream>
using namespace std;
int main (){
    int var=20;
    // declare pointer c=variable
    int *ptr;
    //note that data type of ptr and var must be same
    ptr =&var;
    //assign the address of variable of a variable to a pointer 
    cout<<"Value at ptr=" << ptr <<  "\n";
    cout<<"Value at var=" << var <<  "\n";
    cout<<"Value at *ptr=" << *ptr <<  "\n";
    return 0;
}
   ```
   Output : <br>
   ![EXP9A](https://github.com/sarakanyal03/CDS_Experiment9/blob/main/9A.png)

2) 9B :
   Code :
  ```
#include <iostream>
using namespace std;
int main () {
    // dynamically creating array of size=5
    int *ptr=new int[5];
    // initialize the arrat p[] as {10,20,30,40,50}
    for (int i=0;i<5;i++){
        ptr[i]=10*(i+1);

    }
    //printing the values using pointers
    cout<< *ptr << endl;
    cout<< *ptr +1 << endl;
    cout<< *(ptr +1) << endl;   
    cout<< 2[ptr] << endl; 
    cout<< ptr[2] << endl; 
    *ptr++;
    cout<< *ptr;
    return 0;
}


   ```
   Output: <br>
   ![EXP9B](https://github.com/sarakanyal03/CDS_Experiment9/blob/main/9B.png)

3) 9C :
   Code :
```
#include <iostream>
using namespace std;
int main(){
    int *p ,b=10;
    p = &b ;
    cout <<*p << "  " << b << endl <<p <<"  "<< &b<<endl;
    p++;
    cout<<"After increment:" <<p<<endl;
    float *n, a=8.923;
    n=&a;
    cout<< endl<<*n<<"  "<<a<<endl<<n<<"  "<<&a<<endl;
    n++;
    cout<<" After increment" <<n <<endl;
    char *ch, c(10);
    c='#';
    ch=&c;
    cout<< endl<< (void*)ch<<"  "<<endl;
    ch++;
    cout<<" After increment:" << (void*)ch<<endl;
}

   ```

   Output: <br>
   ![EXP9C](https://github.com/sarakanyal03/CDS_Experiment9/blob/main/9C.png)
   
# Conclusion 
The following are the main things to remember when learning and using C++ pointers:

*  Variables and data structures can be efficiently manipulated thanks to pointers, which offer a direct path to memory. For dynamic memory allocation, which is essential in low-level programming, they provide the framework.

* By giving memory locations to functions, pointers allow them to change variables outside of their immediate scope, which helps to conserve memory and prevent wasteful data copying.

* Dynamic data structures like linked lists, trees, and graphs can be created with pointers. They provide more versatility when working with arrays and dynamic memory management.

* Mismanagement of pointers, like dereferencing null or uninitialized pointers, can lead to memory leaks, segmentation faults, or undefined behavior. To prevent these problems, one must have a solid understanding of pointer arithmetic and memory allocation/deallocation.

*  The building blocks of advanced C++ ideas such as object-oriented programming, references, and smart pointers are pointers. They are also essential for low-latency applications, embedded devices, and hardware-level programming.

To sum up, learning pointers in C++ not only helps programmers write more effective code, but it also lays a strong basis for learning more advanced concepts related to system-level resources and programming.
