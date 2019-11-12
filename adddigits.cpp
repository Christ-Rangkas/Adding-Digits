#include <iostream>

int sumofdigits(int digits){
  if (digits == 0){
    return 0;
  }
  return digits%10 + sumofdigits(digits/10);
}

int main(){
  int uI, sum;
  std::cin >> uI;
  sum = sumofdigits(uI);
  std::cout << sum << std::endl;
  
  return 0;
}
