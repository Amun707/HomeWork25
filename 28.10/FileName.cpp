#include <iostream>
#include <string>


//Задача 2. Палиндром.
bool is_palindrom(std::string word) {
	//Обеспечение нерегистрозависимости функции посредством возведения строки в нижний регистр
	for (int i = 0; i < word.length(); i++)
		word[i] = std::tolower(word[i]);
	for (int i = 0; i < word.length() / 2; i++) 
		if (word[i] != word[word.length() - i - 1]) 
			return false;
	return true;
}


//Задача 3.
int special_chars(std::string str) {
	//плохой способ решения
	/* int counter = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '!')
			counter++;
	return counter; */

	//Правильный способ решения.
	const std::string specials = " ,.!?";//строка со всеми символами, которые необходимо найти в передаваемой строке
	int counter = 0;//счетчик спец.символов
	for(int i = 0; i < str.length(); i++)//цикл перебирающий строку str
		for(int j = 0; j < specials.length(); j++)//цикл перебирающий строку specials
			if (str[i] == specials[j]) {
				counter++;
				break;
			}
	return counter;
}


//Задача 4. 
std::string last_char(std::string last, char n) {
	last.rfind(n);
	// TODO: функция не должна использовать цикл. Необходимо
	// применять rfind и substr. Функция возвращает строку!
}


int main() {
	system("chcp 1251>nul");
	int n, m;


	//Задача 1.
	std::cout << "Задача 1. Пример.\n";
	std::string str1 = "Hello world";
	char sym = 'o';
	std::string res;
	for (int i = 0; i < str1.length(); i++)
		if (str1[i] == sym)
			res += sym;
	std::cout << res << std::endl << std::endl;


	//Задача 2. Палиндром.
	std::cout << "Задача 2.\nВведите слово -> ";
	std::string str2;
	std::getline(std::cin, str2);
	if (is_palindrom(str2))
		std::cout << "Слово - палиндром.\n\n";
	else
		std::cout << "Слово не палиндром.\n\n";


	//Задача 3. Спец.символы.
	std::cout << "Задача 3.\nВведите строку -> ";
	std::string str3;
	std::getline(std::cin, str3);
	std::cout << "Спец.символов в строке: " << special_chars(str3) << "\n\n";


	//Задача 4.
	std::cout << "Задача 4.\nВведите строку ->\n";
	std::string str4;
	std::getline(std::cin, str4);
	std::cout << "Введите символ -> ";
	char sym4;
	std::cin >> sym4;
	std::cout << last_char(str4, sym4) <<"\n\n";
	


	return 0;
}