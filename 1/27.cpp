/*
 * =====================================================================================
 *
 *       Filename:  27.cpp
 *
 *    Description:  27.cpp
 *
 *        Version:  1.0
 *        Created:  2014/09/16 07时53分02秒
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
using std::cout;
using std::endl;

int main(){
	string s("Hello World!!!");
	string::size_type punct_cnt = 0;

	for(string::size_type index = 0; index != s.size(); ++index){
		if (ispunct(s[index])){
			++punct_cnt;
		}
	}

	cout << punct_cnt << " punctuation characters in " << s << endl;

	return 0;
}

