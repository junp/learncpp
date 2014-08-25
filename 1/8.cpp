/*
 * =====================================================================================
 *
 *       Filename:  8.cpp
 *
 *    Description:  8.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/25 22时54分46秒
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
	int sum = 0, idx = 0;

	for(; idx < 10; idx++){
		sum += idx;
	}
	std::cout<< "The sum is ";
	std::cout<< sum << std::endl;
	return 0;
}
