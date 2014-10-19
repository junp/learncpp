/*
 * =====================================================================================
 *
 *       Filename:  31.cpp
 *
 *    Description:  31.cpp
 *
 *        Version:  1.0
 *        Created:  2014/10/19 23时36分16秒
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
#include <iostream>
#include <vector>

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

	vector<int>::iterator iter = ivec.begin();

	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix){
		cout << ivec[ix] << endl;
	}
	return 0;
}
