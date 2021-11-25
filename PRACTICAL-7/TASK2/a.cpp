#include<iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	time_t t = time(NULL);
 	tm* tPtr = localtime(&t);
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Year= "<< (tPtr->tm_year)+1900 << endl;;
				break;
		case 2: cout<<"Month= "<< (tPtr->tm_mon)+1 << endl;;
				break;
		case 3: cout<<"Date= "<< (tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
				break;
		case 4: cout<<"Time= "<< (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
				break;
		default: cout<<"Invalid Choice"<<endl;
				break;
	}
	return 0;
}