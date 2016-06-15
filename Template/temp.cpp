#include <iostream>
namespace ICS { // start of namespace definition
    template <typename T>
    T max(T a, T b){
        return (a > b) ? a : b;
    } // end of function max
    template <typename T>
    T min(T a, T b){
        return (a < b) ? a : b;
    } // end of function min
}// end of namespace ICS
using namespace std;
int main(){
    cout << "ICS::max(3, 4) = " << ICS::max(3,4) << endl
        << "ICS::max(43.234, 62.45) = " << ICS::max(43.234, 62.45) << endl;
    cout << "ICS::min(3, 4) = " << ICS::min(3,4) << endl
        << "ICS::min(43.234, 62.45) = " << ICS::min(43.234, 62.45) << endl;
    return 0;
} // end of main()