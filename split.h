#pragma once

#ifndef GUARD_split_h
#define GUARD_split.h

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//인수가 공백일 때는 true, 그렇지 않을 때는 false
bool space(char);


//인수가 공백일 떄는  false, 그렇지 않을 때는 true
 bool not_space(char);

vector<string> split(const string&);


		

#endif