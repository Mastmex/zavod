#include <iostream>
#include <string>
#include <list>
#include <conio.h>
using namespace std;

void wysi(string str);

int main(){
    char arr[3]={0,0,0};
    while(1){
        char x = _getch();
        if(x==13)
            break;
        arr[0]=arr[1];
        arr[1]=arr[2];
        arr[2] = x;
        _putch(x);
        if(arr[0]=='7'&&arr[1]=='2'&&arr[2]=='7'){
            _putch('\b'); 
            _putch('\b');  
            _putch('\b'); 
            _putch('w'); _putch('y'); _putch('s'); _putch('i');}
            //arr[2]=0;
    }
}


// string wysi(string str){
    
// }