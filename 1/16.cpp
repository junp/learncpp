/*
 * =====================================================================================
 *
 *       Filename:  16.cpp
 *
 *    Description:  16.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/28 07时37分32秒
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
	int v1, v2, idx = 0;
	std::cin >> v1 >> v2;
	for(int i = v1; i <= v2; ++i){
		std::cout << i;
		++idx;
		if(idx % 10 == 0){
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}
