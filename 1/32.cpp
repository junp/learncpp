/*
 * =====================================================================================
 *
 *       Filename:  32.cpp
 *
 *    Description:  32.cpp
 *
 *        Version:  1.0
 *        Created:  2014/10/19 23时48分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec;
	int i;

	while(cin >> i){
		ivec.push_back(i);
	}


	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter){
		cout << *iter << endl;
	}
	return 0;
}
