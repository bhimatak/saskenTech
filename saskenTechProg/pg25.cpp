#include <iostream> // std::cout
#include <utility> // std::move
#include <vector> // std::vector
#include <string> // std::string
int main() {
    std::string str = "Hello world.";
    std::vector<std::string> v;
    // use push_back(const T&), copy
    // v.push_back(str);
    // "str: Hello world."
    std::cout << "str: " << str << "\tAddress: "<<&str<<std::endl;
    // use push_back(const T&&),
    // no copy the string will be moved to vector,
    // and therefore std::move can reduce copy cost
    v.emplace_back(str);
    // v.push_back(std::move(str));
    // str is empty now
    auto a = v.begin();
    std::cout<<"vector: "<<*a<<"Address: "<<&v[0]<<"\t"<<&*a<<std::endl;
    std::cout << "str: " << str <<"Address: "<<&str<< std::endl;
    //delete str
    return 0;
}
