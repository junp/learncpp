/*
 * =====================================================================================
 *
 *       Filename:  7.cpp
 *
 *    Description:  7.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/25 22时03分20秒
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
	int sum = 0, i = 1;

	while (i <= 10){
		sum += i;
		++i;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;

	return 0;
}
