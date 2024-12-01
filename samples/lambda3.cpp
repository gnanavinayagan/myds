#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct Unnamed {
  float operator()(T x, T y) const {
    return x + y;
  }

};


int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif


  auto fn = []() {
    std::cout << "Lambda exp" <<  std::endl;
  };
  fn();
  std::cout << typeid(fn).name() <<  std::endl;

  auto summing = [](auto x, auto y) noexcept(false) -> float {
    return x + y;
  };
  std::cout << "lambda" <<  std::endl;
  std::cout << summing(8, 12) <<  std::endl;
  std::cout << summing(5.2, 1.1) <<  std::endl;


  std::cout << "functor" <<  std::endl;
  Unnamed<int> ui;
  std::cout << ui(2, 3) <<  std::endl;

  Unnamed<float> uf;
  std::cout << uf(2.0, 5.07) <<  std::endl;


}
