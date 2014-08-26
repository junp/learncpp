/*
 * =====================================================================================
 *
 *       Filename:  10.cpp
 *
 *    Description:  10.cpp
 *
 *        Version:  1.0
 *        Created:  2014/08/26 07时53分11秒
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
	for(int i = 50; i <= 100; ++i){
		sum += i;
	}
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
