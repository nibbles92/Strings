/*
 * appController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: droc6148
 */

#include "AppController.h"
#include <iostream>

using namespace std;

void AppController :: start()
{
	string Word = "Boats and Hoes";

	cout << Word.length() << endl;
	cout << Word.at(3) << endl;
	cout << Word.substr(2, 3) << endl;
	cout << Word.substr(0) << endl;
	if(!Word.empty())
	{
	cout << "no boats and hoes" << endl;
	}

	else
	{
	cout << "yea boats and hoes" << endl;
	}

	if(Word.compare("Boats and Hoes")==0)
	{
	cout << "Boats!" << endl;
	}

	else
	{
	cout << "Hoes" << endl;
	}



}
