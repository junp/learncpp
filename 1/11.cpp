/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  11.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/26 07时54分37秒
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
	int sum = 0;
	int i = 50;
	while(i <= 100){
		sum += i;
		++i;
	}
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
