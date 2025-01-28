#include <iostream>
#include <list>

// void printint(int i){
//     std::cout << "int is: " << i <<std::endl;
// }

// void printstring(std::string str){
//     std::cout << "String is: " << str <<std::endl;
// }

// int main( void ) {
//     std::string strArray[3] = {"one", "two", "three"};
//     ::iter(strArray, 3, printstring);
    
//     int array[5] = {1, 2, 3, 4, 5};
//     ::iter(array, 5, printint);
// }
int	main(int ac, char **av) {
	std::list<int>	list;

	for (int i = 0; i < ac; i++)
		list.push_back(i);
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
		std::cout << *i << "\n";
	(void)av;
}
// {
// 	try {
// 		size_t			i;
// 		Array<int>		a(5);
// 		Array<char>		b(3);
// 		Array<float>	c(4);
// 		Array<double>	d;
// 		Array<int>		e;

// 		for (i = 0; i < a.size(); i++)
// 			a[i] = i;
// 		for (i = 0; i < b.size(); i++)
// 			b[i] = i + 0x40;
// 		for (i = 0; i < c.size(); i++)
// 			c[i] = static_cast<float>(i) * 3.14f;

// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "a[" << i << "]: " << a[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "b[" << i << "]: " << b[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "c[" << i << "]: " << c[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "d[" << i << "]: " << d[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}

// 		e = a;
// 		for (i = 0; i < e.size(); i++)
// 			e[i] *= 3;
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "a[" << i << "]: " << a[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "e[" << i << "]: " << e[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}

// 		Array<int>		f(a);
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "a[" << i << "]: " << a[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}
// 		try {
// 			for (i = 0;; i++)
// 				std::cout << "f[" << i << "]: " << f[i] << "\n";
// 		} catch (std::exception &e) {
// 			std::cout << e.what() << "\n";
// 		}

// 		return 0;
// 	} catch (std::exception &e) {
// 		std::cout << "arr: " << e.what() << "\n";
// 	}
// 	return 1;
// }