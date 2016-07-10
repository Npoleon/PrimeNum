#include "stdafx.h"
#include <iostream>
#include <cstdint>

bool isPrime(int x);
int getDigit();

int main(){
	int digit = getDigit();
	if(isPrime(digit))
		std::cout << "The number " << digit << " is in fact a prime number!" << std::endl;
	else
		std::cout << "The number " << digit << " is not a prime number!" << std::endl;
	return 0;
}

bool isPrime(int x){
	if(x == 2 || x == 3 || x == 5 || x == 7)
		return true;
	else
		return false;
}

int getDigit(){
	std::cout << "Please input a single digit number." << std::endl;
	int x;
	std::cin >> x;
	return x;
}