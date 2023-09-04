#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int myAmount = 0;
std::mutex m;

void addMoney(int x) {
	m.lock();
	myAmount+=x;
	cout<<"MyAmt: "<<myAmount<<endl;
	m.unlock();
}

int main() {
	std::thread t1(addMoney,5);
	std::thread t2(addMoney,7);

	t1.join();
	t2.join();

	cout << myAmount << endl;
	return 0;
}







