#include <iostream>
#include "Human.h"
#include "Myprint.h"
#include "MYBinOp.h"
#include "MyUnOp.h"
#include "MyFunc.h"
#include <algorithm>
#include <numeric>


#include "GreaterThan.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    //////////////////////////////////////////////////////////////#1
    //std::vector <Human> v;
    //v.push_back(Human("Sarshar", 120, 27, 1.78));
    //v.push_back(Human("Daniel", 70, 21, 1.82));
    //v.push_back(Human("Daniel", 75, 26, 1.90));

    //std::for_each(v.begin(), v.end(), MyPrint());      //(auto it = first, it != last, ++it) { f(*it)}
    //MyPrint()(v[0]);
    //MyPrint()(v[1]);

    ///////////////////////////////////////////////////////////////////#2
    //auto it = std::find_if(v.begin(), v.end(),GreaterThan(100));
    //if (it != v.end()) {
    //    std::cout << it->getName() << " "
    //              << it->getWeight() << std::endl;
    //}
    ///////////////////////////////////////////////////////////////////////////////#3
    //auto it2 = std::adjacent_find(v.begin(), v.end());   // v[i] == v[i+1]
    //if (it2 != v.end()) {
    //    std::cout << "same names" << std::endl << it2 -> getName() << std::endl;           ///////for (int i = 0; i < v.size(); i++)  for (int j = i+1; j < v.size(); j++)  if (v[i] == v[j])
    //}
    /////////////////////////////////////////////////////////////////////////////////////////#4
    Human arr[3]{
        Human("Sarshar", 120, 27, 1.78),
        Human("Daniel", 70, 21, 1.82),
        Human("Daniel", 75, 26, 1.90)

    };
    std::vector <Human> v(arr, arr + 3);
    //bool same = std::equal(v.begin(), v.end(), arr);   //v[0] == arr[0] ؟ , v[1] == arr[1] ؟
    //if (same) {                                        // for (; first1 != last1; ++first1, ++first2) { if (!(*first1 == *first2)) return false;}  return true;
    //    std::cout << "Same" << std::endl;
    //}
    //else {
    //    std::cout << "Not Same" << std::endl;
    //}
    ///////////////////////////////////////////////////////////////////////////////////#5
    Human sub[2] {
        arr[0],
        arr[1]
    };
    auto it3 = std::search(v.begin(), v.end(), sub, sub + 2);   //search -> subgroup
    if (it3 != v.end()) {
        std::cout << "Found" << std::endl << it3 -> getName() << std::endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////#6
    double total =  std::accumulate(v.begin(), v.end(), 0.0, MyBinOp());     // sum = sum + age1 , sum = sum + age 2
    double mean  = total / v.size();
    std::cout << "Mean: " << mean << std::endl;
/////////////////////////////////////////////////////////////////////#7
std::vector<double> v2(v.size());
    std::transform(v.begin(), v.end(), v2.begin(), MyUnOp());   /// v2[0] = v[0].getWeight(),v2[1] = v[1].getWeight(), v2[2] = v[2].getWeight()
 //   for ( int i = 0; i < v2.size(); i++ ) {
 //       std::cout << v2[i] << std::endl;
 //   }
    //////////////////////////////////////////////////////////////////#8
std::transform(v2.begin(), v2.end(), v2.begin(), MyFunc(mean)); //v2[0] = v2[0] - mean, v2[1] = v2[1] - mean,v2[2] = v2[2] - mean
//for ( int i = 0; i < v2.size(); i++ ) {
//    std::cout << v2[i] << std::endl;
//}
//////////////////////////////////////////////////////////////////////#9
std::sort(v2.begin(), v2.end());
    for ( int i = 0; i < v2.size(); i++ ) {
        std::cout << v2[i] << std::endl;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
};

