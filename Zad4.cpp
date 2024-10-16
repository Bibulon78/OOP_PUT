#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Parrot {
private:
	vector<string> phrases;

public:
	Parrot(string initialPhrase) {
		srand(static_cast<unsigned int>(time(0)));
		phrases.push_back(initialPhrase);
	}

	void say() const {
		cout << phrases[rand() % phrases.size()] << endl;
	}

	void say(int counter) const {
		for (int i = 0; i < counter; ++i) {
			say();
		}
	}

	void addPhrase(const string& newPhrase) {
		phrases.push_back(newPhrase);
	}
	/*
	Parrot(string initialPhrase) {
        phrase = initialPhrase;
    }
	void setPhrase(string newPhrase) {
		phrase = newPhrase;
	}
	void say() const {
		cout << phrase << endl;
	}
	*/
};

int main() {
	Parrot papuga("Dzwoni papuga");

	papuga.addPhrase("Bazinga");
	papuga.addPhrase("Test01");
	papuga.addPhrase("Virtual XI");

	papuga.say(3);

	return 0;
}