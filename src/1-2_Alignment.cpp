// Tested on x86 archlinux
#include <iostream>

using namespace std;

int main(void){
    struct{
        uint8_t c;
        uint16_t i;
    }a = {1,1};

    //check size
    cout << sizeof(a) << endl; // output 4

    struct{
        uint8_t c;
        uint8_t cc;
        uint32_t i;
    }b = {1,1};

    cout << sizeof(b) << endl; // output 8

    struct{
        uint8_t c;
        uint8_t cc;
        uint32_t ccc;
        uint64_t i;
    }d = {1,1};

    cout << sizeof(d) << endl; // output 16

    cout << "Size of uint8_t: " << sizeof(uint8_t) << endl; // 1 
    cout << "Size of uint16_t: " << sizeof(uint16_t) << endl; // 2
    cout << "Size of uint32_t: " << sizeof(uint32_t) << endl; // 4
    cout << "Size of uint64_t: " << sizeof(uint64_t) << endl; // 8

    return 0;
}

// Alignment Rules
// The output size is very dependable on architecture of hardware, that's why the importance of "serialization"
// Data Alignment is also crucial for efficient memory mapping through hardware address translation mechanisms.
