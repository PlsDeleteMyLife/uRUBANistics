#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

int main(void)
{
	std::string s1 = "52", s2 = "162";
	char action = '*';
	std::cout << "Enter .. : ";
	std::cin >> s1;
	std::cin >> action;
	std::cin >> s2;
	switch(action)
	{
		case('+'):
		{	
			int max = 1,  temp = 0;
				max += std::max(s1.size(), s2.size());
			char Array1[max], Array2[max];
			for(auto i = 0; i < max; i++)
			{
				Array1[i] = 0;
				Array2[i] = 0;
			}
			for(auto i = max - s1.size(); i < max; i++)
			{
				Array1[i] = s1[temp] - 0x30;
				temp++;
			}
			temp = 0;
			for(auto i = max - s2.size(); i < max; i++)
			{
				Array2[i] = s2[temp] - 0x30;
				temp++;
			}
			std::cout << "\n\t";
			for(auto i = max - s1.size(); i < max; i++)
				std::cout << static_cast<int>(Array1[i]);
				std::cout << "\n   " << action << "\n\t";
			for(auto i = max - s2.size(); i < max; i++)
				std::cout << static_cast<int>(Array2[i]);
			std::cout << "\n\t";
			for(auto i = 0; i < max; i++)
				std::cout << "-";
			std::cout << "\n\t";
			temp = max - 1;
			//+
			for (auto i = 0; i < max; i++)
			{
				 Array2[i] += Array1[i];
				if(Array2[i] > 9)
				{
			 	  	Array2[i] -= 10;
		 			Array2[i - 1] += 1;   	
		   	    }
			}
			for(auto i = 0; i < max; i++)	
			std::cout << static_cast<int>(Array2[i]);
		}
		break;
/*		case('-'):
		{
			int max = 0, temp = 0;
			max = s1.size() + s2.size();
			char Array1[max], Array2[max];
			for(auto i = 0; i < max; i++)
			{
				Array1[i] = 0;
				Array2[i] = 0;
			}
			for(auto i = max - s1.size(); i < max; i++)
			{
				Array1[i] = s1[temp] - 0x30;
				temp++;
			}
			temp = 0;
			for(auto i = max - s2.size(); i < max; i++)
			{
				Array2[i] = s2[temp] - 0x30;
				temp++;
			}
			std::cout << "\n\t";
			for(auto i = max - s1.size(); i < max; i++)
				std::cout << static_cast<int>(Array1[i]);
			std::cout << "\n   " << action << "\n\t";
			for(auto i = 0; i < max; i++)
				std::cout << static_cast<int>(Array2[i]);
			std::cout << "\n\t";
			for(auto i = 0; i < max; i++)
				std::cout << "-";
			std::cout << "\n\t";
			temp = max - 1;
			//-
/*			for (auto i = 0; i < max; i++)
			{
				if(Array2[i] - Array1[1] > 0)
				Array2[i] -= Array1[i];
				if(Array2[i] < 0)
				{
					//Array2[i] -= 10;
					//Array2[i - 1] += 1;   	
		   	    }
			}
*///			for(auto i = 0; i < max; i++)	
//				std::cout << static_cast<int>(Array2[i])
//		}
//		break;
/*		case('*'):
		{
			int max = 0, temp = 0;
			max = s1.size() + s2.size();
			char Array1[max], Array2[max];
			for(auto i = 0; i < max; i++)
			{
				Array1[i] = 0;
				Array2[i] = 0;
			}
			for(auto i = max - s1.size(); i < max; i++)
			{
				Array1[i] = s1[temp] - 0x30;
				temp++;
			}
			temp = 0;
			for(auto i = max - s2.size(); i < max; i++)
			{
				Array2[i] = s2[temp] - 0x30;
				temp++;
			}
			std::cout << "\n\t";
			for(auto i = max - s1.size(); i < max; i++)
				std::cout << static_cast<int>(Array1[i]);
			std::cout << "\n   " << action << "\n\t";
			for(auto i = 0; i < max; i++)
				std::cout << static_cast<int>(Array2[i]);
			std::cout << "\n\t";
			for(auto i = 0; i < max; i++)
				std::cout << "-";
			std::cout << "\n\t";
			temp = max - 1;
			for (auto i = 0; i < max; i++)
			{
				for(auto j = 0; j < s1.size(); j++)
				{
					Array2[j] *= Array1[i];
					if(Array2[j] )
					if(Array2[i])
				}
			}
			for(auto i = 0; i < max; i++)	
				std::cout << static_cast<int>(Array2[i]);
				*/
//		}	
		break;
		case('/'):
		{
			//
		}
		break;
		case('%'):
		{
			//
		}
		break;
	}
	std::cout << std::endl;
	return 0;
}