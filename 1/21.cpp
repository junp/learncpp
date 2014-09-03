/*
 * =====================================================================================
 *
 *       Filename:  21.cpp
 *
 *    Description:  21.cpp
 *
 *        Version:  1.0
 *        Created:  2014/09/03 07时48分05秒
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

using std::cin;
using std::cout;
using std::endl;

int main(){
	cout << "Enter two numbers:" << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << endl;
	return 0;
}
