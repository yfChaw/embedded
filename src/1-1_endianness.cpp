#include <iostream>

using namespace std;

int main(){

    //unions are used to save memory
    union{
        uint32_t i;
        uint8_t arr[4];
    }data;

    data.i = 0x01020304;

    // cout << data.arr[0] << endl;

    for(int j=0; j<4; j++){
        cout << "arr[" << j << "]: " << int(data.arr[j]) << endl;
        cout << "Cast arr[" << j << "]: " << (int)data.arr[j] << endl;
    }
    if(data.arr[0] == 0x04){
        cout << "Little Endian" << endl;
    }else{
        cout << "Big Endian" << endl;
    }

    return 0;
}
// Importance of data serialisation for exchanging data with other systems
// Why do the union data require casting to int inorder to cout?