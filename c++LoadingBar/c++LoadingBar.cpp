#include <iostream>
#include <thread>
#include <string>

using namespace std;

int main() {
	cout << R"(
             _____  _____ _____ _____ 
     /\    / ____|/ ____|_   _|_   _|
    /  \  | (___ | |      | |   | |  
   / /\ \  \___ \| |      | |   | |  
  / ____ \ ____) | |____ _| |_ _| |_ 
 /_/    \_\_____/ \_____|_____|_____|


)" << endl;
	cout << endl;

	cout << "Loading..." << endl;
	cout << "[";

	for (int i = 0; i <= 100; i++) {
		cout << "=";
		this_thread::sleep_for(50ms);
	}

	cout << "]" << endl;
	cout << endl;
	cout << "\033[32mDone!\033[0m" << endl;
	return 0;
}