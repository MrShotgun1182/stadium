# include <iostream>

using namespace std ;

int main ()
{
	char a = 'a' + 160 , b ='a'+ 99 , c = 'a'+161 , d = 'a'+135;
	
	cout << "\t\t VARZESHGAH AZADI "<< endl ;
	cout << "\t\t" <<a << a << a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< endl ;
	cout << "\t      " <<a << a << a << a<< a<<a << a << a << a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< endl ;
	cout << "\t    " <<a << a << a << a<< a<<a << a<<a << a << a << a << a << a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< a << a<< endl ;
	cout << "\t" <<c << c<<c << c<<"__________________________ "<< a << a<< a << a<< endl ;
	cout << "      " <<c<<c << c<<c << c<<"|            |            | "<< a<< a << a<< a << a<< endl ;
	cout << "     " <<c<<c<<c << c<<c << c<<"|---         |         ---| "<< a<< a<< a << a<< a << a<< endl ;
	cout << "    " <<c<<c<<c<<c << c<<c << c<<"|]  |        "<< d << "        |  [| "<< a<< a<< a<< a << a<< a << a<< endl ;
	cout << "     " <<c<<c<<c << c<<c << c<<"|---         |         ---| "<< a<< a<< a << a<< a << a<< endl ;
	cout << "      " <<c<<c << c<<c << c<<"|            |            | "<< a<< a << a<< a << a<< endl ;
	cout << "\t" <<c << c<<c << c<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<< b<<b<<b<< b<< a << a<< a << a<< endl ;
	cout << "\t    "<<c << c<<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c <<c << c << endl ;  
	cout << "\t      " <<c << c<<c << c <<c << c <<c<<c << c<<c << c <<c << c <<c<<c << c<<c << c <<c << c <<c<<c<< endl ;
	cout << "\t\t" <<c << c<<c<<c << c<<c<<c << c<<c<<c << c<<c<<c << c<<c<<c << c<<c<< endl ;
	
	
	int T ;
	
	cout << "\nbazi chand dore anjam mishe ? ";
	cin >> T ;
	
	int  game [4] , games[2] ;
	string answer [T] ;
	
	
	for (int i = 0 ; i < T ; i ++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			cin >> game [j];
		}
		
		games [0] = game [2] + game [0] ;
		games [1] = game [3] + game [1] ;
		
		if (games [0] > games [1] )
		{
			answer [i] = "perspolis" ;
			continue ;
		}
		else if (games [1] > games [0] )
		{
			answer [i] = "esteghlal";
			continue ;
		}
		
		games [0] = 0 ; 
		games [1] = 0 ;
		game[1] *= 2 ;
		game[2] *= 2 ;
		games [0] = game [2] + game [0] ;
		games [1] = game [3] + game [1] ;	
		
		if (games [0] > games [1] )
		{
			answer [i] = "perspolis" ;
			continue ;
		}
		else if (games [1] > games [0] )
		{
			answer [i] = "esteghlal";
			continue ;
		}
		else
		{
			answer [i] = "penalty";
		}
	}
	
	for(int i = 0 ; i < T ; i ++)
	{
		cout << answer [i] << endl ;
	}
	
	
	return 0 ; 
}