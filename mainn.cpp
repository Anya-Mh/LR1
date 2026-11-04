#include <iostream>
#include <string>
#include <clocale>
#include <cwctype>

using namespace std;


int countVowels(const wstring& text) {
    int count = 0;
    wstring vowels = L"уеыаоэяиюУЕЫАОЭЯИЮ";

    for (size_t i = 0; i < text.size(); i++) {
        if (vowels.find(text[i]) != wstring::npos) {
            count++;
        }
    }
    return count;
}

wstring toUpperCase(wstring text) {
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = towupper(text[i]); //переделываем в большие
    }
    return text;
}

wstring toLowerCase(wstring text) {
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = towlower(text[i]); //переделываем в маленькие
    }
    return text;
}

int main() {
    setlocale(LC_ALL, "");

    wstring text;

    wcout << L"Введите строку: ";
    getline(wcin, text);

    int vowels = countVowels(text); //считаем гласные
    
    wcout << L"Количество гласных букв: "; //выводим гласные
    wcout << vowels << endl;

    wcout << L"Верхний регистр: ";
    wstring upperText = toUpperCase(text); //выводим капслок
    wcout << upperText << endl;

    wcout << L"Нижний регистр: ";
    wstring lowerText = toLowerCase(text); //выводим маленькие
    wcout << lowerText << endl;

    return 0;
}