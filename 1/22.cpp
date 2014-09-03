/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  22.cpp
 *
 *        Version:  1.0
 *        Created:  2014/09/03 07时54分18秒
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
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string s1;
	s1 = "s1";

	string s2(s1);

	string s3("s3");

	string s4(4, 's');

	cout << "s1: " << s1 << endl;

	cout << "s2: " << s2 << endl;

	cout << "s3: "<< s3 << endl;

	cout << "s4 " << s4 << endl;

	return 0;
}
