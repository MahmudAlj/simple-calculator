#include <iostream> 

template <typename any>
class calculate{
    any number_one;
    any number_two;
    any secim = 0;
    char sign;
private:
    any plus(any number_one, any number_two){
        return number_one + number_two;
    }
    any minus(any number_one, any number_two){
        return number_one - number_two;
    }
    any cross(any number_one, any number_two){
        return number_one * number_two;
    }
    any episode(any number_one, any number_two){
        if(number_one > 0)
            return number_one / number_two;
        else{
            return number_two / number_one;
        }
    }

public:
    void giris_al(char sign){
        start:
        std::cout << "lutfen islemi gir" << std::endl;
        std::cout << "+ - * /" << std::endl;
        std::cin >> sign;
    }
    void sayi_al(any number_one, any number_two){
        std::cout << "iki bir sayi gir " << std::endl;
        std::cin >> number_one >> number_two;
    } 
    int secim(char sign, any number_one, any number_two,any secim){
        if(sign == '+'){
           secim =  plus(number_one,number_two);
        } else if(sign == '-'){
           secim =  minus(number_one,number_two);
        } else if(sign == '*'){
           secim =  cross(number_one,number_two);
        }else if(sign == '/'){
           secim =  episode(number_one,number_two);
        }
        else{
            goto start;
        }
        return secim;
    }};

int main(){


calculate<int> just;
just.giris_al();
just.sayi_al();
just.std::cout << secim();

    return 0;
}
