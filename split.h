#pragma once

#ifndef GUARD_split_h
#define GUARD_split.h

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//�μ��� ������ ���� true, �׷��� ���� ���� false
bool space(char);


//�μ��� ������ ����  false, �׷��� ���� ���� true
 bool not_space(char);

vector<string> split(const string&);


		

#endif