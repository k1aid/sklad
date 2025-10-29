//#include <iostream>
//
//
//using namespace std;
//
//
//
//int main(){
//
//
//	double R1, R2, R3;
//
//	cout << "Input R1 : ";
//
//	cin >> R1;
//
//	cout << "Input R2 : ";
//
//	cin >> R2;
//
//	cout << "Input R3 : ";
//
//	cin >> R3;
//
//	double R0 = 1 / R1 + 1 / R2 + 1 / R3;
//
//	cout << "R0 = " << R0 << "\n";
//
//
//
//
//
//
//
//	return 0;
//
//
//}




//#include <iostream>



//using namespace std;



//int main(){



//	const double pi = 3.14;

//	double S, L, R;

//	cout << "L = ";

//	cin >> L;

//	R = L / (2 * pi);

//	S = pi * R * R;

//	cout << "S = " << S << "\n";




//	return 0;



//}

#include <iostream>


using namespace std;


int main(){


	double V, T, A;

	cout << "V = ";

	cin >> V;

	cout << "T = ";

	cin >> T;

	cout << "A = ";

	cin >> A;

	double S = V * T + (A * T * T) / 2;

	cout << "S = " << S << "\n";




	return 0;

}