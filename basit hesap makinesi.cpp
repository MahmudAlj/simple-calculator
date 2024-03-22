#include <iostream>
#include <string>
#include <Math.h>
#include "calculator.h"

int main() {
int sayi_bir;
int sayi_iki;
char islem;
std::string ek;
start:

std::cout << "yapmak istedigin islemi girermisin" << std::endl;
std::cin >> islem;
    
    if(islem == '*'){
        std::cout <<" carpi islemi yapmak istedigin birinci sayiyi girermisin" << std::endl;
        std::cin >> sayi_bir;
        std::cout <<" carpi islemi yapmak istedigin ikinci sayiyi girermisin"  << std::endl;
        std::cin >> sayi_iki;
       std::cout << calculator::multiplication(sayi_bir, sayi_iki);
    }else if(islem =='/'){
        if(sayi_bir > 0 && sayi_bir > sayi_iki){
            std::cout <<" bolme islemi yapmak istedigin birinci sayiyi girermisin" << std::endl;
            std::cin >> sayi_bir;
            std::cout <<" bolme islemi yapmak istedigin ikinci sayiyi girermisin"  << std::endl;
            std::cin >> sayi_iki;
           std::cout << calculator::addition_process(sayi_bir,sayi_iki);
        }
        else{
            goto start;
        }
    }else if(islem == '+'){
            std::cout <<" toplama islemi yapmak istedigin birinci sayiyi girermisin" << std::endl;
            std::cin >> sayi_bir;
            std::cout <<" toplama islemi yapmak istedigin ikinci sayiyi girermisin"  << std::endl;
            std::cin >> sayi_iki;
          std::cout <<  calculator::subtraction(sayi_bir,sayi_iki);
    }else if(islem == '-'){
            std::cout <<" cikarma islemi yapmak istedigin birinci sayiyi girermisin" << std::endl;
            std::cin >> sayi_bir;
            std::cout <<" cikarma islemi yapmak istedigin ikinci sayiyi girermisin"  << std::endl;
            std::cin >> sayi_iki;
           std::cout << calculator::division(sayi_bir,sayi_iki);
    }else if(islem == 'sqrt'){
            std::cout <<" kare kok almak icin lutfen almak istediginiz sayiyi girin" << std::endl;
            std::cin >> sayi_bir;
            std::cout << "kare kokun derecesi ikimi kalsin yoksa senmi girmek istiyorsan \"evet\" yazabilirsin "<< std::endl;
            std::getline(std::cin, ek);
            if(ek == "Evet"){
                std::cout <<" karekokun derecesi kac olsun" << std::endl;
                std::cin >> sayi_iki;
                std::cout << calculator::square_root(sayi_bir,sayi_iki);
            }else{
                std::cout <<calculator::square_root2(sayi_bir);
            }
    }else if(islem == '^'){
         std::cout <<" hangi kuvvettin kuvvetini almak istedigni girermisin" << std::endl;
            std::cin >> sayi_bir;
            std::cout << sayi_bir << "'inin hangi kuvvetini almak istiyorsun"  << std::endl;
            std::cin >> sayi_iki;
            std::cout << calculator::division(sayi_bir,sayi_iki);
    }else if(islem == '%'){
        std::cout << "hangi sayinin modunu almak istiyorsun" << std::endl;
        std::cin >> sayi_bir;
        std::cout << sayi_bir << "sayinin hangi sayinin modunu almak istiyorsun" << std::endl;
        std::cin>> sayi_iki;
        std::cout << calculator::mode(sayi_bir, sayi_iki);
    }
    else{
        std::cout <<  "lutfen tekrar giremisin girdigin yanlis";
        goto start;
    }
   
    
    return 0;
}