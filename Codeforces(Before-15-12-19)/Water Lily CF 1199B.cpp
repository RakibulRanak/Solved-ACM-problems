    #include<bits/stdc++.h>
    using namespace std;
    #define pi  3.14159265359
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
     
    	double h, l;
    	cin >> h >> l;
    	double oti = sqrt((h * h) + (l * l));
    	double kunupore = acos((h * h + oti * oti - l * l) / (2 * h * oti));
    	kunupore *= (180 / pi);
    	//cout << kunupore << endl;
    	double kundane = 90 - kunupore;
    	//cout << kundane << endl;
    	double kundaneniche = kunupore - kundane;
    	//cout << kundaneniche << endl;
     
    	kundaneniche *= (pi / 180);
    	cout<<setprecision(14);
    	cout <<fixed<< tan(kundaneniche)*l << endl;
     
     
    	return 0;
     
    }