#include <bits/stdc++.h>

using namespace std;




template<typename T, int size, typename Callback>
void ForEach(T(&a)[size], Callback cb) {
  for (int i = 0; i < size; i++) {
    cb(a[i]);
  }
  std::cout <<  std::endl;
}

template<typename T>
struct __unnamed {
  mutable int offset;
  __unnamed(int off): offset{off} {}
  void operator()(T x) const {
    std::cout << x + offset <<  "\t";
    ++offset;
  }

};



int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif



  int a[5] = {10, 30, 50, 20, 40};

  std::cout << "Inputs.." <<  std::endl;

  ForEach(a, [](auto x) {
    std::cout << x <<  "\t";
  });


  int s = 3;


  __unnamed<int> ui(5);
  ForEach(a, ui);

  // auto lmb1 = [&s](auto x)  { // lambda
  //   std::cout << x +  s <<  "\t";
  // };

  // s = 1;
  // // auto lmb2 = [s](auto x) mutable { //
  // //   std::cout << x +  s <<  "\t";
  // //   s++; // change local copy inside lambda only. value does not affect next lambda
  // // };


  // auto lmb2 = [&s](auto x)  { //
  //   std::cout << x +  s <<  "\t";
  //   s++; // change global copy. this change will affect next lambda
  // };



  // ForEach(a, lmb1);

  // std::cout << "lambda2. value of s: " << s <<  std::endl;

  // ForEach(a, lmb2);



  // auto lmb3 = [s](auto x) mutable { // lambda
  //   std::cout << x +  s <<  "\t";
  // };
  // std::cout << "lambda3. value of s: " << s <<  std::endl;
  // ForEach(a, lmb3);







}
