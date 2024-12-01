#include <bits/stdc++.h>

using namespace std;




template<typename T, int size, typename cmp>
void sort(T(&a)[size], cmp c)
{

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size ; j++)
    {
      T temp;
      if (c(a[i], a[j])) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}


struct ASCFNCTR {
  bool operator()(int x, int y) {
    // std::cout << "ascend sort in functor" <<  std::endl;
    return x > y;
  }

};

struct DSCFNCTR {
  bool operator()(int x, int y) {
    //std::cout << "descend sort in functor" <<  std::endl;
    return x < y;
  }
};


template<typename T, int n>
void print(T(&a)[n]) {
  for (int i = 0; i < n; i++)
  {
    std::cout << a[i] <<  " ";
  }
  std::cout <<  std::endl;

}


int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif

  ASCFNCTR asc_fnctr;
  DSCFNCTR dsc_fnctr;

  int a[5] = {11, 70, 50, 30, 40};

  std::cout << "Inputs.." <<  std::endl;

  for (auto &x : a) {
    std::cout << x <<  std::endl;
  }


  auto dsc_lambda = [](int x, int y) -> bool { // lambda
    // std::cout << "descend sort in lambda" <<  std::endl;
    return x < y ? true : false;
  };

  auto asc_lambda = [](int x, int y) -> bool  { // lambda
    // std::cout << "ascend sort in lambda" <<  std::endl;
    return x > y ? true : false;
  };


  sort(a, asc_lambda);
  print(a);
  sort(a, dsc_lambda);
  print(a);
  sort(a, asc_fnctr);
  print(a);
  sort(a, dsc_fnctr);
  print(a);


}
