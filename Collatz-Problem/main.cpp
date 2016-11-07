// Collatz-Problem
// Hier entsteht ein Collatz-Labor
/*//
const unsigned char AE = static_cast<unsigned char>(142);
const unsigned char ae = static_cast<unsigned char>(132);
const unsigned char OE = static_cast<unsigned char>(153);
const unsigned char oe = static_cast<unsigned char>(148);
const unsigned char UE = static_cast<unsigned char>(154);
const unsigned char ue = static_cast<unsigned char>(129);
const unsigned char ss = static_cast<unsigned char>(225);
*///
#include<iostream>
//#include<Windows.h>



int main()
{
//	system("color 80");
	int n=33;
	int gc=0; //gerade Zähler 
	int uc=0; //ungerade Zähler
	int SZE = 1;
	
	
	double NSD = (double)n / (double)SZE;
	
	while (n!=1)
	{
		SZE++;
		if (n % 2 == 0)// Wenn gerade
		{ 
			n = n / 2;
			gc++;
			std::cout << n << std::endl;
		}
		else           // 
		{
			n = 3 * n + 1;
			uc++;
			std::cout << n << std::endl;
		}
	}
	double GUD = (double)gc / (double)uc;
	double UGD = (double)uc / (double)gc;
	std::cout << " gerade: " << gc << std::endl;
	std::cout << " ungerade: " << uc << std::endl;
	std::cout << " n / SZE: " << NSD << std::endl;
	std::cout << " gc / uc: " << GUD << std::endl;
	std::cout << " uc / gc: " << UGD << "\t Legende: gc = gerade Z\x84hler \t uc = ungerade Z\x84hler " << std::endl;


	std::cin.get();
	return 0;
}
