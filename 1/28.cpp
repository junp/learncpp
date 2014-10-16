/*
 * =====================================================================================
 *
 *       Filename:  28.cpp
 *
 *    Description:  28.cpp
 *
 *        Version:  1.0
 *        Created:  2014/10/16 20时59分56秒
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
using std::string;
using std::cin;
using std::cout;

int main(){
	string s;
	cin >> s;
	for(string::size_type index = 0; index != s.size(); ++index){
		s[index] = tolower(s[index]);
	}
        cout << s << std::endl;
	return 0;       
}
