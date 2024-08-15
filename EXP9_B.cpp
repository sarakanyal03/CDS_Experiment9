//SARA KANYAL
//23070123115
//
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

