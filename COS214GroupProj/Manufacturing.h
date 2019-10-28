#ifndef MANUFACTURING_H
#define MANUFACTURING_H
#include<iostream>
#include<string>
using namespace std;

class Manufacturing : public Strategy
{
	public:
		Manufacturing(){};
		void methodToAquire() 
		{
			cout<<"Method used here is by Manufacturing of resources. "<<endl;
		}
};

#endif