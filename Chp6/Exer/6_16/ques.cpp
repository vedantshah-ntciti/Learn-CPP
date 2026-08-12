#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int partA(default_random_engine& engine) {
	uniform_int_distribution <unsigned int> randomInt(1,2);
	
	return randomInt(engine);
}
 

int partB(default_random_engine& engine) {
	uniform_int_distribution <unsigned int> randomInt(1,100);
	
	return randomInt(engine);
}
 

int partC(default_random_engine& engine) {
	uniform_int_distribution <unsigned int> randomInt(0,9);
	
	return randomInt(engine);
}
 

int partD(default_random_engine& engine) {
	uniform_int_distribution <unsigned int> randomInt(1000,1112);
	
	return randomInt(engine);
}
 

int partE(default_random_engine& engine) {
	uniform_int_distribution <int> randomInt(-1,1);
	
	return randomInt(engine);
}
 

int partF(default_random_engine& engine) {
	uniform_int_distribution <int> randomInt(-1,11);
	
	return randomInt(engine);
}
 
int main() {
	default_random_engine engine(static_cast <unsigned int> (time(0)));
	cout << partA(engine) <<" "<< partB(engine) <<" "<< partC(engine) <<" "<< partD(engine) <<" "<< partE(engine) <<" "<< partF(engine) << endl;
}
