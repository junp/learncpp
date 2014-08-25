/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  iostream
 *
 *        Version:  1.0
 *        Created:  2014/08/25 20时50分07秒
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
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;

	std::cin >> v1 >> v2;
//	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
	return 0;
}
