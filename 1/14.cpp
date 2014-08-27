/*
 * =====================================================================================
 *
 *       Filename:  14.cpp
 *
 *    Description:  14.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/27 07时36分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

int main(){
	std::cout << "Input two num" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;

	int lower, upper;

	if(v1 < v2){
		lower = v1;
		upper = v2;
	}
	else{
		lower = v2;
		upper = v1;
	}
	int sum = lower;
	for(int i = lower; i < upper; ++i){
		sum += i;
	}

	std::cout << "The sum is " << sum << std:: endl;
	return 0;
}
