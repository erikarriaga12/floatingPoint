#include<limits>
#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;


int main(int argc, char** argv)
{
	float max= std::numeric_limits<float>::max();
	float min = max*-1;
	//cout<<"max = " <<max <<endl;
	//cout<<"Min = "<< min <<endl;
	float bound= max/50;
	float boundDefault = max/50;

	//cout<<"in spaces "<<space<< endl;
//	float boundry = min;
	//cout<<"min"<< min << "bounds "<< bound<<endl;
	
	for (int i=0; i<50;i++)
	{
		unsigned int count = 0;
		//boundry=boundry+space;
		
		while(min<bound)
		{
			float temp = nextafter(min, bound);
			min = temp;
			count++;
		}
		min=bound;
		bound += boundDefault;
		cout<<"count at bucket "<<i << " is " << count<< endl;
		//cout<<"boundry change "<<boundry<<endl;
		//cout<<"I have n elements ";
	}

}

