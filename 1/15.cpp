/*
 * =====================================================================================
 *
 *       Filename:  15.cpp
 *
 *    Description:  15.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/28 07时34分42秒
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
	std::cout << "Input two num:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;

	for(int i = v1; i <= v2; ++i){
		std::cout << i << std::endl;
	}
	return 0;
}
