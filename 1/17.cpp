/*
 * =====================================================================================
 *
 *       Filename:  17.cpp
 *
 *    Description:  17.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/28 07时49分16秒
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
	std::cout << "Enter two num" << std::endl;
	int v1, v2, sum = 0;
	std::cin >> v1 >> v2;

	for(int i = v1; i <= v2; ++i){
		sum += i;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
