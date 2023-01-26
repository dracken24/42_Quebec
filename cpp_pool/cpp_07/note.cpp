// Template: ex.

#include <iostream>
#include <iomanip>

// // template<typename T, typename U>
// template<typename T>
// class List
// {
// 	public:
// 		List<T>(T const &content)
// 		{
// 			this->_content = content;
// 			this->next = NULL;
// 		}

// 		List<T>(List<T> const &list)
// 		{
// 			*this = list;
// 		}

// 		~List<T>(void)
// 		{
// 			if (this->next)
// 				delete this->next;
// 		}
	
// 	private:
// 		T       *_content;
// 		List<T> *next;

// };

// template<typename T>
// T const &max(T const &x, T const &y)
// {
// 	return (x >= y ? x : y);
// }

// int main (void)
// {
// 	int a = 1, b = 2;
// 	double c = 7.0, d = 4.0;
// 	float e = 3.0, f = 5.0;
// 	char g = 'a', h = 'b';

// 	std::cout << "*** Variables ***" << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "int: " << max<int>(a, b) << std::endl;
// 	std::cout << "double: " << max<double>(c, d) << std::endl;
// 	std::cout << "float: " << max<float>(e, f) << std::endl;
// 	std::cout << "char: " << max<char>(g, h) << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "*** Class ***" << std::endl;
// 	std::cout << std::endl;

// 	// List<int> list(42, 242.424);
// 	List<int> list(42);
// 	List<float> list2(42.42);
// 	List<List<int> > list3(list);

// 	return 0;
// }

/******************************************************************************************/

// template< typename T = float > // float par defaut
// class Vertex
// // peut etre dans un fichier .tpp
// {
// 	public:
// 		Vertex(T const &x, T const &y, T const &z) :
// 		_x(x),
// 		_y(y),
// 		_z(z)
// 		{
// 			return;
// 		}

// 		Vertex(Vertex<T> const &vertex)
// 		{
// 			*this = vertex;
// 		}

// 		~Vertex(void)
// 		{
// 			return;
// 		}

// 	// Getters //
// 		T const &getX(void) const
// 		{
// 			return this->_x;
// 		}

// 		T const &getY(void) const
// 		{
// 			return this->_y;
// 		}

// 		T const	&getZ(void) const
// 		{
// 			return this->_z;
// 		}

// 	private:
// 		T	const _x;
// 		T	const _y;
// 		T	const _z;

// 		Vertex(void);
// };

// template<typename T>
// std::ostream &operator<<(std::ostream &o, Vertex<T> const &vertex)
// {
// 	std::cout.precision(8); // nbr de chiffres affichable avant et apres la virgule (chiffres total = 8)
// 	o << "Vertex(X: " << vertex.getX() << ", Y: " << vertex.getY() << ", Z: " << vertex.getZ() << ")";

// 	return o;
// }

// int main(void)
// {
// 	Vertex<> v1(1.0, 2.0, 3.0);
// 	Vertex<> v2(4.0, 45.443, 6.9994);
// 	Vertex<> v3(7, 8, 9);
// 	Vertex<int> v4(7, 8, 9);

// 	std::cout << v1 << std::endl;
// 	std::cout << v2 << std::endl;
// 	std::cout << v3 << std::endl;
// 	std::cout << v4 << std::endl;

// 	return 0;
// }

/***************************************************************************************/

template< typename T, typename U >
class Pair
{
	public:
		Pair<T, U>(T const &first, U const &second) :
		_first(first),
		_second(second)
		{
			std::cout << "Generic Template" << std::endl;

			return;
		}

		Pair<T, U>(Pair<T, U> const &pair)
		{
			*this = pair;
		}

		~Pair<T, U>(void)
		{
			return;
		}

	// Getters //
		T const &getFirst(void) const
		{
			return this->_first;
		}

		U const &getSecond(void) const
		{
			return this->_second;
		}

	private:
		T	const &_first;
		U	const &_second;

		Pair<T, U>(void);
};


// Specialisation de template partielle //
template< typename U >
class Pair<int, U> // ** //
{
	public:
		Pair<int, U>(int first, U const &second) :
		_first(first),
		_second(second)
		{
			std::cout << "Specialized Template int/T" << std::endl;

			return;
		}

		Pair<int, U>(Pair<int, U> const &pair)
		{
			*this = pair;
		}

		~Pair<int, U>(void)
		{
			return;
		}

	// Getters //
		int getFirst(void) const
		{
			return this->_first;
		}

		U const &getSecond(void) const
		{
			return this->_second;
		}

	private:
		int	_first;
		U	const &_second;

		Pair<int, U>(void);
};


// Specialisation de template complete //
template<>
class Pair<bool, bool> // ** //
{
	public:
		Pair<bool, bool>(bool first, bool second)
		{
			std::cout << "Specialized Template bool/bool" << std::endl;
			this->_nbr = 0;
			this->_nbr |= static_cast<int>(first) << 0;
			this->_nbr |= static_cast<int>(second) << 1;

			return;
		}

		~Pair<bool, bool>(void)
		{
			return;
		}

	// Getters //
		bool getFirst(void) const
		{
			return (this->_nbr & 0x01);
		}

		bool getSecond(void) const
		{
			return (this->_nbr & 0x02);
		}

	private:
		int	_nbr;

		Pair<bool, bool>(void);
};

template<typename T, typename U>
std::ostream &operator<<(std::ostream &o, Pair<T, U> const &pair)
{
	std::cout.precision(8); // nbr de chiffres affichable avant et apres la virgule (chiffres total = 8)
	o << "Pair(First: " << pair.getFirst() << ", Second: " << pair.getSecond() << ")";

	return o;
}

std::ostream &operator<<(std::ostream &o, Pair<bool, bool> const &pair)
{
	o << "Pair(First: " << pair.getFirst() << ", Second: " << pair.getSecond() << ")";

	return o;
}

int main(void)
{
	Pair<float, int> p1(1.0f, 2);
	Pair<int, float> p2(3, 4.442f);
	Pair<std::string, int> p3("TEST", 6);
	Pair<int, int> p4(7, 8);
	Pair<bool, bool> p5(true, false);
	Pair<bool, bool> p6(false, true);

	std::cout << std::endl;

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;
	std::cout << p5 << std::endl;
	std::cout << p6 << std::endl;

	return 0;
}
