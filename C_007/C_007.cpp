#include <iostream>
using namespace std;

//Есть некоторый текст.
//Используя стандартные строковые функции :

int main()
{
	//■ Подсчитайте количество вхождений слова, заданного пользователем;
	//■ int strlen(const char* s); — Возвращает длину строки s — количество символов, предшествующих нулевому символу.
	//■ char* strstr(const char* s1, const char* s2); - Ищет в строке s1 строку s2.Возвращает адрес первого символа вхождения строки s2.Если строка отсутствует — возвращает нуль.

	cout << "task 01" << endl;
	char* text = new char[300 * sizeof(char)];
	char* word = new char[30 * sizeof(char)];
	cout << "input str >> ";
	gets_s(text, 300);
	cout << "input word >> ";
	gets_s(word, 30);

	int countWord = 0;
	char* currentWord = text;
	while ((currentWord = strstr(currentWord, word)) != NULL && (currentWord += strlen(word)))
	{
		countWord++;
	}
	cout << "count word " << countWord << endl << endl;



	//■ Рассчитайте количество предложений в тексте;
	//■ char* strpbrk(const char* s1, const char* s2); — Ищет в строке s1 первое вхождение любого символа из строки s2.Возвращает указатель на первый найденный символ или нуль — если символ не найден.
	//■ char* strtok_s(char* s1, const char* s2, char** hvost); — Делит исходную строку s1 на лексемы(подстроки), разделенные одним или несколькими символами из строки s2 и записывает остаток строки без подстроки в hvost.

	cout << "task 02" << endl;
	char* text2 = new char[300 * sizeof(char)];
	const char* separators = ".!?";
	cout << "input str >> ";
	gets_s(text2, 300);

	int count2 = 0;
	char* currentWord2 = text2;
	while ((currentWord2 = strpbrk(currentWord2, separators)) != NULL && (currentWord2++))
	{
		count2++;
	}
	cout << "count " << count2 << endl << endl;

	//■ Количество точек и запятых;
	/*■ int ispunct(int character); -проверяет аргумент, передаваемый через параметр сharacter, является ли он символом пуктуации.Возвращаемое значение, отличное от нуля(т.е.истинно), если аргумент функции — это символ пунктуации.Ноль(т.е.ложь), в противном случае.*/

	cout << "task 03" << endl;
	char* text3 = new char[300 * sizeof(char)];
	cout << "input str >> ";
	gets_s(text3, 300);

	int countDot3 = 0;
	int countComma3 = 0;
	char* currentWord3 = text3;
	while ((currentWord3 = strpbrk(currentWord3, ".")) != NULL && (currentWord3++))
	{
		countDot3++;
	}
	currentWord3 = text3;
	while ((currentWord3 = strpbrk(currentWord3, ",")) != NULL && (currentWord3++))
	{
		countComma3++;
	}
	cout << "count dot " << countDot3 << endl << endl;
	cout << "count comma " << countComma3 << endl << endl;
}