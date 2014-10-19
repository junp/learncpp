/*
 * =====================================================================================
 *
 *       Filename:  30.cpp
 *
 *    Description:  30.cpp
 *
 *        Version:  1.0
 *        Created:  2014/10/16 21时42分54秒
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
#include <string>
#include <vector>
using std::vector;

int main()
{
	vector<int> ivec;
	int i;

	while(std::cin >> i){
		ivec.push_back(i);	
	}

	for(vector<int>::size_type idx = 0; idx != ivec.size(); ++idx){
		std::cout << ivec[idx] << std::endl;
	}
	return 0;
}
