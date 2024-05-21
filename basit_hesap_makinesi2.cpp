#include <iostream> 

template <typename any>

class calculate{
    any number_one;
    any number_two;
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
    void giris_al(){
        
        std::cout << "lutfen islemi gir" << std::endl;
        std::cout << "+ - * /" << std::endl;
        std::cin >> sign;
    }

    void sayi_al(){
        std::cout << "iki bir sayi gir " << std::endl;
        std::cin >> number_one >> number_two;
    } 

    int secim(){
        int result;
        if(sign == '+'){
           result =  plus(number_one,number_two);
        } else if(sign == '-'){
           result =  minus(number_one,number_two);
        } else if(sign == '*'){
           result =  cross(number_one,number_two);
        }else if(sign == '/'){
           result =  episode(number_one,number_two);
        }
        return result;
    }
    };

int main(){


calculate<int> justi;
justi.giris_al();
justi.sayi_al();
std::cout <<  justi.secim() << std::endl;


calculate<float> justf;
justf.giris_al();
justf.sayi_al();
std::cout <<  justf.secim() << std::endl;
    return 0;
}
