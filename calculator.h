
// calculator.h
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <math.h>
namespace calculator {
   
   
int multiplication(int sayi1,int sayi2){
    return sayi1 * sayi2;
}
int addition_process(int sayi1,int sayi2){
    return sayi1 / sayi2;
}
int  subtraction(int sayi1,int sayi2){
    return sayi1 + sayi2;
}
int division(int sayi1,int sayi2){
    return sayi1 - sayi2;
}
int  square_root2(int sayi1){
    return sqrt(sayi1);
}
int  square_root(int sayi1,int sayi2){
    return pow(sayi1, 1/sayi2);
}
int squaring(int sayi1,int sayi2){
    return sayi1^sayi2;
}
int mode(int sayi1,int sayi2){
    return sayi1 % sayi2;
}
}

#endif