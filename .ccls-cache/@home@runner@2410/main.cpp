#include <iostream>

using namespace std;
int main() {
  int c0;
  int counter;
  while (true){
    cin >> c0;
    if(c0>0){//якщо с0 більше 0
    while (c0!=1){ //поки с0 не дорівнює 1 
      if (c0%2==0){// якщо число при діленні на два = 0
        c0=c0/2;//обчислити як парне
      }else if (c0%2!=0){//якщо ні
        c0=3*c0+1;// обчислити як не парне
      }
      cout << c0 << endl;// вивід числа при обчисленні
      counter++;// при кожному виводі числа збільшувати значення на 1
    }
    cout << "Steps = ";// вивести кроки
    cout << counter << endl;
    counter = 0;
    }
    else{ //якщо с0 менше нуля
      cout<<"Not a valid number";
    }
  }
}
