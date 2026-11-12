#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int countVowels(const wstring& text) { //функция подсчёта данных
    int count = 0;
    wstring vowels = L"eyuoaiEYUIOAуеыаоэяиюУЕЫАОЭЯИЮ";

    for (size_t i = 0; i < text.size(); i++) {
        if (vowels.find(text[i]) != wstring::npos) {
            count++;
        }
    }
    return count;
}

wstring toUpperCase(wstring text) {  //приводим буквы к верхнему регистру
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = towupper(text[i]); 
    }
    return text;
}

wstring toLowerCase(wstring text) {  //приводим буквы к нижнему регистру
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = towlower(text[i]); 
    }
    return text;
}

int main() {
    setlocale(LC_ALL, "");

    wstring text;

    wcout << L"Введите строку: ";
    getline(wcin, text);

    int vowels = countVowels(text); //считаем гласные буквы
    
    wcout << L"\nКоличество гласных букв: "; //выводим количество гласных
    wcout << vowels << endl;

    wcout << L"\nВерхний регистр: ";
    wstring upperText = toUpperCase(text); //выводим строку приведённую к верхнему регистру
    wcout << upperText << endl;

    wcout << L"\nНижний регистр: ";
    wstring lowerText = toLowerCase(text); //выводим строку приведённую к нижнему регистру
    wcout << lowerText << endl;

    //Это моя новая ветка, всем хорошего настроения! 

    //ещё один комментарий!

    return 0;
}